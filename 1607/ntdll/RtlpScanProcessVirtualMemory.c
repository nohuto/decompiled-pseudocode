/*
 * XREFs of RtlpScanProcessVirtualMemory @ 0x1800EDBD0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180007570 (RtlDetectHeapLeaks.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     RtlpGetHeapBlock @ 0x1800ED460 (RtlpGetHeapBlock.c)
 *     RtlpGetMemoryFlag @ 0x1800ED4F4 (RtlpGetMemoryFlag.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800ED998 (RtlpScanHeapAllocBlocks.c)
 */

char RtlpScanProcessVirtualMemory()
{
  unsigned __int64 v0; // rbx
  int VirtualMemory; // esi
  unsigned __int64 *v2; // r14
  unsigned __int64 i; // rdi
  __int64 HeapBlock; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 *v7; // rcx
  char v9; // [rsp+40h] [rbp-58h]
  unsigned __int64 v10; // [rsp+48h] [rbp-50h]
  __int16 v11; // [rsp+50h] [rbp-48h]
  __int16 v12; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory >= 0 )
    {
      if ( (v9 & 0xCC) != 0
        && (v11 & 0x1000) != 0
        && (v12 & 0x100) == 0
        && !RtlpGetMemoryFlag((_QWORD *)RtlpProcessMemoryMap, v0) )
      {
        v2 = (unsigned __int64 *)v0;
        for ( i = 0LL; i < v10 >> 3; ++i )
        {
          HeapBlock = RtlpGetHeapBlock(*v2);
          if ( HeapBlock )
          {
            if ( !*(_QWORD *)(HeapBlock + 16) )
              __debugbreak();
            if ( !*(_DWORD *)(HeapBlock + 32) )
            {
              v5 = *(_QWORD *)HeapBlock;
              v6 = *(_QWORD **)(HeapBlock + 8);
              if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock || *v6 != HeapBlock )
                __fastfail(3u);
              *v6 = v5;
              *(_QWORD *)(v5 + 8) = v6;
              v7 = (__int64 *)qword_180150AA8;
              if ( *(__int64 **)qword_180150AA8 != &RtlpBusyList )
                __fastfail(3u);
              *(_QWORD *)HeapBlock = &RtlpBusyList;
              *(_QWORD *)(HeapBlock + 8) = v7;
              *v7 = HeapBlock;
              qword_180150AA8 = HeapBlock;
            }
            ++*(_DWORD *)(HeapBlock + 32);
          }
          ++v2;
        }
      }
      v0 += v10;
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}
