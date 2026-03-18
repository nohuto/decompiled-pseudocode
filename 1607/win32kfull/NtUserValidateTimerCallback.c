/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00FE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTimerCallback @ 0x1C00FE148 (ValidateTimerCallback.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  EnterSharedCrit(0LL, 1LL);
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v3, v4, v5);
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v7 = (int)ValidateTimerCallback(v2, a1);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
