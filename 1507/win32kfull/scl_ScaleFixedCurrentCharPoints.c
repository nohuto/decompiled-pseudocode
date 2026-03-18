/*
 * XREFs of scl_ScaleFixedCurrentCharPoints @ 0x1C011E444
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C00B991C (fsg_MergeGlyphData.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00BA194 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     scl_ScaleFromFixedFUnits @ 0x1C011E558 (scl_ScaleFromFixedFUnits.c)
 */

__int64 __fastcall scl_ScaleFixedCurrentCharPoints(__int64 *a1, __int64 a2)
{
  __int64 v3; // r8
  int v5; // ecx
  int v6; // eax
  int v7; // edx

  v3 = *a1;
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleFromFixedFUnits(
      a2 + 264,
      *(_DWORD *)(a2 + 184),
      v3,
      v3,
      (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2) + 1));
    v5 = a2 + 280;
    v6 = (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2) + 1);
    v7 = *(_DWORD *)(a2 + 188);
  }
  else
  {
    scl_ScaleFromFixedFUnits(
      a2 + 232,
      *(_DWORD *)(a2 + 176),
      v3,
      *a1,
      (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2) + 1));
    v5 = a2 + 248;
    v6 = (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2) + 1);
    v7 = *(_DWORD *)(a2 + 180);
  }
  return scl_ScaleFromFixedFUnits(v5, v7, a1[1], a1[1], v6);
}
