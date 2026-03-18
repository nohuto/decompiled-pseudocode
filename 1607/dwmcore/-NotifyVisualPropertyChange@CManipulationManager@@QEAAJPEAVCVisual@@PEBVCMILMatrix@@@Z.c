/*
 * XREFs of ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18016ADEC
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180007588 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

__int64 __fastcall CManipulationManager::NotifyVisualPropertyChange(
        CManipulationManager *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct CInteraction *InteractionInternal; // rax

  v3 = *((_QWORD *)this + 2);
  v7 = 0;
  if ( GetCurrentThreadId() == *(_DWORD *)(v3 + 576) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v8, &MIDMANIPULATION_UPDATE_VISUAL_PROP, (__int64)a2);
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    if ( InteractionInternal )
    {
      *(_OWORD *)((char *)InteractionInternal + 184) = *(_OWORD *)a3;
      *(_OWORD *)((char *)InteractionInternal + 200) = *((_OWORD *)a3 + 1);
      *(_OWORD *)((char *)InteractionInternal + 216) = *((_OWORD *)a3 + 2);
      *(_OWORD *)((char *)InteractionInternal + 232) = *((_OWORD *)a3 + 3);
      *((_DWORD *)InteractionInternal + 62) = *((_DWORD *)a3 + 16);
    }
  }
  else
  {
    return (unsigned int)CManipulationManager::QueueMidManipulationUpdate((__int64)this, 4u, (__int64)a2);
  }
  return v7;
}
