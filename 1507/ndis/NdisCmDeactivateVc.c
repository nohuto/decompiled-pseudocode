/*
 * XREFs of NdisCmDeactivateVc @ 0x1C00F6BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     NdisMCoDeactivateVcComplete @ 0x1C00F9490 (NdisMCoDeactivateVcComplete.c)
 */

NDIS_STATUS __stdcall NdisCmDeactivateVc(NDIS_HANDLE NdisVcHandle)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  int *v4; // r8
  int v5; // edx
  NDIS_STATUS result; // eax

  v1 = *((_QWORD *)NdisVcHandle + 9);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v4 = (int *)*((_QWORD *)NdisVcHandle + 1);
  v5 = *v4;
  if ( (*v4 & 3) != 0 && (v5 & 4) == 0 )
    *v4 = v5 | 4;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v3);
  *(_QWORD *)(v1 + 104) = *((_QWORD *)NdisVcHandle + 22);
  *(_QWORD *)(v1 + 88) = *((_QWORD *)NdisVcHandle + 18);
  result = (*((__int64 (__fastcall **)(_QWORD))NdisVcHandle + 29))(*((_QWORD *)NdisVcHandle + 25));
  if ( result != 259 )
  {
    NdisMCoDeactivateVcComplete(result, NdisVcHandle);
    return 259;
  }
  return result;
}
