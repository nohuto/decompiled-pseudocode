/*
 * XREFs of ndisReplayRecvNbls @ 0x1C0067A60
 * Callers:
 *     ndisRequestPowerResume @ 0x1C00682B4 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006880C (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

__int64 __fastcall ndisReplayRecvNbls(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 4136), 0x8Du, 0);
  return (*(__int64 (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3816) + 192LL))(
           *(_QWORD *)(a1 + 24),
           a2,
           0LL);
}
