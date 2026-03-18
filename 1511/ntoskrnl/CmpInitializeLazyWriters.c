/*
 * XREFs of CmpInitializeLazyWriters @ 0x1405308E4
 * Callers:
 *     CmpCmdInit @ 0x1405301A0 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PoRegisterPowerSettingCallback @ 0x1404568F0 (PoRegisterPowerSettingCallback.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  HANDLE ThreadHandle; // [rsp+60h] [rbp+8h] BYREF

  v0 = &unk_1402C7438;
  dword_1402C7450 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_1402C7510 = CmpLazyReconcileIntervalInSeconds;
  do
  {
    KeInitializeTimerEx(&CmpLazyWriterData + 3 * v1, NotificationTimer);
    KeInitializeEvent((PRKEVENT)(&CmpLazyWriterData + 3 * v1 + 2), SynchronizationEvent, 0);
    KeInitializeDpc(
      (PRKDPC)&CmpLazyWriterData + 3 * v1 + 1,
      (PKDEFERRED_ROUTINE)CmpLazyFlushDpcRoutine,
      &CmpLazyWriterData + 3 * v1);
    *v0 = 0LL;
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           0LL,
           0LL,
           (PKSTART_ROUTINE)CmpLazyWriteWorker,
           &CmpLazyWriterData + 3 * v1) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v1, 0LL, 0LL);
    NtClose(ThreadHandle);
    v1 = (unsigned int)(v1 + 1);
    v0 += 24;
  }
  while ( (unsigned int)v1 < 2 );
  CmpUserPresent = 1;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)CmpUserPresenceCallback,
           0LL,
           0LL);
}
