/*
 * XREFs of RtlpScanProcessVirtualMemory @ 0x1800EDC90
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180007560 (RtlDetectHeapLeaks.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     RtlpGetHeapBlock @ 0x1800ED520 (RtlpGetHeapBlock.c)
 *     RtlpGetMemoryFlag @ 0x1800ED5B4 (RtlpGetMemoryFlag.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800EDA58 (RtlpScanHeapAllocBlocks.c)
 */

char RtlpScanProcessVirtualMemory()
{
  char *v0; // rbx
  NTSTATUS VirtualMemory; // esi
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // r15
  unsigned __int64 i; // rdi
  __int64 HeapBlock; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 *v8; // rcx
  _BYTE MemoryInformation[24]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+50h] [rbp-48h]
  int v13; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v0,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory >= 0 )
    {
      if ( (MemoryInformation[16] & 0xCC) != 0
        && (v12 & 0x1000) != 0
        && (v13 & 0x100) == 0
        && !RtlpGetMemoryFlag((_QWORD *)RtlpProcessMemoryMap, (unsigned __int64)v0) )
      {
        v2 = (unsigned __int64 *)v0;
        v3 = v11 >> 3;
        for ( i = 0LL; i < v3; ++i )
        {
          HeapBlock = RtlpGetHeapBlock(*v2);
          if ( HeapBlock )
          {
            if ( !*(_QWORD *)(HeapBlock + 16) )
              __debugbreak();
            if ( !*(_DWORD *)(HeapBlock + 32) )
            {
              v6 = *(_QWORD *)HeapBlock;
              v7 = *(_QWORD **)(HeapBlock + 8);
              if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock || *v7 != HeapBlock )
                __fastfail(3u);
              *v7 = v6;
              *(_QWORD *)(v6 + 8) = v7;
              v8 = (__int64 *)qword_180150AA8;
              if ( *(__int64 **)qword_180150AA8 != &RtlpBusyList )
                __fastfail(3u);
              *(_QWORD *)HeapBlock = &RtlpBusyList;
              *(_QWORD *)(HeapBlock + 8) = v8;
              *v8 = HeapBlock;
              qword_180150AA8 = HeapBlock;
            }
            ++*(_DWORD *)(HeapBlock + 32);
          }
          ++v2;
        }
      }
      v0 += v11;
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}
