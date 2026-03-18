/*
 * XREFs of ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0009A4C
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0084BFC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00850A0 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00AAB50 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00AACE0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z @ 0x1C00DB488 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0149948 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0149A88 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C0149C3C (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0149E34 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z @ 0x1C0149ED0 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  result = 0LL;
  if ( v1 != *a1 )
  {
    if ( v1 )
      return v1 - 24;
  }
  return result;
}
