/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C00D6ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 *v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax

  EnterSharedCrit(1LL);
  v1 = 0LL;
  v2 = gpqForeground;
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) )
  {
    v3 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    v2 = gpqForeground;
    v0 = *(__int64 **)(gpqForeground + 80LL);
    if ( *(_QWORD *)(v3 + 416) == v0[3] )
      v1 = *v0;
  }
  UserSessionSwitchLeaveCrit(v2, v0);
  return v1;
}
