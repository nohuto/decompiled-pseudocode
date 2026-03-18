/*
 * XREFs of scl_ScaleBackCurrentPhantomPoints @ 0x1C014C778
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_ScaleBack @ 0x1C014C804 (scl_ScaleBack.c)
 */

__int64 __fastcall scl_ScaleBackCurrentPhantomPoints(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx
  int v8; // r9d

  v3 = a2;
  v4 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  v5 = *(_QWORD *)a1 + 4 * v4;
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleBack(a2 + 264, 1, v5, v5, 8);
    v7 = v3 + 280;
  }
  else
  {
    scl_ScaleBack(a2 + 232, 1, v5, v5, 8);
    v7 = v3 + 248;
  }
  v8 = *(_QWORD *)(a1 + 8) + 4 * v4;
  return scl_ScaleBack(v7, v6, v8, v8, 8);
}
