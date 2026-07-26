/*
 * XREFs of ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0069D1C
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0068A9C (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0069480 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0012AD4 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     ndisCancelIdleRequestSync @ 0x1C006654C (ndisCancelIdleRequestSync.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00677D0 (ndisSelectiveSuspendClearStop.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00683E8 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006A09C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 */

__int64 __fastcall ndisRequestNicActive(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // al
  KIRQL v7; // al
  KIRQL v8; // si
  KIRQL v9; // si
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  unsigned int v11; // ebx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( AoAc->ActiveState == NdisNicActive )
  {
    KeReleaseSpinLock(&AoAc->Lock, v5);
    return 0LL;
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
  if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
    ndisCancelIdleRequestSync(a1, 7, 0, 0);
    v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v8 = v7;
    if ( !AoAc->SSIdleConfirmed )
    {
      AoAc->ActiveState = NdisNicActive;
      KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&AoAc->Lock, v8);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop((__int64)a1, 7);
      return 0LL;
    }
    KeReleaseSpinLock(&AoAc->Lock, v7);
  }
  KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficTotalDX);
  v9 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ActiveState = AoAc->ActiveState;
  if ( ActiveState == NdisNicQuiet )
  {
    if ( AoAc->DeviceGone )
    {
      KeReleaseSpinLock(&AoAc->Lock, v9);
      v11 = -1073741823;
    }
    else
    {
      ++AoAc->CsPowerTransitions;
      AoAc->ActiveState = NdisNicResuming;
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
      KeClearEvent(&a1->PowerD0CompleteEvent);
      KeReleaseSpinLock(&AoAc->Lock, v9);
      v11 = ndisRequestDevicePowerD0(a1, NdisMEventD0_NicActive);
      if ( v11 == 259 )
        goto LABEL_23;
      NdisUnexpectedAoAcError(a1, 0x3A5u);
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_dq(0xFu, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, v11, a1);
    }
  }
  else
  {
    if ( ActiveState == NdisNicError )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_q(0x10u, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, (__int64)a1);
      KeReleaseSpinLock(&AoAc->Lock, v9);
      return (unsigned int)-1073741823;
    }
    KeReleaseSpinLock(&AoAc->Lock, v9);
    v11 = 259;
  }
  if ( v11 == 259 )
  {
LABEL_23:
    if ( a2 == RunSynchronous )
    {
      KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
      return 0;
    }
  }
  return v11;
}
