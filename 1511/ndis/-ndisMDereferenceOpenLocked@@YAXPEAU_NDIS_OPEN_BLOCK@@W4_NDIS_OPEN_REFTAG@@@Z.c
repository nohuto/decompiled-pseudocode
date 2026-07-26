/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B25C
 * Callers:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B444 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004C4B0 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004CB40 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C005A620 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C005AA2C (ndisMResetCompleteStage2.c)
 *     ndisMKillOpen @ 0x1C00E10BC (ndisMKillOpen.c)
 *     NdisClOpenAddressFamily @ 0x1C00EC750 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00ECC90 (NdisCmRegisterAddressFamily.c)
 *     ndisCreateNotifyQueue @ 0x1C00ED190 (ndisCreateNotifyQueue.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F0940 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F1040 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C000B124 (ndisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C00E1498 (ndisMFinishClose.c)
 */

void __fastcall ndisMDereferenceOpenLocked(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rdi
  bool v5; // zf
  bool v6; // bl

  v2 = (KSPIN_LOCK *)(a1 + 696);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 696));
  ndisDereferenceWithTag(*(_QWORD *)(a1 + 688), a2);
  v5 = (*(_DWORD *)(a1 + 228))-- == 1;
  v6 = v5;
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( v6 )
    ndisMFinishClose(a1);
}
