/*
 * XREFs of NdisCmDropPartyComplete @ 0x1C00F6E10
 * Callers:
 *     NdisClDropParty @ 0x1C00F63B0 (NdisClDropParty.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceVcPtr @ 0x1C00F9C38 (ndisDereferenceVcPtr.c)
 */

void __stdcall NdisCmDropPartyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisPartyHandle)
{
  (*((void (__fastcall **)(NDIS_STATUS, _QWORD))NdisPartyHandle + 4))(Status, *((_QWORD *)NdisPartyHandle + 2));
  if ( !Status )
  {
    ndisDereferenceVcPtr(*(PVOID *)NdisPartyHandle);
    ExFreePoolWithTag(NdisPartyHandle, 0);
  }
}
