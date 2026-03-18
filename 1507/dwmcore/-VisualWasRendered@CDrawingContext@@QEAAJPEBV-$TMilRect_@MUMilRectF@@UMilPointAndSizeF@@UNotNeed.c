/*
 * XREFs of ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1800DBF8C
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800365B0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180054CAC (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18010380C (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 */

__int64 __fastcall CDrawingContext::VisualWasRendered(__int64 a1, __int128 *a2, __int64 a3)
{
  bool v3; // zf
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int128 v16; // [rsp+38h] [rbp-41h] BYREF
  float v17; // [rsp+48h] [rbp-31h] BYREF
  float v18; // [rsp+4Ch] [rbp-2Dh]
  float v19; // [rsp+50h] [rbp-29h]
  float v20; // [rsp+54h] [rbp-25h]
  _BYTE v21[64]; // [rsp+60h] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 5936) == 0;
  v15 = a3;
  if ( !v3
    && qword_1801930E8
    && CDisplaySet::NeedsDesktopMoves(qword_1801930E8)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 216LL))(a3) )
  {
    v16 = *a2;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 456), (struct CBaseMatrix *)v21);
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v21, (const struct MilRectF *)&v16, (struct MilRectF *)&v17);
    CScopedClipStack::GetTopClipBoundsInScope((__int64 *)(a1 + 680), (__int64)&v16);
    v7 = *(float *)&v16;
    if ( v17 > *(float *)&v16 )
    {
      v7 = v17;
      *(float *)&v16 = v17;
    }
    v8 = *((float *)&v16 + 1);
    if ( v18 > *((float *)&v16 + 1) )
    {
      v8 = v18;
      *((float *)&v16 + 1) = v18;
    }
    v9 = *((float *)&v16 + 2);
    if ( *((float *)&v16 + 2) > v19 )
    {
      v9 = v19;
      *((float *)&v16 + 2) = v19;
    }
    v10 = *((float *)&v16 + 3);
    if ( *((float *)&v16 + 3) > v20 )
    {
      v10 = v20;
      *((float *)&v16 + 3) = v20;
    }
    if ( v9 <= v7 || v10 <= v8 )
      v16 = 0uLL;
    CVisual::AddToVisibleRegion(v15, &v16, a1);
    v11 = *(_DWORD *)(a1 + 5696);
    v12 = v11 + 1;
    if ( v11 + 1 >= v11 )
    {
      if ( v12 > *(_DWORD *)(a1 + 5692) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 5672, 8u, 1, &v15);
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 5672) + 8LL * *(unsigned int *)(a1 + 5696)) = v15;
        *(_DWORD *)(a1 + 5696) = v12;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
  }
  return 0LL;
}
