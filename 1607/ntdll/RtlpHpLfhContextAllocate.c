/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x180042D90
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800431C8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhSlotAllocate @ 0x1800419C4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18007727C (RtlpHpLfhBucketUpdateStats.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A6010 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  size_t v4; // rdi
  unsigned int v6; // r11d
  __int64 v8; // rbp
  __int64 v9; // rbp
  char CurrentProcessorNumber; // al
  unsigned int v11; // ecx
  unsigned int v12; // eax
  void *v13; // rax
  void *v14; // rbx

  v4 = (unsigned int)a2;
  v6 = a3;
  if ( (_DWORD)a2 != a3 )
    v6 = a3 + 2;
  v8 = (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v8 + 192) & 1) != 0 && !(unsigned int)RtlpHpLfhBucketUpdateStats(a1, v6, 1LL) )
    return -1LL;
  v9 = *(_QWORD *)(a1 + 8 * v8 + 192);
  CurrentProcessorNumber = RtlGetCurrentProcessorNumber(a1, a2);
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
                  *(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL * *(unsigned __int8 *)(*(_QWORD *)(v9 + 96) + v12)),
                  v4,
                  a4);
  v14 = v13;
  if ( v13 && (a4 & 2) != 0 )
    memset(v13, 0, v4);
  return (__int64)v14;
}
