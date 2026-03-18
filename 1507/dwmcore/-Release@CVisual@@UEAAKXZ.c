/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x180035490
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180034854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x18003DA80 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800492E0 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18004CC40 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18006CF24 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?Release@CVisual@@WDI@EAAKXZ @ 0x18009A650 (-Release@CVisual@@WDI@EAAKXZ.c)
 * Callees:
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180034390 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800362EC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z @ 0x1800488EC (--$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18005A6A8 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  char *v4; // rdi
  CInteraction *v5; // rcx
  CVisual *(__fastcall *v6)(CVisual *, char); // rsi

  if ( *((_DWORD *)this + 2) == 1 )
  {
    v4 = (char *)this + 416;
    v5 = (CInteraction *)*((_QWORD *)this + 52);
    if ( v5 )
    {
      CInteraction::SetVisual(v5, 0LL);
      CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
      CResource::UnRegisterNotifier<CInteraction>(this, v4);
    }
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    --*((_DWORD *)this + 2);
    v6 = *(CVisual *(__fastcall **)(CVisual *, char))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::`vector deleting destructor' )
      CVisual::`vector deleting destructor'(this, 1);
    else
      v6(this, 1);
  }
  return v2;
}
