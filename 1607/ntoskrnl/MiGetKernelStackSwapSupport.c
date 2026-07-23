/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x1400B40E8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400B4370 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400B52F8 (MiAllocateWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  int *v4; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // edi
  int *v7; // r14
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 WorkingSetSwapSupport; // rax
  unsigned int v12; // ebx

  v3 = -1;
  v4 = MiPartitionIdToPointer(*(_WORD *)(a2 + 1444));
  if ( v4 != MiSystemPartition )
    return 3221225799LL;
  v5 = v4[1574];
  v6 = 0;
  if ( !v5 )
    return 3221225799LL;
  v7 = v4 + 1576;
  do
  {
    v8 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(*(_QWORD *)v7 + 204LL) & 0x50) == 0 )
    {
      if ( v3 == -1
        || (v12 = MiPageFileLargestBitmapsRun(*(_QWORD *)&v4[2 * v3 + 1576]),
            (unsigned int)MiPageFileLargestBitmapsRun(v8) > v12) )
      {
        v3 = v6;
      }
    }
    ++v6;
    v7 += 2;
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
  *(_QWORD *)(a1 + 64) ^= (*(_DWORD *)(a1 + 64) ^ (v3 << 12)) & 0xF000;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v4, a1 + 64, 6 * v9, 33LL);
  return 0LL;
}
