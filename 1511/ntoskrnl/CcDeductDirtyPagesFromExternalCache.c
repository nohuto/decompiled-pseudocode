/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x14012D770
 * Callers:
 *     CcUnregisterExternalCache @ 0x1401A8D5C (CcUnregisterExternalCache.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 */

_LIST_ENTRY *__fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // esi
  KIRQL v5; // al
  unsigned __int64 v6; // rdx
  _LIST_ENTRY *result; // rax

  v2 = a2;
  while ( v2 )
  {
    v4 = v2;
    if ( v2 > 0xFFFFFFFF )
      v4 = -1;
    v2 -= v4;
    v5 = KeAcquireQueuedSpinLock(5uLL);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 < v4 )
      v4 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v6 - v4;
    CcGlobalDirtyPageStatistics -= v4;
    KeReleaseQueuedSpinLock(5uLL, v5);
  }
  result = &CcDeferredWrites;
  if ( CcDeferredWrites.Flink != &CcDeferredWrites )
    return (_LIST_ENTRY *)CcPostDeferredWrites(a1);
  return result;
}
