/*
 * XREFs of ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006A778
 * Callers:
 *     ndisSignalD0RequestComplete @ 0x1C000EA90 (ndisSignalD0RequestComplete.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0068720 (ndisSelectiveSuspendClearStop.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0069318 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C006AE98 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisNicActiveRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // al

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->ActiveState = a2 != 0 ? NdisNicError : NdisNicActive;
  KeReleaseSpinLock(&AoAc->Lock, v5);
  if ( a2 )
  {
    NdisUnexpectedAoAcError(a1, 0x3FBu);
    if ( (unsigned __int8)byte_1C0085315 >= 2u )
      WPP_SF_dq(0x12u, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, a2, a1);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0085310 >= 4u )
      WPP_SF_qZ(
        0x11u,
        &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids,
        (__int64)a1,
        (__int64 *)a1->pAdapterInstanceName);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)a1, 7);
    ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  }
  ndisAoAcCompleteQueuedIrps(a1, a2);
}
