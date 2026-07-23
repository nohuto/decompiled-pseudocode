/*
 * XREFs of MiAllocatePagesForMdl @ 0x140101FA4
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400A8A24 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x140149F60 (MmAllocatePagesForMdl.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MmAllocateNonCachedMemory @ 0x1406588A8 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiObtainMdlCharges @ 0x140101B28 (MiObtainMdlCharges.c)
 *     MiFindPagesForMdl @ 0x140101DCC (MiFindPagesForMdl.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     MiRemoveMdlPages @ 0x140658ACC (MiRemoveMdlPages.c)
 */

void *__fastcall MiAllocatePagesForMdl(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int16 a7,
        int a8)
{
  void *result; // rax
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbp
  ULONG_PTR v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // r14
  _DWORD *v15; // rax
  ULONG_PTR v16; // r13
  unsigned __int64 v17; // r15
  int PagesForMdl; // eax
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  int *v22; // r11
  int v23; // [rsp+50h] [rbp-38h]
  int v24; // [rsp+54h] [rbp-34h]

  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  v10 = 0;
  v11 = a2 >> 12;
  v12 = a3 >> 12;
  if ( a3 >> 12 < qword_140326AD0 )
  {
    if ( v12 < *(_QWORD *)(a1 + 6280) )
      goto LABEL_8;
  }
  else
  {
    v12 = qword_140326AD0;
  }
  if ( !v11 )
  {
    v13 = a8 | 0x10000;
    goto LABEL_9;
  }
LABEL_8:
  v13 = a8;
LABEL_9:
  v14 = a4 >> 12;
  if ( ((v14 - 1) & v14) != 0 )
    v14 = 0LL;
  v15 = MiObtainMdlCharges(a1, v11, v12, v14, a5, a6, v13);
  v16 = (ULONG_PTR)v15;
  if ( !v15 )
    return 0LL;
  v17 = (unsigned __int64)(unsigned int)v15[10] >> 12;
  v23 = 0;
  v15[10] = 0;
  while ( 1 )
  {
    v24 = *(_DWORD *)(v16 + 40);
    PagesForMdl = MiFindPagesForMdl(a1, v16, v13, a6, v17, v11, v12, v14, a7);
    v19 = v23;
    if ( PagesForMdl == 1 )
      v19 = 1;
    v20 = (unsigned __int64)*(unsigned int *)(v16 + 40) >> 12;
    v23 = v19;
    if ( v20 == v17 )
      break;
    if ( (v13 & 0x80u) == 0 )
      goto LABEL_24;
    if ( v24 == *(_DWORD *)(v16 + 40) )
    {
      if ( v10 > 3 || KeGetCurrentIrql() >= 2u || (v13 & 8) != 0 )
      {
LABEL_24:
        if ( (v13 & 4) != 0 )
          LOWORD(v13) = v13 | 1;
        break;
      }
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      ++v10;
    }
    else
    {
      v10 = 0;
    }
    v13 &= ~0x10000u;
  }
  v21 = v17 - v20;
  if ( v17 != v20 )
  {
    v22 = MiSystemPartition;
    if ( (int *)a1 == MiSystemPartition )
      MiReturnResidentAvailable(v17 - v20);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), v21);
    if ( (int *)a1 == v22 )
      _InterlockedExchangeAdd64(&qword_140327928, -(__int64)v21);
    MiReturnCommit(a1, v21);
    v19 = v23;
  }
  if ( (v13 & 1) != 0 )
    v19 = 0;
  result = (void *)MiInitializeMdlPages(v16, v19);
  if ( result )
  {
    if ( (v13 & 0x100) != 0 )
      return (void *)MiRemoveMdlPages(result);
  }
  return result;
}
