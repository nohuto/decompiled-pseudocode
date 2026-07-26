/*
 * XREFs of ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0068970
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C0066100 (NdisMIdleNotificationCompleteEx.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0069C10 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     Template_jqx @ 0x1C005EDD8 (Template_jqx.c)
 */

void __fastcall ndisAoAcScheduleWakeWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // bp
  __int64 v6; // rcx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( !AoAc->WakeWorkItemScheduled && ndisReferenceMiniport((__int64)a1) )
  {
    AoAc->WakeWorkItemScheduled = 1;
    AoAc->WakeWorkItemWakeReason = a2;
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      Template_jqx(
        v6,
        &DeviceWaitWakeComplete,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value);
    if ( (unsigned __int8)byte_1C0083710 >= 4u )
      WPP_SF_qZ(
        0x1Bu,
        &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids,
        (__int64)a1,
        (__int64 *)a1->pAdapterInstanceName);
    ndisScheduleWorkItemInternal((__int64)&AoAc->WakeWorkItem);
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
}
