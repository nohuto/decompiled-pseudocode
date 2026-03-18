/*
 * XREFs of scl_CopyCurrentPhantomPoints @ 0x1C001E3D4
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_CopyCurrentPhantomPoints(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = a1[2];
  v2 = *a1;
  v3 = (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1)) + 1);
  *(_OWORD *)(v2 + 4 * v3) = *(_OWORD *)(v1 + 4 * v3);
  *(_OWORD *)(v2 + 4 * v3 + 16) = *(_OWORD *)(v1 + 4 * v3 + 16);
  result = a1[3];
  v5 = a1[1];
  *(_OWORD *)(v5 + 4 * v3) = *(_OWORD *)(result + 4 * v3);
  *(_OWORD *)(v5 + 4 * v3 + 16) = *(_OWORD *)(result + 4 * v3 + 16);
  return result;
}
