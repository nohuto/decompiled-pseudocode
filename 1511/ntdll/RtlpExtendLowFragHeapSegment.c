/*
 * XREFs of RtlpExtendLowFragHeapSegment @ 0x18004F4BC
 * Callers:
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18004F2A0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpInitializeSegmentInfoForBucket @ 0x18004F468 (RtlpInitializeSegmentInfoForBucket.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F1810 (RtlpLogHeapExtendEvent.c)
 */

NTSTATUS __fastcall RtlpExtendLowFragHeapSegment(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  PVOID *v3; // rdi
  unsigned __int64 v4; // rbp
  NTSTATUS result; // eax
  _DWORD *v8; // rcx
  ULONG Protect; // eax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF

  v3 = (PVOID *)(a1 + 5);
  v4 = a2 + a1[4];
  if ( v4 <= a1[5] )
  {
LABEL_2:
    *a3 = a1[4];
    result = 0;
    a1[4] = v4;
    return result;
  }
  v8 = (_DWORD *)a1[3];
  RegionSize = (v4 - (_QWORD)*v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = RtlpGetHeapProtection(v8, 1);
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &RegionSize, 0x1000u, Protect);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1[3] + 536LL) += RegionSize;
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapExtendEvent(a1[3], (int)*v3, RegionSize, 16 * *(_QWORD *)(a1[3] + 192LL), (HANDLE)MEMORY[0x7FFE0380]);
        RtlpLogHeapCommit(a1[3], *v3, RegionSize, 9LL);
      }
    }
    *v3 = (char *)*v3 + RegionSize;
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
