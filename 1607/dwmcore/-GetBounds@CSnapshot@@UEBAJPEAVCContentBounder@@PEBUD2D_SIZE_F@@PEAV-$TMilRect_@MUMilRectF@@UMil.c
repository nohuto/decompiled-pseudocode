/*
 * XREFs of ?GetBounds@CSnapshot@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801434D0
 * Callers:
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801432F0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnapshot::GetBounds(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  float v4; // xmm1_4

  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(float *)(a4 + 8) = (float)*(int *)(a1 + 112);
  *(float *)(a4 + 12) = (float)*(int *)(a1 + 116);
  if ( a3 && *a3 != 0.0 && a3[1] != 0.0 )
  {
    v4 = *(float *)(a4 + 12);
    *(float *)(a4 + 8) = fminf(*(float *)(a4 + 8), *a3);
    *(float *)(a4 + 12) = fminf(v4, a3[1]);
  }
  return 0LL;
}
