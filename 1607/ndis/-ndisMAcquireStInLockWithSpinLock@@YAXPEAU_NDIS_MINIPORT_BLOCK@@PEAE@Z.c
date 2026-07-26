/*
 * XREFs of ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0015590
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00156C0 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0016864 (ndisIndicateInitialStateToBinding.c)
 *     ndisUpdateOperationalStatus @ 0x1C00182A4 (ndisUpdateOperationalStatus.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C001A534 (ndisIndicateInitialStateToFilter.c)
 *     NdisMIndicateStatus @ 0x1C005C8C0 (NdisMIndicateStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMAcquireStInLockWithSpinLock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  KIRQL v4; // bp
  unsigned int SyncFlags; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int i; // [rsp+30h] [rbp+8h]

  v4 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  SyncFlags = a1->SyncFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2102695;
  if ( (SyncFlags & 1) != 0 )
  {
    do
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      for ( i = 0; i < 0x32; ++i )
        ;
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 2102695;
    }
    while ( (a1->SyncFlags & 1) != 0 );
  }
  a1->SyncFlags |= 1u;
  a1->StatusProcessingDbgX = 2102699;
  CurrentThread = KeGetCurrentThread();
  *a2 = v4;
  a1->StatusProcessingThread = CurrentThread;
}
