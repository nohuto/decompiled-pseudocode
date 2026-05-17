/*
 * XREFs of RtlpHpSegAlloc @ 0x18003E7CC
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegLfhAllocate @ 0x18003E7A0 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800431C8 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegVsAllocate @ 0x180072250 (RtlpHpSegVsAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x18003E92C (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA8C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeDecommit @ 0x180041808 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpSegPageRangeCommit @ 0x180043488 (RtlpHpSegPageRangeCommit.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void *__fastcall RtlpHpSegAlloc(__int64 a1, size_t a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // r14d
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // r12d
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v17; // r8

  v4 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = v4;
  if ( (a4 & 0xC000000) != 0 )
    v5 = 0;
  v9 = a4 & 4;
  if ( (a4 & 4) != 0 )
    LODWORD(v4) = v4 + 1;
  v10 = RtlpHpSegPageRangeAllocate(a1, (unsigned int)v4, a4);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = (unsigned __int8)~*(_BYTE *)(v10 + 26);
  if ( v5 && (int)RtlpHpSegPageRangeCommit(a1, v10, v10, v5) < 0 )
  {
    v15 = 0LL;
    goto LABEL_16;
  }
  if ( v9 )
  {
    v17 = 32LL * (unsigned int)v4 + v11 - 32;
    if ( (*(_BYTE *)(v17 + 24) & 2) != 0 )
      RtlpHpSegPageRangeDecommit(a1, v11, v17, 1LL);
  }
  v13 = v11 & 0xFFFFFFFFFFF00000uLL;
  *(_WORD *)(v11 + 6) = ((_WORD)v4 << 12) - a2;
  v14 = (unsigned int)((__int64)(v11 - (v11 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12;
  v11 = 0LL;
  v15 = (void *)(v13 + v14);
  if ( (a4 & 2) != 0 && v12 )
  {
    memset(v15, 0, a2);
LABEL_16:
    if ( v11 )
      RtlpHpSegPageRangeShrink(a1, v11, 0LL, a4);
  }
  return v15;
}
