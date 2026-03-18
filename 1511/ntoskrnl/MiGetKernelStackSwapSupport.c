/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x1400F55A8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400F5160 (MiPageFileLargestBitmapsRun.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400F5CF8 (MiAllocateWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  int *v4; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // edi
  __int64 *v7; // r14
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 WorkingSetSwapSupport; // rax
  unsigned int v12; // ebx

  v3 = -1;
  v4 = MiPartitionIdToPointer(*(_WORD *)(a2 + 1460));
  if ( v4 != MiSystemPartition )
    return 3221225799LL;
  v5 = v4[1430];
  v6 = 0;
  if ( !v5 )
    return 3221225799LL;
  v7 = (__int64 *)(v4 + 1432);
  do
  {
    v8 = *v7;
    if ( (*(_BYTE *)(*v7 + 204) & 0x50) == 0 )
    {
      if ( v3 == -1
        || (v12 = MiPageFileLargestBitmapsRun(*(_QWORD *)&v4[2 * v3 + 1432]),
            (unsigned int)MiPageFileLargestBitmapsRun(v8) > v12) )
      {
        v3 = v6;
      }
    }
    ++v6;
    ++v7;
  }
  while ( v6 < v5 );
  if ( v3 == -1 )
    return 3221225799LL;
  v9 = *(_DWORD *)(a2 + 1176);
  if ( !v9 )
    return 3221225738LL;
  if ( v9 > 0x2AAAAAAA )
    v9 = 715827882;
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(2 * v9);
  *(_QWORD *)(a1 + 56) = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
    return 3221225626LL;
  *(_QWORD *)(a1 + 64) ^= (*(_DWORD *)(a1 + 64) ^ (2 * v3)) & 0x1E;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace((__int64)v4, (_DWORD *)(a1 + 64), 6 * v9, 0x21u);
  return 0LL;
}
