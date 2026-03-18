/*
 * XREFs of NtUserSetClassWord @ 0x1C021FA00
 * Callers:
 *     <none>
 * Callees:
 *     _SetClassWord @ 0x1C01E8808 (_SetClassWord.c)
 */

__int64 __fastcall NtUserSetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 v9; // bx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
    v9 = SetClassWord(v6, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
