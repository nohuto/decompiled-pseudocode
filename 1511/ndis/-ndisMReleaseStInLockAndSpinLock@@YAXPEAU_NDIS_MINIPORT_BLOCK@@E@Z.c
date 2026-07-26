/*
 * XREFs of ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001C7AC
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C001B438 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisUpdateOperationalStatus @ 0x1C001BF84 (ndisUpdateOperationalStatus.c)
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C001C7F0 (ndisIndicateInitialStateToBinding.c)
 *     NdisMIndicateStatus @ 0x1C0058130 (NdisMIndicateStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMReleaseStInLockAndSpinLock(struct _NDIS_MINIPORT_BLOCK *a1, KIRQL a2)
{
  a1->SyncFlags &= ~1u;
  a1->StatusProcessingDbgX = 0;
  a1->StatusProcessingThread = 0LL;
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  KeLowerIrql(a2);
}
