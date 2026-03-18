/*
 * XREFs of NtUserExcludeUpdateRgn @ 0x1C0219750
 * Callers:
 *     <none>
 * Callees:
 *     _ExcludeUpdateRgn @ 0x1C00CC3D8 (_ExcludeUpdateRgn.c)
 */

__int64 __fastcall NtUserExcludeUpdateRgn(HDC a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int updated; // ebx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a2);
  updated = 0;
  if ( v4 && a1 )
    updated = ExcludeUpdateRgn(a1, v4);
  UserSessionSwitchLeaveCrit(v6, v5);
  return updated;
}
