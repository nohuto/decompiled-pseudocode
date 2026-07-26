/*
 * XREFs of ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00684E4
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0004A28 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0068A9C (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0068C20 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0069480 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C0069720 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x1C006A3B0 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0068A50 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C0068F6C (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefSubtract(struct _NDIS_MINIPORT_AOAC *a1, enum _NDIS_PM_COMPONENT_ID a2, int a3)
{
  struct _NDIS_MINIPORT_AOAC *v3; // r9
  unsigned int ActiveRef; // r10d
  enum _NDIS_PM_COMPONENT_ID v5; // r11d
  int v6; // eax
  bool v7; // zf

  a1->ActiveRef -= a3;
  v3 = a1;
  ActiveRef = a1->ActiveRef;
  v5 = a2;
  v6 = a1->ComponentRefCounts[a2] - a3;
  v7 = ndisCsResiliency == 0;
  a1->ComponentRefCounts[a2] = v6;
  if ( !v7 && !v6 )
  {
    if ( a1->CsRefTimes[a2].CurrentRefStartTime )
      ndisCloseTimeInterval(&a1->CsRefTimes[a2].CurrentRefStartTime, &a1->CsRefTimes[a2].TotalRefTime);
    if ( v5 == NdisPMComponentWCM )
      ndisAoAcStartRefTimeStats(v3);
  }
  return ActiveRef;
}
