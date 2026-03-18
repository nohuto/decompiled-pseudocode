/*
 * XREFs of ?GetBounds@CFlipChain@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801420F0
 * Callers:
 *     ?GetBounds@CFlipChain@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0540 (-GetBounds@CFlipChain@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180140150 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::GetBounds(_DWORD *a1, __int64 a2, __int64 a3, float *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  __int64 result; // rax

  v4 = (float)(int)a1[36];
  *a4 = v4;
  v5 = (float)(int)a1[38];
  a4[1] = v5;
  a4[2] = fmaxf(v4, (float)(a1[30] - a1[37]));
  result = 0LL;
  a4[3] = fmaxf(v5, (float)(a1[31] - a1[39]));
  return result;
}
