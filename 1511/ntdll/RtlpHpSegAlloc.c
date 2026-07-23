/*
 * XREFs of RtlpHpSegAlloc @ 0x18005895C
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegVsAllocate @ 0x180057F60 (RtlpHpSegVsAllocate.c)
 *     RtlpHpSegLfhAllocate @ 0x180058930 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpMetadataAlloc @ 0x18005A854 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeDecommit @ 0x18001A808 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpSegPageRangeCommit @ 0x18001B578 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180058BE4 (RtlpHpSegPageRangeAllocate.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void *__fastcall RtlpHpSegAlloc(PVOID BaseAddress, size_t Size, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // r14d
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rbx
  void *v12; // rdi
  int v13; // r12d
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdi

  v4 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = v4;
  if ( (a4 & 0xC000000) != 0 )
    v5 = 0;
  v9 = a4 & 4;
  if ( (a4 & 4) != 0 )
    LODWORD(v4) = v4 + 1;
  v10 = RtlpHpSegPageRangeAllocate(BaseAddress);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v13 = (unsigned __int8)~*(_BYTE *)(v10 + 26);
  if ( v5 && RtlpHpSegPageRangeCommit((volatile signed __int64 *)BaseAddress, v10, v10, v5) < 0 )
  {
    v12 = 0LL;
    goto LABEL_16;
  }
  if ( v9 )
  {
    v14 = 32LL * (unsigned int)v4 + v11 - 32;
    if ( (*(_BYTE *)(v14 + 24) & 2) != 0 )
      RtlpHpSegPageRangeDecommit((__int64)BaseAddress, v11, v14, 1);
  }
  v15 = v11 & 0xFFFFFFFFFFF00000uLL;
  *(_WORD *)(v11 + 6) = ((_WORD)v4 << 12) - Size;
  v16 = (unsigned int)((__int64)(v11 - (v11 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12;
  v11 = 0LL;
  v12 = (void *)(v15 + v16);
  if ( (a4 & 2) != 0 && v13 )
  {
    memset(v12, 0, Size);
LABEL_16:
    if ( v11 )
      RtlpHpSegPageRangeShrink(BaseAddress, v11, 0LL, a4);
  }
  return v12;
}
