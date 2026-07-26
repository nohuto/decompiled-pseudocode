/*
 * XREFs of ndisReplayRecvNbls @ 0x1C006BCB4
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006A990 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisRequestPowerResume @ 0x1C006BDD8 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006C3CC (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

__int64 __fastcall ndisReplayRecvNbls(_QWORD *a1, struct _NET_BUFFER_LIST *a2)
{
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1[517], 0x8Du, 0);
  return (*(__int64 (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[477] + 192LL))(a1[3], a2, 0LL);
}
