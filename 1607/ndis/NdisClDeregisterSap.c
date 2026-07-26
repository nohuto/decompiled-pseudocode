/*
 * XREFs of NdisClDeregisterSap @ 0x1C00F6300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00F6C50 (NdisCmDeregisterSapComplete.c)
 */

NDIS_STATUS __stdcall NdisClDeregisterSap(NDIS_HANDLE NdisSapHandle)
{
  KIRQL v2; // al
  int v3; // edx
  bool v4; // bl
  NDIS_STATUS result; // eax
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisSapHandle + 5);
  v3 = *((_DWORD *)NdisSapHandle + 8);
  v4 = v3 < 0;
  *((_DWORD *)NdisSapHandle + 8) = v3 | 0x80000000;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisSapHandle + 5, v2);
  if ( v4 )
    return -1073741823;
  v6 = *((_QWORD *)NdisSapHandle + 2);
  if ( *(_DWORD *)(v6 + 392) >= 6u )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *(_QWORD *)(v6 + 24);
  result = (*(__int64 (__fastcall **)(_QWORD))(v7 + 48))(*(_QWORD *)NdisSapHandle);
  if ( result != 259 )
  {
    NdisCmDeregisterSapComplete(result, NdisSapHandle);
    return 259;
  }
  return result;
}
