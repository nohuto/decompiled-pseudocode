/*
 * XREFs of ndisQueueReceiveNblsOnMiniport @ 0x1C0066A4C
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

struct _NET_BUFFER_LIST **__fastcall ndisQueueReceiveNblsOnMiniport(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v5; // rcx
  struct _NET_BUFFER_LIST **result; // rax

  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 592), 1u, 1u);
  Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
  v5 = a2;
  while ( Alignment )
  {
    v5 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
  }
  result = *(struct _NET_BUFFER_LIST ***)(a1 + 544);
  *result = a2;
  *(_QWORD *)(a1 + 544) = v5;
  return result;
}
