/*
 * XREFs of ndisQueueSendNblsOnMiniport @ 0x1C006BBB0
 * Callers:
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006A7D0 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

struct _NET_BUFFER_LIST **__fastcall ndisQueueSendNblsOnMiniport(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3)
{
  _SLIST_HEADER *v3; // rsi
  unsigned __int64 v4; // rbp
  _SLIST_HEADER *Alignment; // rax
  struct _NET_BUFFER_LIST **result; // rax

  v3 = 0LL;
  v4 = a3;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 608), 1u, 1u);
  Alignment = (_SLIST_HEADER *)a2;
  if ( a2 )
  {
    do
    {
      Alignment[7].Alignment = v4;
      v3 = Alignment;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
    }
    while ( Alignment );
  }
  result = *(struct _NET_BUFFER_LIST ***)(a1 + 552);
  *result = a2;
  *(_QWORD *)(a1 + 552) = v3;
  return result;
}
