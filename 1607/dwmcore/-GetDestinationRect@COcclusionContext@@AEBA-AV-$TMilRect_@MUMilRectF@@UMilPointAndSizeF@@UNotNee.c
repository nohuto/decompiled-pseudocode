/*
 * XREFs of ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18005C598
 * Callers:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18005C4C0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CBaseClipStack@@IEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A37D8 (-Top@CBaseClipStack@@IEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

float *__fastcall COcclusionContext::GetDestinationRect(__int64 a1, float *a2)
{
  __int64 v4; // r10
  _BYTE v6[64]; // [rsp+20h] [rbp-78h] BYREF
  int v7; // [rsp+60h] [rbp-38h]
  float v8; // [rsp+70h] [rbp-28h] BYREF
  float v9; // [rsp+74h] [rbp-24h]
  float v10; // [rsp+78h] [rbp-20h]
  float v11; // [rsp+7Ch] [rbp-1Ch]

  v7 = 0;
  CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 16), (struct CMILMatrix *)v6);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v6, v4, a2);
  CBaseClipStack::Top(a1 + 56, &v8);
  if ( v8 > *a2 )
    *a2 = v8;
  if ( v9 > a2[1] )
    a2[1] = v9;
  if ( a2[2] > v10 )
    a2[2] = v10;
  if ( a2[3] > v11 )
    a2[3] = v11;
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
  {
    a2[3] = 0.0;
    a2[2] = 0.0;
    a2[1] = 0.0;
    *a2 = 0.0;
  }
  return a2;
}
