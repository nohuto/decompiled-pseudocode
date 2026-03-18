/*
 * XREFs of scl_ScaleBackCurrentCharPoints @ 0x1C0147FE0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00B2D90 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     scl_ScaleBack @ 0x1C01480E4 (scl_ScaleBack.c)
 */

__int64 __fastcall scl_ScaleBackCurrentCharPoints(__int64 *a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // r8
  __int16 v5; // dx
  int v6; // edx
  int v7; // ecx

  v2 = a2;
  v3 = *a1;
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleBack(a2 + 264, a2, v3, v3, (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2) + 1));
    v6 = *(unsigned __int16 *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2);
    v7 = v2 + 280;
  }
  else
  {
    v5 = *(_WORD *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2);
    scl_ScaleBack(v2 + 232, (unsigned __int16)(v5 + 1), v3, *a1, (unsigned __int16)(v5 + 1));
    v6 = *(unsigned __int16 *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2);
    v7 = v2 + 248;
  }
  LOWORD(v6) = v6 + 1;
  return scl_ScaleBack(v7, v6, a1[1], a1[1], (unsigned __int16)v6);
}
