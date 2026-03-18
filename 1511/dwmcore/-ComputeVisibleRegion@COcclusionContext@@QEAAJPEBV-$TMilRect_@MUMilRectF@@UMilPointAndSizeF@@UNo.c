/*
 * XREFs of ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800550FC
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003F908 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18010B37C (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180036420 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is90Or270Rotation@CBaseMatrix@@QEBAHXZ @ 0x180047D88 (-Is90Or270Rotation@CBaseMatrix@@QEBAHXZ.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180055C30 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::ComputeVisibleRegion(
        __int64 a1,
        __int128 *a2,
        __int32 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v8; // rbx
  BOOL v10; // eax
  __int32 v11; // r8d
  _BYTE *v12; // r9
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, float *, __int32, char, _BYTE *, __int64, unsigned int *); // r13
  int v15; // eax
  unsigned int v16; // edi
  CBaseMatrix *v18; // r11
  _OWORD *v19; // r10
  CBaseMatrix *v21[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  __int128 v23; // [rsp+68h] [rbp-18h] BYREF

  v8 = 0LL;
  *(_QWORD *)&v22 = a5;
  if ( *(_BYTE *)(a1 + 520) && a4 )
    COcclusionContext::DeviceRectToPageInPixelsRect(a1, a2, &v23);
  else
    v23 = *a2;
  v21[0] = (CBaseMatrix *)(a1 + 524);
  v10 = CBaseMatrix::Is90Or270Rotation((CBaseMatrix *)(a1 + 524));
  v13 = *(_QWORD *)(a1 + 96);
  v14 = *(__int64 (__fastcall **)(__int64, float *, __int32, char, _BYTE *, __int64, unsigned int *))(*(_QWORD *)v13 + 48LL);
  if ( v14 == CArrayBasedCoverageSet::ComputeVisibleRegion )
  {
    v15 = CArrayBasedCoverageSet::ComputeVisibleRegion(v13, (float *)&v23, v11, v10, v12, a6, a7);
  }
  else
  {
    LOBYTE(v12) = v10;
    v15 = v14(v13, (float *)&v23, a3, (char)v12, (_BYTE *)v22, a6, a7);
  }
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x362u);
  }
  else if ( *(_BYTE *)(a1 + 520) && a4 && *a7 )
  {
    v18 = v21[0];
    do
    {
      *(_OWORD *)v21 = *(_OWORD *)*(_QWORD *)(a6 + 8 * v8);
      CBaseMatrix::Transform2DBounds(v18, (const struct MilRectF *)v21, (struct MilRectF *)&v22);
      v19 = *(_OWORD **)(a6 + 8 * v8);
      v8 = (unsigned int)(v8 + 1);
      *v19 = v22;
    }
    while ( (unsigned int)v8 < *a7 );
  }
  return v16;
}
