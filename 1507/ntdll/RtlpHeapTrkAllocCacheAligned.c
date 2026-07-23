/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x1800E11A4
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800E0E00 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  PVOID Heap; // rax
  void *v11; // r8
  unsigned int v12; // ebp
  int v13; // ecx
  unsigned __int64 v14; // r9
  int v15; // edx
  PVOID v16; // rcx
  SIZE_T v17; // rdx
  bool v18; // zf
  unsigned __int64 v19; // rax
  char *v20; // r8
  __int64 v21; // r10
  unsigned int v22; // r9d
  __int64 v23; // rdx
  unsigned int v24[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v24, 4u, 0LL) < 0 )
    return 0;
  if ( !v24[0] )
    return 0;
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * a4);
  *a1 = Heap;
  v11 = Heap;
  if ( !Heap )
    return 0;
  v12 = v24[0] * ((a3 + v24[0] - 1) / v24[0]);
  v13 = -1073741675;
  v14 = v12 * a4;
  if ( is_mul_ok(v12, a4) )
  {
    v15 = 0;
  }
  else
  {
    v14 = -1LL;
    v15 = -1073741675;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 )
    goto LABEL_9;
  v17 = v24[0] + v14;
  if ( v17 < v14 )
    v17 = -1LL;
  else
    v13 = 0;
  v18 = (v13 & 0xC0000000) == -1073741824;
  v16 = HeapHandle;
  if ( v18 )
    goto LABEL_10;
  v19 = (unsigned __int64)RtlAllocateHeap(HeapHandle, 8u, v17);
  *a2 = v19;
  if ( !v19 )
  {
    v11 = *a1;
LABEL_9:
    v16 = HeapHandle;
LABEL_10:
    RtlFreeHeap(v16, 0, v11);
    *a1 = 0LL;
    return 0;
  }
  v20 = (char *)(v19 + v24[0] - v19 % v24[0]);
  if ( a4 )
  {
    v21 = 0LL;
    v22 = 0;
    do
    {
      ++v8;
      v23 = v22;
      v22 += v12;
      *((_QWORD *)*a1 + v21) = &v20[v23];
      v21 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
