/*
 * XREFs of NdisClDeregisterSap @ 0x1C00F6300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00F6C50 (NdisCmDeregisterSapComplete.c)
 */

NDIS_STATUS __stdcall NdisClDeregisterSap(NDIS_HANDLE NdisSapHandle)
{
  KIRQL v2; // al
  bool v3; // bl
  NDIS_STATUS result; // eax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisSapHandle + 5);
  v3 = *((int *)NdisSapHandle + 8) < 0;
  *((_DWORD *)NdisSapHandle + 8) |= 0x80000000;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisSapHandle + 5, v2);
  if ( v3 )
    return -1073741823;
  v5 = *((_QWORD *)NdisSapHandle + 2);
  if ( *(_DWORD *)(v5 + 392) >= 6u )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *(_QWORD *)(v5 + 24);
  result = (*(__int64 (__fastcall **)(_QWORD))(v6 + 48))(*(_QWORD *)NdisSapHandle);
  if ( result != 259 )
  {
    NdisCmDeregisterSapComplete(result, NdisSapHandle);
    return 259;
  }
  return result;
}
