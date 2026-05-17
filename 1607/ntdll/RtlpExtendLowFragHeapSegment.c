/*
 * XREFs of RtlpExtendLowFragHeapSegment @ 0x180028F00
 * Callers:
 *     RtlpInitializeSegmentInfoForBucket @ 0x180028EAC (RtlpInitializeSegmentInfoForBucket.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180080594 (RtlpAffinitizeSegmentInfoForBucket.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F9310 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendLowFragHeapSegment(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 result; // rax
  __int64 v8; // rcx
  int HeapProtection; // eax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 5;
  v4 = a2 + a1[4];
  if ( v4 <= a1[5] )
  {
LABEL_2:
    *a3 = a1[4];
    result = 0LL;
    a1[4] = v4;
    return result;
  }
  v8 = a1[3];
  v10 = (v4 - *v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(v8, 1LL);
  result = ZwAllocateVirtualMemory(-1LL, v3, 0LL, &v10, 4096, HeapProtection);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1[3] + 544LL) += v10;
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapExtendEvent(a1[3], *v3, v10, 16 * *(_QWORD *)(a1[3] + 192LL), MEMORY[0x7FFE0380]);
        RtlpLogHeapCommit(a1[3], *v3, v10, 9LL);
      }
    }
    *v3 += v10;
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
