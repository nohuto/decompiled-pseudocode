/*
 * XREFs of RtlpScanHeapAllocBlocks @ 0x1800DF0D8
 * Callers:
 *     RtlpScanProcessVirtualMemory @ 0x1800DF31C (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpGetBlockInfo @ 0x1800DEB4C (RtlpGetBlockInfo.c)
 *     RtlpGetHeapBlock @ 0x1800DEB94 (RtlpGetHeapBlock.c)
 */

char RtlpScanHeapAllocBlocks()
{
  __int64 *v0; // rbx
  _QWORD *v1; // rsi
  unsigned __int64 *v2; // rcx
  __int64 *v3; // rbp
  __int64 v4; // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 *i; // rdi
  __int64 HeapBlock; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 **v10; // rcx
  __int64 j; // rsi
  __int64 BlockInfo; // rax
  int v13; // r9d
  __int64 v14; // rbp
  SIZE_T v15; // rax
  __int64 v16; // rdi
  char *v17; // r8
  unsigned __int8 *v18; // rbx
  int v19; // eax

  v0 = (__int64 *)RtlpBusyList;
  while ( v0 != &RtlpBusyList )
  {
    v1 = v0 + 2;
    v2 = (unsigned __int64 *)v0[2];
    v3 = v0;
    v4 = v0[3];
    v0 = (__int64 *)*v0;
    v5 = (unsigned __int64 *)((char *)v2 + v4);
    for ( i = v2 + 1; i <= v5; ++i )
    {
      HeapBlock = RtlpGetHeapBlock(*v2);
      if ( HeapBlock )
      {
        if ( !*(_DWORD *)(HeapBlock + 32) )
        {
          v8 = *(_QWORD *)HeapBlock;
          v9 = *(_QWORD **)(HeapBlock + 8);
          if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock || *v9 != HeapBlock )
            __fastfail(3u);
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          v10 = (__int64 **)qword_1801449A8;
          *(_QWORD *)HeapBlock = &RtlpBusyList;
          *(_QWORD *)(HeapBlock + 8) = v10;
          if ( *v10 != &RtlpBusyList )
            __fastfail(3u);
          *v10 = (__int64 *)HeapBlock;
          qword_1801449A8 = HeapBlock;
        }
        ++*(_DWORD *)(HeapBlock + 32);
        if ( !*(_QWORD *)(HeapBlock + 16) )
          __debugbreak();
      }
      v2 = i;
      v5 = (unsigned __int64 *)(*v1 + v3[3]);
    }
  }
  for ( j = RtlpLeakList; (__int64 *)j != &RtlpLeakList; j = *(_QWORD *)j )
  {
    BlockInfo = RtlpGetBlockInfo((_QWORD *)RtlpProcessMemoryMap, *(_QWORD *)(j + 16));
    v14 = BlockInfo;
    if ( BlockInfo )
    {
      if ( qword_180144A68 )
      {
        v15 = RtlSizeHeap(*(PVOID *)(BlockInfo + 8), 0, *(PVOID *)(j + 16));
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, SIZE_T, _DWORD, _QWORD))qword_180144A68)(
          0LL,
          *(_QWORD *)(v14 + 8),
          *(_QWORD *)(j + 16),
          v15,
          0,
          0LL);
      }
      else
      {
        if ( !v13 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
        }
        v16 = *(_QWORD *)(v14 + 8);
        v17 = *(char **)(j + 16);
        if ( *(_DWORD *)(v16 + 16) == -571548178 )
        {
          v18 = *(unsigned __int8 **)(j + 16);
        }
        else
        {
          v18 = (unsigned __int8 *)(v17 - 16);
          _m_prefetchw(v17 - 16);
          if ( *(v17 - 1) == 5 )
            v18 -= 16 * v18[14];
        }
        v19 = RtlSizeHeap(*(PVOID *)(v14 + 8), 0, v17);
        DbgPrint("%p  %-16Ix  %Id", v18, v16, v19);
        DbgPrint("\n");
      }
      ++RtlpLeaksCount;
    }
  }
  if ( qword_180144A68 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))qword_180144A68)(0LL, 0LL, 0LL, 0LL, 0, 0LL);
  return 1;
}
