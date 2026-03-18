/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x18004DA50
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075010 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x18007A840 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18007E150 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800944E8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180047DD0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048CFC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x18005DF80 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 *     ??$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z @ 0x1800852BC (--$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800A7774 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  char *v4; // rdi
  CInteraction *v5; // rcx
  CVisual *(__fastcall *v6)(CVisual *, char); // rsi

  if ( *((_DWORD *)this + 2) == 1 )
  {
    v4 = (char *)this + 400;
    v5 = (CInteraction *)*((_QWORD *)this + 50);
    if ( v5 )
    {
      CInteraction::SetVisual(v5, 0LL);
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CResource::UnRegisterNotifier<CInteraction>(this, v4);
    }
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    --*((_DWORD *)this + 2);
    v6 = *(CVisual *(__fastcall **)(CVisual *, char))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::`vector deleting destructor' )
    {
      CVisual::`vector deleting destructor'(this, 1);
    }
    else if ( (char *)v6 == (char *)CWindowNode::`scalar deleting destructor' )
    {
      CWindowNode::`scalar deleting destructor'(this, 1u);
    }
    else
    {
      v6(this, 1);
    }
  }
  return v2;
}
