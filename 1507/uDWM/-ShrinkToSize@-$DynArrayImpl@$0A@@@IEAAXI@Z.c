/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800027BC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180010564 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180015AB8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180016E60 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001AE80 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001B628 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18001B894 (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001C2A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001C3FC (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18001CCC0 (--1CVisual@@MEAA@XZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180020F10 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180028E40 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x18003BEA0 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180045738 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180068BB4 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180068C74 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180068D34 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180069FFC (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007A220 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180082E6C (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18008428C (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800847CC (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x180093854 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800993BC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x1800498BA (memcpy_0.c)
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
