/*
 * XREFs of scl_ScaleOldPhantomPoints @ 0x1C00BA3FC
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00BA194 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     scl_Scale @ 0x1C00BA498 (scl_Scale.c)
 */

__int64 __fastcall scl_ScaleOldPhantomPoints(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // edx
  int v8; // ecx

  v4 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1);
  v5 = *(_QWORD *)(a1 + 16) + 4 * v4;
  v6 = *(_QWORD *)(a1 + 32) + 4 * v4;
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_Scale(a2 + 264, *(_DWORD *)(a2 + 184), v6, v5, 8);
    v7 = *(_DWORD *)(a2 + 188);
    v8 = a2 + 280;
  }
  else
  {
    scl_Scale(a2 + 232, *(_DWORD *)(a2 + 176), v6, v5, 8);
    v7 = *(_DWORD *)(a2 + 180);
    v8 = a2 + 248;
  }
  return scl_Scale(v8, v7, *(_QWORD *)(a1 + 40) + 4 * v4, *(_QWORD *)(a1 + 24) + 4 * v4, 8);
}
