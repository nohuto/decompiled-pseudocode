/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000FB80
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x1C004BC70 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004C300 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C005A680 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C005AA8C (ndisMResetCompleteStage2.c)
 *     ndisMKillOpen @ 0x1C00E6E7C (ndisMKillOpen.c)
 *     NdisClOpenAddressFamily @ 0x1C00F2770 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F2CB0 (NdisCmRegisterAddressFamily.c)
 *     ndisCreateNotifyQueue @ 0x1C00F31B0 (ndisCreateNotifyQueue.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F6940 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F7040 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
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
