/*
 * XREFs of EtwpUnlockBufferList @ 0x1400EB1E0
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpAdjustTraceBuffers @ 0x140086D7C (EtwpAdjustTraceBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400B2424 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x1400EB470 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14022A510 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x14022AB8C (EtwpReenableCompression.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

void __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rbx
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rcx

  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v3 = (volatile signed __int64 *)(a1 + 696);
    _m_prefetchw((const void *)(a1 + 696));
    v4 = *(_QWORD *)(a1 + 696);
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
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 696));
    __writecr8(v2);
  }
}
