/*
 * XREFs of ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0069BE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0010474 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     ndisCancelIdleRequestSync @ 0x1C006747C (ndisCancelIdleRequestSync.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0069318 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0069354 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006AF9C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 */

void __fastcall ndisAoAcWakeWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  bool v5; // zf
  KIRQL v6; // si
  _LARGE_INTEGER v7; // rax
  int v8; // ebx

  AoAc = a2->AoAc;
  if ( a2->SelectiveSuspend && (a2->PnPFlags & 0x60) == 0x60 && (unsigned int)(a2->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
    ndisCancelIdleRequestSync(a2, 7, 0, 0);
  }
  KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(a2, NdisCSTrafficTotalDX);
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v5 = AoAc->ActiveState == NdisNicQuiet;
  v6 = v4;
  AoAc->WakeWorkItemScheduled = 0;
  if ( v5 )
  {
    AoAc->ActiveState = NdisNicResuming;
    KeClearEvent(&a2->PowerD0CompleteEvent);
    AoAc->TempRefReason = NdisAoAcTempRefWake;
    v7.QuadPart = MEMORY[0xFFFFF78000000014];
    ++AoAc->CsPowerTransitions;
    AoAc->LastWakeTime = v7;
    AoAc->TakeWakeToRefTime = 1;
    v5 = AoAc->WakeWorkItemWakeReason == NdisMEventD0_AoAcSurpriseWake;
    AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
    if ( v5 )
      ++AoAc->CsSurpriseWakes;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_qD(0x1Cu, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, (__int64)a2, AoAc->ActiveRef);
    KeReleaseSpinLock(&AoAc->Lock, v6);
    v8 = ndisRequestDevicePowerD0(a2, AoAc->WakeWorkItemWakeReason);
    if ( v8 != 259 )
    {
      NdisUnexpectedAoAcError(a2, 0x66Au);
      if ( (unsigned __int8)byte_1C0085315 >= 2u )
        WPP_SF_dq(0x1Du, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, v8, a2);
    }
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v4);
  }
  ndisDereferenceMiniport((__int64)a2, 4u);
}
