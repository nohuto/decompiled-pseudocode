/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18002A028
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001F284 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
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
  __int128 v21; // [rsp+28h] [rbp-51h] BYREF
  float v22[6]; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v23[48]; // [rsp+50h] [rbp-29h] BYREF
  float v24; // [rsp+80h] [rbp+7h]
  float v25; // [rsp+84h] [rbp+Bh]
  __int64 v26; // [rsp+90h] [rbp+17h] BYREF
  char v27; // [rsp+9Ch] [rbp+23h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 5931) && *(_QWORD *)(a1 + 5744) )
  {
    *(_OWORD *)v22 = *a2;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 456), (struct CBaseMatrix *)v23);
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v23) )
    {
      v6 = (__int64 *)&v21;
      v7 = 4;
      v8 = 1;
      v9 = v22[1] + v25;
      v10 = v22[3] + v25;
      *(float *)&v21 = v22[0] + v24;
      *((float *)&v21 + 1) = v22[1] + v25;
      *((float *)&v21 + 2) = v22[2] + v24;
      *((float *)&v21 + 3) = v22[3] + v25;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v23,
        (const struct MilRectF *)v22,
        (struct MilPoint2F *const)&v26);
      v10 = *((float *)&v21 + 3);
      v6 = &v26;
      v7 = 8;
      v9 = *((float *)&v21 + 1);
      v8 = 0;
    }
    for ( i = 0; i < v7; ++i )
      v6 = (__int64 *)((char *)v6 + 4);
    if ( !v8 )
    {
      v16 = (float *)&v27;
      v17 = 3LL;
      v10 = *((float *)&v26 + 1);
      LODWORD(v18) = v26;
      *(_QWORD *)v22 = v26;
      v9 = *((float *)&v26 + 1);
      LODWORD(v19) = v26;
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
      *(_QWORD *)&v21 = __PAIR64__(LODWORD(v9), LODWORD(v19));
      *((_QWORD *)&v21 + 1) = __PAIR64__(LODWORD(v10), LODWORD(v18));
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v21) )
    {
      return 1;
    }
    else
    {
      CScopedClipStack::GetTopClipBoundsInScope(a1 + 680, v22);
      if ( v22[0] > v13 )
      {
        v13 = v22[0];
        *(float *)&v21 = v22[0];
      }
      if ( v22[1] > v9 )
      {
        v9 = v22[1];
        *((float *)&v21 + 1) = v22[1];
      }
      if ( v14 > v22[2] )
      {
        v14 = v22[2];
        *((float *)&v21 + 2) = v22[2];
      }
      if ( v10 > v22[3] )
      {
        v10 = v22[3];
        *((float *)&v21 + 3) = v22[3];
      }
      if ( v14 <= v13 || v10 <= v9 )
        v21 = 0uLL;
      LOBYTE(v12) = *(_BYTE *)(a1 + 5608) == 0;
      return COcclusionContext::IsOccluded(*(_QWORD *)(a1 + 5744), (__int64)&v21, v12, a3);
    }
  }
  return v3;
}
