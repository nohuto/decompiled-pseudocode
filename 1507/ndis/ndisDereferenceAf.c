/*
 * XREFs of ndisDereferenceAf @ 0x1C00F9B78
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C004BC00 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00F6520 (NdisClMakeCall.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F6940 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C00F6A60 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00F6C50 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00F6E50 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00F7260 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00F8260 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00F8660 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00F8720 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00F8A10 (NdisCoRequestComplete.c)
 *     NdisMCmRequest @ 0x1C00F9160 (NdisMCmRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  bool v4; // bl

  v1 = P + 48;
  v3 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v4 = --*((_DWORD *)P + 3) == 0;
  KeReleaseSpinLock(v1, v3);
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
