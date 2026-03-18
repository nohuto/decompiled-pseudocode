/*
 * XREFs of ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18001F304
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18002AD28 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x1800F146C (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 * Callees:
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18001FDAC (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is90Or270Rotation@CBaseMatrix@@QEBAHXZ @ 0x180022C58 (-Is90Or270Rotation@CBaseMatrix@@QEBAHXZ.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004D720 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::ComputeVisibleRegion(
        __int64 a1,
        __int128 *a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v8; // rbx
  int v10; // eax
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(_DWORD, _DWORD, int, _DWORD, __int64, __int64, __int64); // r13
  int v15; // eax
  unsigned int v16; // edi
  CBaseMatrix *v18; // r11
  _OWORD *v19; // r10
  __int64 v20; // [rsp+20h] [rbp-60h]
  CBaseMatrix *v22[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  __int128 v24; // [rsp+68h] [rbp-18h] BYREF

  v8 = 0LL;
  *(_QWORD *)&v23 = a5;
  if ( *(_BYTE *)(a1 + 520) && a4 )
    COcclusionContext::DeviceRectToPageInPixelsRect(a1, a2, &v24);
  else
    v24 = *a2;
  v22[0] = (CBaseMatrix *)(a1 + 524);
  v10 = CBaseMatrix::Is90Or270Rotation((CBaseMatrix *)(a1 + 524));
  v13 = *(_QWORD *)(a1 + 96);
  v14 = *(__int64 (__fastcall **)(_DWORD, _DWORD, int, _DWORD, __int64, __int64, __int64))(*(_QWORD *)v13 + 48LL);
  if ( v14 == CArrayBasedCoverageSet::ComputeVisibleRegion )
  {
    v20 = v12;
    LOBYTE(v12) = v10 != 0;
    v15 = CArrayBasedCoverageSet::ComputeVisibleRegion(v13, (unsigned int)&v24, v11, v12, v20, a6, (__int64)a7);
  }
  else
  {
    LOBYTE(v12) = v10 != 0;
    v15 = v14(v13, &v24, a3, v12, v23, a6, (__int64)a7);
  }
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x34Eu);
  }
  else if ( *(_BYTE *)(a1 + 520) && a4 && *a7 )
  {
    v18 = v22[0];
    do
    {
      *(_OWORD *)v22 = *(_OWORD *)*(_QWORD *)(a6 + 8 * v8);
      CBaseMatrix::Transform2DBounds(v18, (const struct MilRectF *)v22, (struct MilRectF *)&v23);
      v19 = *(_OWORD **)(a6 + 8 * v8);
      v8 = (unsigned int)(v8 + 1);
      *v19 = v23;
    }
    while ( (unsigned int)v8 < *a7 );
  }
  return v16;
}
