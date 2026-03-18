/*
 * XREFs of ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180017490 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?AddLines@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1800177B0 (-AddLines@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18003431C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071BE0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800770DC (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180078370 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EEE0 (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x18008A7DC (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800B2DB8 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x1800F53EC (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x18010F520 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180111040 (-InsertAt@-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@CO.c)
 *     ?InsertAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180111110 (-InsertAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlay.c)
 *     ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801673FC (-CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV-$DynArray@UMILGradientSto.c)
 *     ?InsertAt@?$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z @ 0x1801675D4 (-InsertAt@-$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x180051F20 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::Grow(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  void *v6; // r10
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned __int64 v11; // r8
  unsigned int v12; // edx
  int v13; // r11d
  unsigned int v14; // r9d
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // edi
  LPVOID (__fastcall *v18)(WPF::ProcessHeapImpl *, SIZE_T); // r15
  void *v19; // rax
  int v20; // eax
  __int64 (__fastcall *v22)(WPF::ProcessHeapImpl *, void **, SIZE_T); // rbp
  int v23; // eax
  const void *v24; // rdx
  unsigned __int64 v25; // r9
  void *v26; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0LL;
  v26 = 0LL;
  v9 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE7u);
    return 2147942934LL;
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( v9 <= v10 )
    return 0LL;
  v11 = a2 * (unsigned __int64)v9;
  if ( v11 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xF0u);
    return 2147942934LL;
  }
  if ( a4 )
    goto LABEL_42;
  v12 = v9 - v10;
  if ( v10 <= 0x10 )
  {
    v13 = 16;
LABEL_7:
    v14 = v13;
    goto LABEL_8;
  }
  v14 = 8092;
  v13 = *(_DWORD *)(a1 + 20);
  if ( v10 < 0x1F9C )
    goto LABEL_7;
LABEL_8:
  if ( v12 <= v14 )
    v12 = v14;
  v15 = v10 + v12;
  if ( v10 + v12 < v10 || a2 * (unsigned __int64)v15 > 0xFFFFFFFF )
  {
LABEL_42:
    v15 = v9;
    goto LABEL_13;
  }
  LODWORD(v11) = a2 * v15;
LABEL_13:
  if ( a2 == 16 )
    v16 = 0xFFFFFFF;
  else
    v16 = 0xFFFFFFFF / a2;
  if ( v15 <= v16 )
  {
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    {
      v17 = 0;
      if ( (_DWORD)v11 )
      {
        v18 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v18 == WPF::ProcessHeapImpl::Alloc )
          v19 = HeapAlloc(g_hProcessHeap, 0, (unsigned int)v11);
        else
          v19 = v18(WPF::g_pProcessHeap, (unsigned int)v11);
        v6 = v19;
        v26 = v19;
        if ( !v19 )
          v17 = -2147024882;
      }
      else
      {
        v17 = -2147024809;
      }
      if ( (v17 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x111u);
        return v17;
      }
      v20 = *(_DWORD *)(a1 + 24);
      if ( v20 )
      {
        memcpy_0(v6, *(const void **)a1, a2 * v20);
        v6 = v26;
      }
    }
    else
    {
      v26 = *(void **)a1;
      v22 = *(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, void **, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 24LL);
      if ( v22 == WPF::ProcessHeapImpl::Realloc )
        v23 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, &v26, (unsigned int)v11);
      else
        v23 = v22(WPF::g_pProcessHeap, &v26, (unsigned int)v11);
      v17 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x12Au);
        return v17;
      }
      v24 = *(const void **)a1;
      v6 = v26;
      if ( v26 != *(void **)a1 )
      {
        if ( a5 )
        {
          v25 = *a5;
          if ( *a5 >= (unsigned __int64)v24 && v25 < (unsigned __int64)v24 + a2 * *(_DWORD *)(a1 + 20) )
            *a5 = (unsigned __int64)v26 + v25 - (_QWORD)v24;
        }
      }
    }
    *(_DWORD *)(a1 + 20) = v15;
    *(_QWORD *)a1 = v6;
    return v17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x10Au);
  return 2147942934LL;
}
