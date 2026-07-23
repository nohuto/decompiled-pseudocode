/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x180042D80
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800431B8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhSlotAllocate @ 0x1800419B4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18007726C (RtlpHpLfhBucketUpdateStats.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A6010 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  size_t v4; // rdi
  unsigned int v6; // r11d
  __int64 v8; // rbp
  _RTL_SRWLOCK *v9; // rbp
  char CurrentProcessorNumber; // al
  unsigned int v11; // ecx
  unsigned int v12; // eax
  void *v13; // rax
  void *v14; // rbx

  v4 = a2;
  v6 = a3;
  if ( a2 != a3 )
    v6 = a3 + 2;
  v8 = (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v8 + 192) & 1) != 0 && !(unsigned int)RtlpHpLfhBucketUpdateStats(a1, v6, 1LL) )
    return -1LL;
  v9 = *(_RTL_SRWLOCK **)(a1 + 8 * v8 + 192);
  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v11 = *(unsigned __int8 *)(a1 + 56);
  v12 = CurrentProcessorNumber & 0x3F;
  if ( v12 >= v11 )
  {
    if ( v12 == v11 || (_BYTE)v11 == 1 )
      v12 = 0;
    else
      v12 = *(unsigned __int8 *)(v12 - v11 - 1 + *(_QWORD *)(a1 + 64));
  }
  v13 = (void *)RtlpHpLfhSlotAllocate(
                  a1,
                  v9,
                  *(_RTL_SRWLOCK **)(v9[13].Value + 8LL * *(unsigned __int8 *)(v9[12].Value + v12)),
                  v4,
                  a4);
  v14 = v13;
  if ( v13 && (a4 & 2) != 0 )
    memset(v13, 0, v4);
  return (__int64)v14;
}
