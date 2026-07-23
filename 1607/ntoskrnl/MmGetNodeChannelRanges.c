/*
 * XREFs of MmGetNodeChannelRanges @ 0x140577504
 * Callers:
 *     ExpQueryMemoryTopologyInformation @ 0x140577474 (ExpQueryMemoryTopologyInformation.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmGetNodeChannelRanges(_QWORD *a1, SIZE_T *a2)
{
  unsigned int *v4; // rsi
  SIZE_T v5; // rdi
  _DWORD *PoolWithTag; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // r14
  __int64 *v9; // r11
  char *v10; // r10
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned int *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax

  v4 = (unsigned int *)MiReferencePageRuns((__int64)MiSystemPartition, 1u);
  v5 = 32LL * (*v4 - 1) + 48;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x68506D4Du);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    v9 = (__int64 *)(v4 + 4);
    *(_QWORD *)v8 = *v4;
    v10 = (char *)(v8 + 4);
    v11 = 0;
    v8[2] = (unsigned __int16)KeNumberNodes;
    v8[3] = MmNumberOfChannels;
    v12 = *v4;
    v13 = &v4[4 * v12 + 4];
    if ( (_DWORD)v12 )
    {
      do
      {
        v14 = *v9;
        v9 += 2;
        *((_QWORD *)v10 + 1) = v14;
        *((_QWORD *)v10 + 2) = *(v9 - 1);
        v15 = *(unsigned __int8 *)v13;
        v13 = (unsigned int *)((char *)v13 + 2);
        *(_DWORD *)v10 = v15;
        v10 += 32;
        v16 = *((unsigned __int8 *)v13 - 1);
        *((_DWORD *)v10 - 7) = v16;
        ++v11;
        *((_QWORD *)v10 - 1) = *(_BYTE *)(v16 + 2184 * v15 + qword_1403235B0 + 2169) == 1;
      }
      while ( v11 < *v4 );
    }
  }
  else
  {
    v7 = -1073741670;
  }
  MiDereferencePageRuns((__int64)v4);
  result = v7;
  *a1 = v8;
  *a2 = v5;
  return result;
}
