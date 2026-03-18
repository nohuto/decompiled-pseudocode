/*
 * XREFs of ?GetBounds@CFlipChain@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180125A10
 * Callers:
 *     ?GetBounds@CFlipChain@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BD4C0 (-GetBounds@CFlipChain@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18012380C (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::GetBounds(_DWORD *a1, __int64 a2, __int64 a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax

  v4 = (float)(int)a1[18];
  *a4 = v4;
  a4[1] = (float)(int)a1[20];
  v5 = a1[12] - a1[19];
  if ( v4 <= (float)v5 )
    v4 = (float)v5;
  v6 = a4[1];
  a4[2] = v4;
  v7 = a1[13] - a1[21];
  if ( v6 <= (float)v7 )
    v6 = (float)v7;
  a4[3] = v6;
  return 0LL;
}
