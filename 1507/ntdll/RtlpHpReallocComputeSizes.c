/*
 * XREFs of RtlpHpReallocComputeSizes @ 0x180037CFC
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180037B9C (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpComputeSizeInfo @ 0x180037DC0 (RtlpHpComputeSizeInfo.c)
 *     RtlpHpCalculateAllocSize @ 0x180037E3C (RtlpHpCalculateAllocSize.c)
 *     RtlpHpSizeHeapInternal @ 0x180037E74 (RtlpHpSizeHeapInternal.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpHpReallocComputeSizes(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 *v5; // rsi
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax

  v5 = a5;
  memset(a5, 0, 0x28uLL);
  v5[3] = a3;
  v10 = RtlpHpSizeHeapInternal(a1, a2, a4, v5 + 2);
  *v5 = v10;
  if ( v10 == -1 )
    return 0LL;
  v11 = *((_DWORD *)v5 + 4);
  v12 = RtlpHpComputeSizeInfo(a2, v10, v11, (unsigned int)&a5, a4);
  v13 = v5[3];
  v5[1] = v12;
  v14 = RtlpHpCalculateAllocSize(v13, a4 & 0xDFFFF0F7 | (v11 != 0 ? 8 : 0));
  v5[4] = (unsigned int)a5 + v14;
  return 1LL;
}
