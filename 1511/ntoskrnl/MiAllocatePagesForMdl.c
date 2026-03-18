/*
 * XREFs of MiAllocatePagesForMdl @ 0x1400BC760
 * Callers:
 *     MmAllocateNodePagesForMdlEx @ 0x1400BC6B8 (MmAllocateNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x140140B0C (MmAllocatePagesForMdl.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401D8F48 (MiAllocatePartitionPhysicalPages.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 *     MmAllocateNonCachedMemory @ 0x140623364 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiInitializeMdlPages @ 0x1400BCA18 (MiInitializeMdlPages.c)
 *     MiFindPagesForMdl @ 0x1400BCF40 (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400BD288 (MiObtainMdlCharges.c)
 *     MiQueueAddMemoryNotifyEntry @ 0x1401D1F64 (MiQueueAddMemoryNotifyEntry.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiRemoveMdlPages @ 0x14062358C (MiRemoveMdlPages.c)
 */

__int64 __fastcall MiAllocatePagesForMdl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int16 a7,
        unsigned int a8)
{
  __int64 result; // rax
  unsigned int v9; // esi
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  int PagesForMdl; // eax
  int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r11
  void *v21; // rsi
  int v22; // [rsp+50h] [rbp-30h]
  int v23; // [rsp+54h] [rbp-2Ch]
  _QWORD v24[2]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp-8h]

  result = 0LL;
  v9 = 0;
  v24[0] = 0LL;
  v24[1] = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (a4 & 0xFFF) == 0 )
  {
    v12 = a2 >> 12;
    v13 = a3 >> 12;
    while ( 1 )
    {
      if ( v13 < qword_1402FE758 )
      {
        if ( v13 >= *(_QWORD *)(a1 + 5704) )
        {
          if ( !v12 )
            a8 |= 0x20000u;
          v25 = v13;
          LODWORD(v26) = 0;
          MiQueueAddMemoryNotifyEntry(a1, v24, 1LL);
        }
      }
      else
      {
        v13 = qword_1402FE758;
        if ( !v12 )
          a8 |= 0x20000u;
      }
      v14 = MiObtainMdlCharges(a1, v12, v13, a4 >> 12, a5, a6, a8);
      v15 = v14;
      if ( !v14 )
        break;
      v16 = (unsigned __int64)*(unsigned int *)(v14 + 40) >> 12;
      v22 = 0;
      *(_DWORD *)(v14 + 40) = 0;
      while ( 1 )
      {
        v23 = *(_DWORD *)(v15 + 40);
        PagesForMdl = MiFindPagesForMdl(a1, v15, a8, a6, v16, v12, v13, a4 >> 12, a7);
        v18 = v22;
        if ( PagesForMdl == 1 )
          v18 = 1;
        v19 = (unsigned __int64)*(unsigned int *)(v15 + 40) >> 12;
        v22 = v18;
        if ( v19 == v16 )
          break;
        if ( (a8 & 0x80u) == 0 )
          goto LABEL_23;
        if ( v23 == *(_DWORD *)(v15 + 40) )
        {
          if ( v9 > 3 || KeGetCurrentIrql() >= 2u || (a8 & 8) != 0 )
          {
LABEL_23:
            if ( (a8 & 4) != 0 )
              a8 |= 1u;
            break;
          }
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
          ++v9;
        }
        else
        {
          v9 = 0;
        }
      }
      v20 = v16 - v19;
      if ( v16 != v19 )
      {
        if ( (int *)a1 == MiSystemPartition )
        {
          MiReturnResidentAvailable(v16 - v19);
          _InterlockedExchangeAdd64(&qword_1402FF490, v20);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), v20);
        }
        if ( (int *)a1 == MiSystemPartition )
          _InterlockedExchangeAdd64(&qword_1402FF820, -(__int64)v20);
        MiReturnCommit(a1, v20);
        v18 = v22;
      }
      if ( (a8 & 1) != 0 )
        v18 = 0;
      v21 = (void *)MiInitializeMdlPages(a1, v15, v16, a8, a6, v18);
      if ( !v24[0] || (MiQueueAddMemoryNotifyEntry(a1, v24, 0LL), (_DWORD)v26 != 1) )
      {
        if ( v21 && (a8 & 0x100) != 0 )
          return MiRemoveMdlPages(v21);
        return (__int64)v21;
      }
      if ( v21 )
      {
        MiFreePagesFromMdl(a1, (ULONG_PTR)v21, a8 >> 31);
        ExFreePoolWithTag(v21, 0);
      }
      v9 = 0;
    }
    if ( v24[0] )
      MiQueueAddMemoryNotifyEntry(a1, v24, 0LL);
    return 0LL;
  }
  return result;
}
