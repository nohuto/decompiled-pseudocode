/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00DFF60
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTimerCallback @ 0x1C00DFFB4 (ValidateTimerCallback.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterSharedCrit(0LL, 1LL);
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v4 = ValidateTimerCallback(v2, a1);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
