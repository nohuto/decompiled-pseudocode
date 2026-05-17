/*
 * XREFs of RtlpHpVsChunkSize @ 0x180065AD4
 * Callers:
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpSegAllocSizeInternal @ 0x180036F30 (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpVsSubsegmentWalk @ 0x1800F376C (RtlpHpVsSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v8; // edx

  v3 = a1 - 16;
  if ( ((((unsigned __int64)(a1 - 16) >> 32) ^ HIDWORD(RtlpLFHKey) ^ (unsigned int)HIDWORD(*(_QWORD *)(a1 - 16))) & 0xFF0000) != 0 )
  {
    v5 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 16;
    if ( (*(_DWORD *)(v3 + 8) & 0x100) != 0 )
    {
      v8 = *(unsigned __int16 *)(v5 + a1 - 2);
      if ( (v8 & 0x8000u) != 0 )
        LODWORD(v5) = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 17;
      else
        LODWORD(v5) = v5 - (v8 & 0x1FFF);
      v6 = (v8 >> 14) & 1;
    }
    else
    {
      v6 = 0;
    }
    if ( a3 )
      *a3 = v6;
  }
  else
  {
    LODWORD(v5) = -1;
  }
  return (unsigned int)v5;
}
