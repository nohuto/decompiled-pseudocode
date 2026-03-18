/*
 * XREFs of PiSwIrpCancelStartCreate @ 0x1401C16BC
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 */

__int64 __fastcall PiSwIrpCancelStartCreate(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rsi
  __int64 result; // rax

  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL) + 32LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  PiSwLock();
  if ( *(_QWORD *)(v4 + 144) )
  {
    *(_QWORD *)(v4 + 144) = 0LL;
    v3 = 1;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v3 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741536;
    return pIofCompleteRequest(a2, 0LL);
  }
  return result;
}
