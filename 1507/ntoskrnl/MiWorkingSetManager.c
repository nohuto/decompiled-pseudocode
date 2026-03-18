/*
 * XREFs of MiWorkingSetManager @ 0x1400124C4
 * Callers:
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x14021D7E0 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     MiDeleteStaleCacheMaps @ 0x140011D2C (MiDeleteStaleCacheMaps.c)
 *     MiEmptyDecayClusterTimers @ 0x140011F70 (MiEmptyDecayClusterTimers.c)
 *     MiDeleteNoBlockStacks @ 0x140012424 (MiDeleteNoBlockStacks.c)
 *     MiAdjustModifiedPageLoad @ 0x140012840 (MiAdjustModifiedPageLoad.c)
 *     MiNumberWsSwapPagefiles @ 0x140012980 (MiNumberWsSwapPagefiles.c)
 *     MiFreePageFileHashPfns @ 0x1400129B4 (MiFreePageFileHashPfns.c)
 *     MiAdjustCachedStacks @ 0x140012A34 (MiAdjustCachedStacks.c)
 *     MiAdjustPteBins @ 0x140012C04 (MiAdjustPteBins.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  char v8; // al
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // rdx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 5256);
  if ( !*(_QWORD *)(v2 + 96) )
    *(_QWORD *)(v2 + 96) = KeGetCurrentThread();
  if ( (__int16 *)a1 == &MiSystemPartition )
    MiDeleteStaleCacheMaps();
  MiEmptyDecayClusterTimers(a1);
  if ( ++*(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 36) )
  {
    v8 = *(_DWORD *)(v2 + 24) + 1;
    *(_DWORD *)(v2 + 32) = 0;
    v9 = v8 & 0xF;
    *(_DWORD *)(v2 + 24) = v9;
    v10 = ((_BYTE)v9 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v10 + 2752) )
      KeSetEvent((PRKEVENT)(a1 + 24 * ((unsigned int)v10 + 147LL)), 0, 0);
  }
  if ( (__int16 *)a1 == &MiSystemPartition )
  {
    MiDeleteNoBlockStacks(1LL);
    if ( !a2 )
      KePulseEvent(&stru_14034F790, 0, 0);
  }
  MiProcessWorkingSets(a1);
  if ( (__int16 *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
  }
  MiFreePageFileHashPfns(a1);
  if ( *(_QWORD *)(a1 + 5504) <= 0x400uLL )
  {
    v11 = *(_DWORD *)(a1 + 5336);
    if ( v11 )
    {
      if ( *(_QWORD *)(a1 + 5744) && !*(_QWORD *)(a1 + 896) )
      {
        v12 = *(_DWORD *)(a1 + 904);
        if ( v12 >= 0x1E )
        {
          v13 = 0;
          v14 = a1 + 5344;
          while ( !*(_QWORD *)(*(_QWORD *)v14 + 24LL) || (*(_BYTE *)(*(_QWORD *)v14 + 164LL) & 0x10) != 0 )
          {
            ++v13;
            v14 += 8LL;
            if ( v13 >= v11 )
            {
              if ( *(_BYTE *)(a1 + 610) == 1 )
              {
                *(_BYTE *)(a1 + 610) = 0;
                *(_DWORD *)(a1 + 904) = 0;
                *(_QWORD *)(a1 + 888) = MiScanPagefileSpace;
                *(_QWORD *)(a1 + 896) = a1;
                *(_QWORD *)(a1 + 872) = 0LL;
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 872), HyperCriticalWorkQueue);
              }
              break;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 904) = v12 + 1;
        }
      }
    }
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 960) )
    {
      _InterlockedOr(v15, 0);
      if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - *(_QWORD *)(a1 + 968) >= 0x861C46800uLL )
      {
        if ( byte_14034F0FD )
        {
          *(_QWORD *)(a1 + 968) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - 33000000000LL;
        }
        else
        {
          *(_QWORD *)(a1 + 960) = a1;
          *(_QWORD *)(a1 + 952) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 936) = 0LL;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 936), NormalWorkQueue);
        }
      }
    }
  }
  MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v2 + 2344) >> 3, *(unsigned int *)(v2 + 128));
  v5 = *(_QWORD *)(a1 + 5632);
  v6 = *(_QWORD *)(a1 + 5744);
  if ( v5 > v6 && v5 - v6 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 704), 0, 0);
  return MiSignalLargePageRebuild(a1);
}
