/*
 * XREFs of NdisCmDeregisterSapComplete @ 0x1C00F6C50
 * Callers:
 *     NdisClDeregisterSap @ 0x1C00F6300 (NdisClDeregisterSap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceAf @ 0x1C00F9B78 (ndisDereferenceAf.c)
 *     ndisDereferenceSap @ 0x1C00F9BE4 (ndisDereferenceSap.c)
 */

void __stdcall NdisCmDeregisterSapComplete(NDIS_STATUS Status, NDIS_HANDLE NdisSapHandle)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *((_QWORD *)NdisSapHandle + 2);
  v4 = *((_QWORD *)NdisSapHandle + 1);
  if ( *(_DWORD *)(v2 + 396) >= 6u )
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 272))(Status, v4);
  else
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 120))(Status, v4);
  if ( !Status )
  {
    ndisDereferenceAf(*((PVOID *)NdisSapHandle + 2));
    ndisDereferenceSap(NdisSapHandle);
  }
}
