/*
 * XREFs of ClientDeliverUserApc @ 0x1401B6300
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1402157B8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401B68F4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 ClientDeliverUserApc()
{
  unsigned int Count; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bl
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  v3 = 0;
  UserSessionState = W32GetUserSessionState(v2, v1);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
  {
    v3 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v5);
  EtwTraceBeginCallback(85LL);
  KeUserModeCallback(85LL, 0LL, 0LL, &v8, &v7);
  EtwTraceEndCallback(85LL);
  result = EnterCrit(1LL, 0LL);
  if ( v3 )
    return EnterMitRitHazardCrit();
  return result;
}
