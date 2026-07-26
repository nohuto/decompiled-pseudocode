/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017670
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMResetCompleteStage2 @ 0x1C0023B9C (ndisMResetCompleteStage2.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0050F10 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00515A0 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 *     ndisMKillOpen @ 0x1C00EC300 (ndisMKillOpen.c)
 *     NdisClOpenAddressFamily @ 0x1C00F3440 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F3980 (NdisCmRegisterAddressFamily.c)
 *     ndisCreateNotifyQueue @ 0x1C00F3E80 (ndisCreateNotifyQueue.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F6940 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F7040 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000CE60 (NdisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C00EB318 (ndisMFinishClose.c)
 */

void __fastcall ndisMDereferenceOpenLocked(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rdi
  bool v5; // zf
  bool v6; // bl

  v2 = (KSPIN_LOCK *)(a1 + 696);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 696));
  NdisDereferenceWithTag(*(_QWORD *)(a1 + 688), a2);
  v5 = (*(_DWORD *)(a1 + 228))-- == 1;
  v6 = v5;
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( v6 )
    ndisMFinishClose(a1);
}
