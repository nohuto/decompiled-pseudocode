/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C01065D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax

  EnterSharedCrit(0LL, 1LL);
  v3 = 0LL;
  v4 = gpqForeground;
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) )
  {
    v5 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v0, v1, v2);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    v4 = gpqForeground;
    v0 = *(__int64 **)(gpqForeground + 88LL);
    if ( *(_QWORD *)(v5 + 408) == v0[3] )
      v3 = *v0;
  }
  UserSessionSwitchLeaveCrit(v4, v0);
  return v3;
}
