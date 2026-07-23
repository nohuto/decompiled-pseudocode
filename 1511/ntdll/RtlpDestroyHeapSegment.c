/*
 * XREFs of RtlpDestroyHeapSegment @ 0x1800592C8
 * Callers:
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F0EC4 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpDestroyHeapSegment(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  void *v7; // rax
  __int64 v8; // rdi
  unsigned __int32 v9; // ebx
  ULONG_PTR v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *v4;
  if ( *v4 == v5 && v6 == v2 )
  {
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, v2, v5, v6, 0LL);
  }
  v7 = *(void **)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 40);
  v11 = 0LL;
  v12 = v7;
  v9 = RtlpSecMemFreeVirtualMemory((__int64)v4, &v12, &v11, 0x8000u);
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeRelease(v8, v12, v11);
  return v9;
}
