/*
 * XREFs of CmpInitializeLazyWriters @ 0x1405A74EC
 * Callers:
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E4240 (PoRegisterPowerSettingCallback.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  HANDLE ThreadHandle; // [rsp+60h] [rbp+8h] BYREF

  v0 = &unk_140316518;
  dword_140316530 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_1403165F0 = CmpLazyReconcileIntervalInSeconds;
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
