/*
 * XREFs of ndisReplaySendNbls @ 0x1C006BD14
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006A990 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006C3CC (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DB00 (ndisMSendNBLToMiniportInternal.c)
 */

void __fastcall ndisReplaySendNbls(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  unsigned int v3; // esi
  struct _NET_BUFFER_LIST *v4; // rdi
  _SLIST_HEADER *v5; // r15
  struct _NET_BUFFER_LIST *Alignment; // rbx
  unsigned int Scratch; // ebp

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  Alignment = a2;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 4136), 0x92u, 0);
  while ( Alignment )
  {
    Scratch = (unsigned int)Alignment->Scratch;
    if ( !v4 )
      goto LABEL_7;
    if ( Scratch != v3 )
    {
      v5->Alignment = 0LL;
      ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
      v4 = 0LL;
    }
    if ( !v4 )
    {
LABEL_7:
      v4 = Alignment;
      v3 = Scratch;
    }
    v5 = (_SLIST_HEADER *)Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
  }
  ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
}
