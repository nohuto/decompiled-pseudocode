/*
 * XREFs of NtUserValidateHandleSecure @ 0x1401C25A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserValidateHandleSecure(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx

  EnterCrit(0LL, 0LL);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v2);
  v5 = 0;
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 0x20000000) != 0 )
    v5 = ValidateHandleSecure(a1, 3LL);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
