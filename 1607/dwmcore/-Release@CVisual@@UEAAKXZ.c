/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x18004ED80
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18003AD94 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075EC0 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800B8C20 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180025930 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18004FAD4 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180050ED0 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x1800548B0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800A4D80 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  __int64 v4; // rcx
  __int64 i; // rcx
  CWindowNode *(__fastcall *v6)(CWindowNode *, char); // rax
  CInteraction *v7; // [rsp+30h] [rbp+8h]

  if ( *((_DWORD *)this + 2) == 1 )
  {
    v4 = *((_QWORD *)this + 34);
    if ( (*(_DWORD *)(v4 + 4) & 0x2000000) != 0 )
    {
      for ( i = v4 + 12; (*(_DWORD *)i & 0x7F000000) != 0x7000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
        ;
      v7 = *(CInteraction **)(i + 4);
      if ( v7 )
      {
        CInteraction::SetVisual(v7, 0LL);
        CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
        CResource::UnRegisterNotifierInternal(this, (CInteraction *)((char *)v7 + 8));
        CVisual::SetInteractionInternal(this, 0LL);
      }
    }
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    --*((_DWORD *)this + 2);
    v6 = *(CWindowNode *(__fastcall **)(CWindowNode *, char))(*(_QWORD *)this + 24LL);
    if ( (char *)v6 == (char *)CVisual::`vector deleting destructor' )
    {
      CVisual::`vector deleting destructor'(this, 1u);
    }
    else if ( v6 == CWindowNode::`scalar deleting destructor' )
    {
      CWindowNode::`scalar deleting destructor'(this, 1);
    }
    else
    {
      v6(this, 1);
    }
  }
  return v2;
}
