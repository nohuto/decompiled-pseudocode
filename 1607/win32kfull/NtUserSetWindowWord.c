/*
 * XREFs of NtUserSetWindowWord @ 0x1C021AFF0
 * Callers:
 *     <none>
 * Callees:
 *     _SetWindowWord @ 0x1C0227D60 (_SetWindowWord.c)
 */

__int64 __fastcall NtUserSetWindowWord(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 v9; // bx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
    v9 = SetWindowWord(v6, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
