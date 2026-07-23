/*
 * XREFs of RtlpGetHeapBlock @ 0x1800ED520
 * Callers:
 *     RtlpScanHeapAllocBlocks @ 0x1800EDA58 (RtlpScanHeapAllocBlocks.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800EDC90 (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     RtlpGetBlockInfo @ 0x1800ED4D8 (RtlpGetBlockInfo.c)
 */

__int64 __fastcall RtlpGetHeapBlock(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 BlockInfo; // rax
  unsigned __int64 v3; // r10
  unsigned __int64 *v4; // r8
  int v5; // r11d
  __int64 i; // rdx

  v1 = RtlpLeakHeapAddress;
LABEL_2:
  BlockInfo = RtlpGetBlockInfo((_QWORD *)RtlpProcessMemoryMap, a1);
  if ( BlockInfo && *(_QWORD *)(BlockInfo + 8) != v1 )
  {
    v4 = (unsigned __int64 *)(BlockInfo + 40);
    v5 = 0;
    for ( i = 0LL; i < *(int *)(BlockInfo + 16); ++i )
    {
      if ( *v4 <= v3 && v4[1] + *v4 > v3 )
      {
        a1 = *(_QWORD *)(BlockInfo + 40 * i + 40);
        if ( a1 != v3 )
          goto LABEL_2;
        return BlockInfo + 8 * (5LL * v5 + 3);
      }
      ++v5;
      v4 += 5;
    }
  }
  return 0LL;
}
