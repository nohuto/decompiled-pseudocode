/*
 * XREFs of ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18007C46C
 * Callers:
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x180079CD0 (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C1A0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180106284 (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::GetRenderBounds(_DWORD *a1, __int64 a2, CShape *a3, __int64 a4, char *a5, char *a6)
{
  unsigned int v8; // ebx
  char v9; // si
  char v10; // r12
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v18; // [rsp+30h] [rbp-58h] BYREF
  float v19; // [rsp+34h] [rbp-54h]
  float v20; // [rsp+38h] [rbp-50h]
  float v21; // [rsp+3Ch] [rbp-4Ch]

  *(_QWORD *)a4 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    v11 = a1[240] - a1[238];
    if ( v11 < 0 )
      v11 = 0;
    *(float *)(a4 + 8) = (float)v11;
    v12 = a1[241] - a1[239];
    if ( v12 < 0 )
      v12 = 0;
    *(float *)(a4 + 12) = (float)v12;
  }
  else
  {
    *(_QWORD *)(a4 + 8) = 0LL;
  }
  if ( !a3 )
    goto LABEL_24;
  v13 = (*(__int64 (__fastcall **)(CShape *, float *, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, &v18, 0LL);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xAE3u);
    return v8;
  }
  v14 = v21;
  v15 = v20;
  v16 = v19;
  if ( *(float *)a4 > v18 || v20 > *(float *)(a4 + 8) || *(float *)(a4 + 4) > v19 || v21 > *(float *)(a4 + 12) )
    v10 = 1;
  if ( v18 > *(float *)a4 )
    *(float *)a4 = v18;
  if ( v16 > *(float *)(a4 + 4) )
    *(float *)(a4 + 4) = v16;
  if ( *(float *)(a4 + 8) > v15 )
    *(float *)(a4 + 8) = v15;
  if ( *(float *)(a4 + 12) > v14 )
    *(float *)(a4 + 12) = v14;
  if ( *(float *)(a4 + 8) <= *(float *)a4 || *(float *)(a4 + 12) <= *(float *)(a4 + 4) )
  {
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)a4 = 0LL;
  }
  if ( CShape::IsAxisAlignedRectangle(a3) )
LABEL_24:
    v9 = 1;
  if ( a5 )
    *a5 = v9;
  if ( a6 )
    *a6 = v10;
  return v8;
}
