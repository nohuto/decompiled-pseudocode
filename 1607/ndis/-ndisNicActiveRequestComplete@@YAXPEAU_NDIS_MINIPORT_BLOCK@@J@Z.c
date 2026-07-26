/*
 * XREFs of ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006E36C
 * Callers:
 *     ndisSignalD0RequestComplete @ 0x1C00110B0 (ndisSignalD0RequestComplete.c)
 * Callees:
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006C230 (ndisSelectiveSuspendClearStop.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C006CE04 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C006EA94 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
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
    NdisUnexpectedAoAcError(a1, 0x3FAu);
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_dq(0x12u, &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids, a2, a1);
  }
  else
  {
    if ( (unsigned __int8)byte_1C00895D0 >= 4u )
      WPP_SF_qZ(0x11u, &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids, (__int64)a1, &a1->pAdapterInstanceName->Length);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)a1, 7);
    ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  }
  ndisAoAcCompleteQueuedIrps(a1, a2);
}
