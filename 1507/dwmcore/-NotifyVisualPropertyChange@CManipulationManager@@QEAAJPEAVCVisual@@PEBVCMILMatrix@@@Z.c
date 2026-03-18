/*
 * XREFs of ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18012A5D0
 * Callers:
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x18000BB94 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 * Callees:
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CManipulationManager::NotifyVisualPropertyChange(
        CManipulationManager *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax

  v3 = *((_QWORD *)this + 2);
  v7 = 0;
  if ( GetCurrentThreadId() == *(_DWORD *)(v3 + 568) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v8, &MIDMANIPULATION_UPDATE_VISUAL_PROP, (__int64)a2);
    v9 = *((_QWORD *)a2 + 52);
    if ( v9 )
    {
      *(_OWORD *)(v9 + 88) = *(_OWORD *)a3;
      *(_OWORD *)(v9 + 104) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v9 + 120) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v9 + 136) = *((_OWORD *)a3 + 3);
    }
  }
  else
  {
    return (unsigned int)CManipulationManager::QueueMidManipulationUpdate(this, 4LL, a2);
  }
  return v7;
}
