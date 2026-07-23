/*
 * XREFs of CcNotifyExternalCaches @ 0x140134614
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x14014031C (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     CcCalculatePagesToWrite @ 0x1400C9AC0 (CcCalculatePagesToWrite.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall CcNotifyExternalCaches(unsigned int a1)
{
  KIRQL v2; // si
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  __int64 *i; // rbx
  __int64 v6; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
  v3 = (unsigned int)CcCalculatePagesToWrite(
                       a1,
                       (__int64)&CcGlobalDirtyPageStatistics,
                       (unsigned __int64 *)&CcGlobalDirtyPageThresholds,
                       0);
  if ( v3 == 0xFFFFFFFFLL )
  {
    LODWORD(v4) = 100;
  }
  else if ( CcGlobalDirtyPageStatistics )
  {
    v4 = 100 * v3 / (unsigned __int64)CcGlobalDirtyPageStatistics;
  }
  else
  {
    LODWORD(v4) = 0;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
  if ( (_DWORD)v4 )
  {
    for ( i = (__int64 *)CcExternalCacheList; i != &CcExternalCacheList; i = (__int64 *)*i )
    {
      v6 = *(i - 3);
      if ( v6 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v6 * (unsigned __int64)(unsigned int)v4 / 0x64,
          a1);
    }
  }
  KeReleaseSpinLock(&CcExternalCacheListLock, v2);
}
