/*
 * XREFs of scl_CopyCurrentPhantomPoints @ 0x1C00B2FA4
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00B2D90 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_CopyCurrentPhantomPoints(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = a1[2];
  v2 = *(_WORD *)(a1[8] + 2LL * *((__int16 *)a1 + 40) - 2) + 1;
  v3 = *a1;
  *(_OWORD *)(v3 + 4LL * v2) = *(_OWORD *)(v1 + 4LL * v2);
  *(_OWORD *)(v3 + 4LL * v2 + 16) = *(_OWORD *)(v1 + 4LL * v2 + 16);
  result = a1[3];
  v5 = a1[1];
  *(_OWORD *)(v5 + 4LL * v2) = *(_OWORD *)(result + 4LL * v2);
  *(_OWORD *)(v5 + 4LL * v2 + 16) = *(_OWORD *)(result + 4LL * v2 + 16);
  return result;
}
