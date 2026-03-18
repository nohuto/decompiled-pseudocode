/*
 * XREFs of vGetPosInfo @ 0x1400D9EC8
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400D9F98 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vGetPosInfo(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // edx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 8) * a2;
  if ( (*(_DWORD *)(a1 + 232) & 0x100) != 0 )
    v3 *= 16;
  *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 16LL) + v3;
  result = *(_QWORD *)(a1 + 64);
  a3[1] = *(_DWORD *)(result + 20);
  return result;
}
