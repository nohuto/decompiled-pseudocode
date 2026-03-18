/*
 * XREFs of EtwpUnlockBufferList @ 0x14009D414
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x14009D240 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueFreeBuffer @ 0x14009D39C (EtwpEnqueueFreeBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400F2E7C (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

void __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rbx
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rcx

  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    v3 = (volatile signed __int64 *)(a1 + 712);
    _m_prefetchw((const void *)(a1 + 712));
    v4 = *(_QWORD *)(a1 + 712);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v5 = v4 - 16;
    else
      v5 = 0LL;
    if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64(v3, v5, v4) )
      ExfReleasePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
  }
  else
  {
    v2 = *a2;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 712));
    __writecr8(v2);
  }
}
