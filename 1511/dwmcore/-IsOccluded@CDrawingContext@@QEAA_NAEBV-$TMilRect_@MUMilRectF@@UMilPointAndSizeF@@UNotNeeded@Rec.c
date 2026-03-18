/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18003EC30
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005505C (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, _OWORD *a2, unsigned int a3)
{
  char v3; // bl
  __int64 *v6; // rax
  unsigned int v7; // r8d
  char v8; // dl
  float v9; // xmm3_4
  float v10; // xmm2_4
  unsigned int i; // ecx
  __int64 v12; // r8
  float v13; // xmm4_4
  float v14; // xmm5_4
  float *v16; // rax
  __int64 v17; // rcx
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  __int64 v21; // [rsp+20h] [rbp-59h]
  __int128 v22; // [rsp+28h] [rbp-51h] BYREF
  float v23[6]; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v24[48]; // [rsp+50h] [rbp-29h] BYREF
  float v25; // [rsp+80h] [rbp+7h]
  float v26; // [rsp+84h] [rbp+Bh]
  __int64 v27; // [rsp+90h] [rbp+17h] BYREF
  char v28; // [rsp+9Ch] [rbp+23h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 5967) && *(_QWORD *)(a1 + 5776) )
  {
    *(_OWORD *)v23 = *a2;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 456), (struct CBaseMatrix *)v24);
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v24) )
    {
      v6 = (__int64 *)&v22;
      v7 = 4;
      v8 = 1;
      v9 = v23[1] + v26;
      v10 = v23[3] + v26;
      *(float *)&v22 = v23[0] + v25;
      *((float *)&v22 + 1) = v23[1] + v26;
      *((float *)&v22 + 2) = v23[2] + v25;
      *((float *)&v22 + 3) = v23[3] + v26;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v24,
        (const struct MilRectF *)v23,
        (struct MilPoint2F *const)&v27);
      v10 = *((float *)&v22 + 3);
      v6 = &v27;
      v7 = 8;
      v9 = *((float *)&v22 + 1);
      v8 = 0;
    }
    for ( i = 0; i < v7; ++i )
      v6 = (__int64 *)((char *)v6 + 4);
    if ( !v8 )
    {
      v16 = (float *)&v28;
      v21 = v27;
      v17 = 3LL;
      v10 = *((float *)&v27 + 1);
      LODWORD(v18) = v27;
      *(_QWORD *)v23 = v27;
      v9 = *((float *)&v27 + 1);
      LODWORD(v19) = v27;
      do
      {
        v20 = *(v16 - 1);
        if ( v19 > v20 )
          v19 = *(v16 - 1);
        if ( v9 > *v16 )
          v9 = *v16;
        if ( v20 > v18 )
          v18 = *(v16 - 1);
        if ( *v16 > v10 )
          v10 = *v16;
        v16 += 2;
        --v17;
      }
      while ( v17 );
      *(_QWORD *)&v22 = __PAIR64__(LODWORD(v9), LODWORD(v19));
      *((_QWORD *)&v22 + 1) = __PAIR64__(LODWORD(v10), LODWORD(v18));
    }
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v22) )
    {
      return 1;
    }
    else
    {
      CScopedClipStack::GetTopClipBoundsInScope(a1 + 680, v23);
      if ( v23[0] > v13 )
      {
        v13 = v23[0];
        *(float *)&v22 = v23[0];
      }
      if ( v23[1] > v9 )
      {
        v9 = v23[1];
        *((float *)&v22 + 1) = v23[1];
      }
      if ( v14 > v23[2] )
      {
        v14 = v23[2];
        *((float *)&v22 + 2) = v23[2];
      }
      if ( v10 > v23[3] )
      {
        v10 = v23[3];
        *((float *)&v22 + 3) = v23[3];
      }
      if ( v14 <= v13 || v10 <= v9 )
        v22 = 0uLL;
      LOBYTE(v12) = *(_BYTE *)(a1 + 5640) == 0;
      return ((__int64 (__fastcall *)(_QWORD, __int128 *, __int64, _QWORD, __int64))COcclusionContext::IsOccluded)(
               *(_QWORD *)(a1 + 5776),
               &v22,
               v12,
               a3,
               v21);
    }
  }
  return v3;
}
