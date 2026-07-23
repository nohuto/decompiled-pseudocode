/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x18008F6F0
 * Callers:
 *     RtlHeapTrkInitialize @ 0x18008F3D0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  PVOID Heap; // rax
  void *v10; // r8
  unsigned int v11; // ebp
  int v12; // ecx
  unsigned __int64 v13; // r9
  int v14; // edx
  SIZE_T v15; // rdx
  bool v16; // zf
  PVOID v17; // rcx
  unsigned __int64 v18; // rax
  char *v19; // r8
  __int64 v20; // r10
  unsigned int v21; // r9d
  __int64 v22; // rdx
  unsigned int v24[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v24, 4u, 0LL) < 0 )
    return 0;
  if ( !v24[0] )
    return 0;
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v24[0] * ((a3 + v24[0] - 1) / v24[0]);
  v12 = -1073741675;
  v13 = v11 * a4;
  if ( is_mul_ok(v11, a4) )
  {
    v14 = 0;
  }
  else
  {
    v13 = -1LL;
    v14 = -1073741675;
  }
  if ( (v14 & 0xC0000000) == 0xC0000000 )
    goto LABEL_16;
  v15 = v24[0] + v13;
  if ( v15 < v13 )
    v15 = -1LL;
  else
    v12 = 0;
  v16 = (v12 & 0xC0000000) == -1073741824;
  v17 = HeapHandle;
  if ( v16 )
    goto LABEL_17;
  v18 = (unsigned __int64)RtlAllocateHeap(HeapHandle, 8u, v15);
  *a2 = v18;
  if ( !v18 )
  {
    v10 = *a1;
LABEL_16:
    v17 = HeapHandle;
LABEL_17:
    RtlFreeHeap(v17, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v19 = (char *)(v18 + v24[0] - v18 % v24[0]);
  if ( a4 )
  {
    v20 = 0LL;
    v21 = 0;
    do
    {
      ++v8;
      v22 = v21;
      v21 += v11;
      *((_QWORD *)*a1 + v20) = &v19[v22];
      v20 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
