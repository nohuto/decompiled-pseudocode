/*
 * XREFs of scl_ScaleBackCurrentCharPoints @ 0x1C014C6E4
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_ScaleBack @ 0x1C014C804 (scl_ScaleBack.c)
 */

__int64 __fastcall scl_ScaleBackCurrentCharPoints(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // edi
  int v6; // edx
  int v7; // edx
  int v8; // ecx

  v2 = *a1;
  v3 = *((__int16 *)a1 + 40) - 1;
  v4 = a2;
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleBack(a2 + 264, a2, v2, v2, (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * v3) + 1));
    v7 = *(unsigned __int16 *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1));
    v8 = v4 + 280;
  }
  else
  {
    v6 = (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * v3) + 1);
    scl_ScaleBack(v4 + 232, v6, v2, *a1, (unsigned __int16)v6);
    v7 = *(unsigned __int16 *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1));
    v8 = v4 + 248;
  }
  LOWORD(v7) = v7 + 1;
  return scl_ScaleBack(v8, v7, a1[1], a1[1], (unsigned __int16)v7);
}
