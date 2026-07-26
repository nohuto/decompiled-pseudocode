/*
 * XREFs of ndisReturnNblWithPowerQueue @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006AB08 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006ADF0 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, void *a4)
{
  char v4; // r13
  unsigned int v5; // r14d
  KIRQL v9; // bp
  KSPIN_LOCK *v10; // rcx
  char v11; // r15
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  KSPIN_LOCK *v14; // rcx
  _SLIST_HEADER *Alignment; // rax
  unsigned __int8 busy; // al
  _SLIST_HEADER *v17; // rax
  _SLIST_HEADER *v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 4512) )
    goto LABEL_2;
  Alignment = (_SLIST_HEADER *)a2;
  if ( a2 )
  {
    do
    {
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      ++v5;
    }
    while ( Alignment );
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    busy = ndisWdmSetBusyAsync((struct _NDIS_MINIPORT_BLOCK *)a1, v5, NdisBusyReceiveReturn, a2, 0);
  else
    busy = ndisWdfSetBusyAsync((struct _NDIS_MINIPORT_BLOCK *)a1, v5, NdisBusyReceiveReturn, a4, v19);
  if ( busy )
  {
    v4 = 1;
LABEL_2:
    if ( *(int *)(a1 + 1872) < 0 && ndisNoPauseOnSuspend )
    {
      v9 = 0;
      v10 = (KSPIN_LOCK *)(a1 + 3928);
      if ( (a3 & 1) != 0 )
      {
        v11 = 1;
        KeAcquireSpinLockAtDpcLevel(v10);
      }
      else
      {
        v11 = 0;
        v9 = KeAcquireSpinLockRaiseToDpc(v10);
      }
      if ( (unsigned int)(*(_DWORD *)(a1 + 3936) - 2) > 2 || *(_BYTE *)(a1 + 3956) )
      {
        ++*(_DWORD *)(a1 + 3952);
        v12 = (KSPIN_LOCK *)(a1 + 3928);
        if ( v11 )
          KeReleaseSpinLockFromDpcLevel(v12);
        else
          KeReleaseSpinLock(v12, v9);
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3816) + 192LL))(
          *(_QWORD *)(a1 + 24),
          a2,
          a3);
        v13 = (KSPIN_LOCK *)(a1 + 3928);
        if ( v11 )
          KeAcquireSpinLockAtDpcLevel(v13);
        else
          v9 = KeAcquireSpinLockRaiseToDpc(v13);
        --*(_DWORD *)(a1 + 3952);
      }
      else
      {
        if ( ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            a2,
            0LL,
            *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 3960),
            (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
            1u);
        v17 = (_SLIST_HEADER *)a2->Link.Alignment;
        v18 = (_SLIST_HEADER *)a2;
        while ( v17 )
        {
          v18 = v17;
          v17 = (_SLIST_HEADER *)v17->Alignment;
        }
        v18->Alignment = *(_QWORD *)(a1 + 3944);
        *(_QWORD *)(a1 + 3944) = a2;
      }
      v14 = (KSPIN_LOCK *)(a1 + 3928);
      if ( v11 )
        KeReleaseSpinLockFromDpcLevel(v14);
      else
        KeReleaseSpinLock(v14, v9);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3816) + 192LL))(
        *(_QWORD *)(a1 + 24),
        a2,
        a3);
    }
    if ( v4 )
      ndisClearBusy(a1, v5, 54LL);
  }
}
