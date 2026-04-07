/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18000BBEC (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000EB48 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x180012090 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BA30 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x18001C550 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180020C38 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180020EEC (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x1800218A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800219FC (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180022130 (--1CVisual@@MEAA@XZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026560 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BE50 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x1800459C4 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18004CD8C (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18004D2CC (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180071930 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800719F0 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180071AB0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180072788 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081CD0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180088730 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x180095D34 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009AAAC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x18004FF5A (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  const void *v4; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // r8
  void *v7; // rdi
  void (__fastcall *v8)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  const void *v9; // [rsp+30h] [rbp+8h] BYREF

  result = a2;
  v4 = *(const void **)a1;
  v5 = *(void **)(a1 + 8);
  if ( v4 != v5 )
  {
    v6 = result * *(unsigned int *)(a1 + 24);
    result = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v5, v4, (unsigned int)v6);
        v7 = *(void **)a1;
        v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v8 == WPF::ProcessHeapImpl::Free )
        {
          if ( v7 )
            HeapFree(g_hProcessHeap, 0, v7);
        }
        else
        {
          v8(WPF::g_pProcessHeap, *(void **)a1);
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        result = *(unsigned int *)(a1 + 16);
        goto LABEL_9;
      }
      v9 = v4;
      result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, const void **, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 24LL))(
                 WPF::g_pProcessHeap,
                 &v9,
                 (unsigned int)v6);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)a1 = v9;
        result = *(unsigned int *)(a1 + 24);
LABEL_9:
        *(_DWORD *)(a1 + 20) = result;
      }
    }
  }
  return result;
}
