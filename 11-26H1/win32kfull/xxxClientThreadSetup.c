/*
 * XREFs of xxxClientThreadSetup @ 0x1401B6400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401B68F4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 xxxClientThreadSetup()
{
  unsigned int Count; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bl
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v8 = 0;
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
  EtwTraceBeginCallback(84LL);
  v6 = KeUserModeCallback(84LL, 0LL, 0LL, &v9, &v8);
  EtwTraceEndCallback(84LL);
  EnterCrit(1LL, 0LL);
  if ( v3 )
    EnterMitRitHazardCrit();
  return v6;
}
