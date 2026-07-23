/*
 * XREFs of RtlpHpVsChunkSize @ 0x18004BDE8
 * Callers:
 *     RtlpHpSegAllocSizeInternal @ 0x1800445FC (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsSubsegmentWalk @ 0x18004E288 (RtlpHpVsSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // edx

  v3 = a1 - 16;
  if ( ((((unsigned __int64)(a1 - 16) >> 32) ^ HIDWORD(RtlpLFHKey) ^ (unsigned int)HIDWORD(*(_QWORD *)(a1 - 16))) & 0xFF0000) != 0 )
  {
    v5 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 16;
    if ( (*(_DWORD *)(v3 + 8) & 0x100) != 0 )
    {
      v6 = *(unsigned __int16 *)(v5 + a1 - 2);
      if ( (v6 & 0x8000u) != 0 )
        LODWORD(v5) = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 17;
      else
        LODWORD(v5) = v5 - (v6 & 0x1FFF);
      v7 = (v6 >> 14) & 1;
    }
    else
    {
      v7 = 0;
    }
    if ( a3 )
      *a3 = v7;
  }
  else
  {
    LODWORD(v5) = -1;
  }
  return (unsigned int)v5;
}
