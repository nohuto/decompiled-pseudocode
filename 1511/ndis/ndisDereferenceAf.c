/*
 * XREFs of ndisDereferenceAf @ 0x1C00F3B78
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C004C440 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00F0520 (NdisClMakeCall.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F0940 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C00F0A60 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00F0C50 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00F0E50 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00F1260 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00F2260 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00F2660 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00F2720 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00F2A10 (NdisCoRequestComplete.c)
 *     NdisMCmRequest @ 0x1C00F3160 (NdisMCmRequest.c)
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
