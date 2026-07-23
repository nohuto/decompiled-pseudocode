/*
 * XREFs of RawVerifyVolume @ 0x14021037C
 * Callers:
 *     RawFileSystemControl @ 0x1404D0F18 (RawFileSystemControl.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x140007468 (RawInitiateDeleteVolume.c)
 *     IoAcquireVpbSpinLock @ 0x1400076FC (IoAcquireVpbSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400876D8 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall RawVerifyVolume(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  char v5; // di
  KIRQL v6; // dl
  UCHAR Irql; // [rsp+30h] [rbp+8h] BYREF

  IoAcquireVpbSpinLock(&Irql);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    ++*(_DWORD *)(v4 + 28);
    v5 = 1;
  }
  KeReleaseQueuedSpinLock(9uLL, Irql);
  if ( v5 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 216));
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 224));
    IoAcquireVpbSpinLock(&Irql);
    v6 = Irql;
    --*(_DWORD *)(v4 + 28);
    KeReleaseQueuedSpinLock(9uLL, v6);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 16LL) + 48LL) &= ~2u;
    if ( !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a2, 1, 0) )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 224));
  }
  return 3221225490LL;
}
