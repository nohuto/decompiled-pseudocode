/*
 * XREFs of PtInRect @ 0x1C00E29A0
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C00E0A3C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     RemoveOverlap @ 0x1C00E2E5C (RemoveOverlap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PtInRect(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( (int)a2 >= *a1 && (int)a2 < a1[2] )
  {
    v2 = HIDWORD(a2);
    if ( (int)v2 >= a1[1] && (int)v2 < a1[3] )
      return 1;
  }
  return result;
}
