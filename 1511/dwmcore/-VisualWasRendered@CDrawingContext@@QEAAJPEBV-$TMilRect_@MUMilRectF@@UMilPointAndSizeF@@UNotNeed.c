/*
 * XREFs of ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003C6AC
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048FE0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1800F790C (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 */

__int64 __fastcall CDrawingContext::VisualWasRendered(__int64 a1, __int128 *a2, __int64 a3)
{
  bool v3; // zf
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // edx
  unsigned int v11; // r8d
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  __int128 v20; // [rsp+38h] [rbp-41h] BYREF
  float v21; // [rsp+48h] [rbp-31h] BYREF
  float v22; // [rsp+4Ch] [rbp-2Dh]
  float v23; // [rsp+50h] [rbp-29h]
  float v24; // [rsp+54h] [rbp-25h]
  _BYTE v25[64]; // [rsp+60h] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 5968) == 0;
  v19 = a3;
  if ( !v3 )
  {
    if ( qword_1801A39E8 )
    {
      v8 = 0LL;
      if ( *((_DWORD *)qword_1801A39E8 + 18) )
      {
        v9 = *((_QWORD *)qword_1801A39E8 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v9 + 8 * v8)) )
        {
          v8 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v8 >= v11 )
            return 0LL;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 216LL))(a3) )
        {
          v20 = *a2;
          CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 456), (struct CBaseMatrix *)v25);
          CBaseMatrix::Transform2DBounds((CBaseMatrix *)v25, (const struct MilRectF *)&v20, (struct MilRectF *)&v21);
          CScopedClipStack::GetTopClipBoundsInScope(a1 + 680, &v20);
          v12 = *(float *)&v20;
          if ( v21 > *(float *)&v20 )
          {
            v12 = v21;
            *(float *)&v20 = v21;
          }
          v13 = *((float *)&v20 + 1);
          if ( v22 > *((float *)&v20 + 1) )
          {
            v13 = v22;
            *((float *)&v20 + 1) = v22;
          }
          v14 = *((float *)&v20 + 2);
          if ( *((float *)&v20 + 2) > v23 )
          {
            v14 = v23;
            *((float *)&v20 + 2) = v23;
          }
          v15 = *((float *)&v20 + 3);
          if ( *((float *)&v20 + 3) > v24 )
          {
            v15 = v24;
            *((float *)&v20 + 3) = v24;
          }
          if ( v14 <= v12 || v15 <= v13 )
            v20 = 0uLL;
          CVisual::AddToVisibleRegion(v19, &v20, a1);
          v16 = *(_DWORD *)(a1 + 5728);
          v17 = v16 + 1;
          if ( v16 + 1 < v16 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          else if ( v17 > *(_DWORD *)(a1 + 5724) )
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 5704, 8LL, 1LL, &v19);
            if ( v18 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 5704) + 8LL * v16) = v19;
            *(_DWORD *)(a1 + 5728) = v17;
          }
        }
      }
    }
  }
  return 0LL;
}
