/*
 * XREFs of NdisClDropParty @ 0x1C00F03B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     NdisCmDropPartyComplete @ 0x1C00F0E10 (NdisCmDropPartyComplete.c)
 */

NDIS_STATUS __stdcall NdisClDropParty(NDIS_HANDLE NdisPartyHandle, PVOID Buffer, UINT Size)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  NDIS_STATUS result; // eax

  v3 = *(_QWORD *)NdisPartyHandle;
  v5 = *((_QWORD *)NdisPartyHandle + 1);
  v6 = *(_QWORD *)(v3 + 64);
  if ( *(_DWORD *)(v6 + 392) >= 6u )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *(_QWORD *)(v6 + 24);
  result = (*(__int64 (__fastcall **)(__int64, PVOID, UINT))(v7 + 88))(v5, Buffer, Size);
  if ( result != 259 )
  {
    NdisCmDropPartyComplete(result, NdisPartyHandle);
    return 259;
  }
  return result;
}
