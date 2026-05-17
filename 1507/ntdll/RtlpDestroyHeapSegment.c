/*
 * XREFs of RtlpDestroyHeapSegment @ 0x180007A98
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1800EEF6C (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpDestroyHeapSegment(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

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
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 40);
  v11 = 0LL;
  v12 = v7;
  v9 = RtlpSecMemFreeVirtualMemory(v4, &v12, &v11, 0x8000LL);
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeRelease(v8, v12, v11);
  return v9;
}
