/*
 * XREFs of MiAllocatePagesForMdl @ 0x140076E38
 * Callers:
 *     MmAllocateNodePagesForMdlEx @ 0x140076D90 (MmAllocateNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x14013A010 (MmAllocatePagesForMdl.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14021CD0C (MiAllocatePartitionPhysicalPages.c)
 *     MmAllocateNonCachedMemory @ 0x1406A2544 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MiFindPagesForMdl @ 0x1400778A4 (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x140077BF0 (MiObtainMdlCharges.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiRemoveMdlPages @ 0x1406A28CC (MiRemoveMdlPages.c)
 */

void *__fastcall MiAllocatePagesForMdl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int16 a7,
        unsigned int a8)
{
  __int64 v8; // rdi
  __int64 v9; // r12
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // r13
  void *result; // rax
  unsigned int v15; // r14d
  unsigned __int64 v16; // r15
  int PagesForMdl; // eax
  int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  int v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+54h] [rbp-34h]

  v8 = a3 >> 12;
  v9 = a2 >> 12;
  if ( a3 >> 12 > (unsigned __int64)qword_14034EC10 )
    v8 = qword_14034EC10;
  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  v11 = a8;
  v12 = a4 >> 12;
  v13 = MiObtainMdlCharges(a1, a2 >> 12, v8, a4 >> 12, a5, a6, a8);
  result = 0LL;
  if ( v13 )
  {
    v15 = 0;
    v16 = (unsigned __int64)*(unsigned int *)(v13 + 40) >> 12;
    *(_DWORD *)(v13 + 40) = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = *(_DWORD *)(v13 + 40);
      PagesForMdl = MiFindPagesForMdl(a1, v13, a8, a6, v16, v9, v8, v12, a7);
      v18 = v21;
      if ( PagesForMdl == 1 )
        v18 = 1;
      v19 = (unsigned __int64)*(unsigned int *)(v13 + 40) >> 12;
      v21 = v18;
      if ( v19 == v16 )
        break;
      if ( (a8 & 0x80u) == 0 )
        goto LABEL_23;
      if ( v22 == *(_DWORD *)(v13 + 40) )
      {
        if ( v15 > 3 || KeGetCurrentIrql() >= 2u || (a8 & 8) != 0 )
        {
LABEL_23:
          if ( (a8 & 4) != 0 )
            v11 = a8 | 1;
          break;
        }
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
        ++v15;
      }
      else
      {
        v15 = 0;
      }
    }
    v20 = v16 - v19;
    if ( v16 != v19 )
    {
      if ( (__int16 *)a1 == MiSystemPartition )
      {
        MiReturnResidentAvailable(v16 - v19);
        _InterlockedExchangeAdd64(&qword_14034F910, v20);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), v20);
      }
      if ( (__int16 *)a1 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14034FCE0, -(__int64)v20);
      MiReturnCommit(a1, v20);
      v18 = v21;
    }
    if ( (v11 & 1) != 0 )
      v18 = 0;
    result = (void *)MiInitializeMdlPages(a1, v13, v16, v11, a6, v18);
    if ( result )
    {
      if ( (v11 & 0x100) != 0 )
        return (void *)MiRemoveMdlPages(result);
    }
  }
  return result;
}
