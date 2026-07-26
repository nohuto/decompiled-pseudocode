/*
 * XREFs of ndisReturnNblWithPowerQueue @ 0x1C000ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char v3; // r12
  KIRQL v7; // bp
  KSPIN_LOCK *v8; // rcx
  char v9; // r14
  KSPIN_LOCK *v10; // rcx
  KSPIN_LOCK *v11; // rcx
  KSPIN_LOCK *v12; // rcx
  _SLIST_HEADER *Alignment; // rax
  _SLIST_HEADER *v14; // rcx

  v3 = 0;
  if ( *(_QWORD *)(a1 + 4512) )
  {
    if ( !(unsigned __int8)ndisSetBusyAsync(a1, 1LL, 54LL, a2, 0) )
      return;
    v3 = 1;
  }
  if ( *(int *)(a1 + 1872) < 0 && ndisNoPauseOnSuspend )
  {
    v7 = 0;
    v8 = (KSPIN_LOCK *)(a1 + 3928);
    if ( (a3 & 1) != 0 )
    {
      v9 = 1;
      KeAcquireSpinLockAtDpcLevel(v8);
    }
    else
    {
      v9 = 0;
      v7 = KeAcquireSpinLockRaiseToDpc(v8);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 3936) - 2) > 2 || *(_BYTE *)(a1 + 3956) )
    {
      ++*(_DWORD *)(a1 + 3952);
      v10 = (KSPIN_LOCK *)(a1 + 3928);
      if ( v9 )
        KeReleaseSpinLockFromDpcLevel(v10);
      else
        KeReleaseSpinLock(v10, v7);
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3816) + 192LL))(
        *(_QWORD *)(a1 + 24),
        a2,
        a3);
      v11 = (KSPIN_LOCK *)(a1 + 3928);
      if ( v9 )
        KeAcquireSpinLockAtDpcLevel(v11);
      else
        v7 = KeAcquireSpinLockRaiseToDpc(v11);
      --*(_DWORD *)(a1 + 3952);
    }
    else
    {
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 3960), 1u, 1u);
      Alignment = (_SLIST_HEADER *)a2->Link.Alignment;
      v14 = (_SLIST_HEADER *)a2;
      while ( Alignment )
      {
        v14 = Alignment;
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      }
      v14->Alignment = *(_QWORD *)(a1 + 3944);
      *(_QWORD *)(a1 + 3944) = a2;
    }
    v12 = (KSPIN_LOCK *)(a1 + 3928);
    if ( v9 )
      KeReleaseSpinLockFromDpcLevel(v12);
    else
      KeReleaseSpinLock(v12, v7);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3816) + 192LL))(
      *(_QWORD *)(a1 + 24),
      a2,
      a3);
  }
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 4512) )
      ndisClearBusy(a1, 1LL, 54LL);
  }
}
