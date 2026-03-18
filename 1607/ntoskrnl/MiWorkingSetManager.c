/*
 * XREFs of MiWorkingSetManager @ 0x1400BDF08
 * Callers:
 *     KeBalanceSetManager @ 0x14013EF3C (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x1401E8350 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MiDeleteNoBlockStacks @ 0x1400BE128 (MiDeleteNoBlockStacks.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BE310 (MiEmptyDecayClusterTimers.c)
 *     MiDeleteStaleCacheMaps @ 0x1400BE6CC (MiDeleteStaleCacheMaps.c)
 *     MiSignalLargePageRebuild @ 0x1400BE73C (MiSignalLargePageRebuild.c)
 *     MiNumberWsSwapPagefiles @ 0x1400BE89C (MiNumberWsSwapPagefiles.c)
 *     MiScanPagefiles @ 0x1400BE8D0 (MiScanPagefiles.c)
 *     MiAdjustModifiedPageLoad @ 0x1400BEA50 (MiAdjustModifiedPageLoad.c)
 *     MiAdjustCachedStacks @ 0x1400BEBA4 (MiAdjustCachedStacks.c)
 *     MiAdjustPteBins @ 0x1400BED6C (MiAdjustPteBins.c)
 *     KePulseEvent @ 0x1400BEF10 (KePulseEvent.c)
 *     MiProcessWorkingSets @ 0x1400CD640 (MiProcessWorkingSets.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // r14d
  char v6; // bp
  char i; // si
  __int64 v8; // rcx
  __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v17[4]; // [rsp+20h] [rbp-98h] BYREF
  char v18; // [rsp+24h] [rbp-94h]

  v2 = *(_QWORD *)(a1 + 6248);
  v3 = 0;
  if ( !*(_QWORD *)(v2 + 96) )
    *(_QWORD *)(v2 + 96) = KeGetCurrentThread();
  if ( (int *)a1 == MiSystemPartition )
    MiDeleteStaleCacheMaps();
  MiEmptyDecayClusterTimers(a1);
  if ( ++*(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 36) )
  {
    v13 = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 32) = 0;
    v14 = ((_BYTE)v13 + 1) & 0xF;
    *(_DWORD *)(v2 + 24) = v14;
    v15 = ((_BYTE)v14 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v15 + 3008) )
      KeSetEvent((PRKEVENT)(a1 + 8 * ((unsigned int)v15 + 2LL * (unsigned int)v15 + 481)), 0, 0);
  }
  if ( (int *)a1 == MiSystemPartition )
  {
    MiDeleteNoBlockStacks(1LL);
    if ( !a2 )
      KePulseEvent(&stru_140327750, 0, 0);
  }
  v18 = 1;
  v6 = 1;
  MiProcessWorkingSets(a1, v17);
  for ( i = v18; v18 != 1; i = v18 )
  {
    if ( v6 == i )
    {
      ++*(_DWORD *)(v2 + 2580);
      i = 1;
      v18 = 1;
    }
    else
    {
      MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v2 + 2344) >> 3, *(unsigned int *)(v2 + 128));
      ++*(_DWORD *)(v2 + 2576);
      MiScanPagefiles(a1);
      v3 = 1;
    }
    v6 = i;
    MiProcessWorkingSets(a1, v17);
  }
  if ( (int *)a1 == MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
  }
  if ( !v3 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v2 + 2344) >> 3, *(unsigned int *)(v2 + 128));
    MiScanPagefiles(a1);
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 984) )
    {
      _InterlockedOr(v16, 0);
      LOBYTE(v8) = 1;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v8);
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a1 + 992)) >= 0x861C46800LL )
      {
        if ( byte_140327011 )
        {
          *(_QWORD *)(a1 + 992) = UnbiasedInterruptTime - 33000000000LL;
        }
        else
        {
          *(_QWORD *)(a1 + 960) = 0LL;
          *(_QWORD *)(a1 + 976) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 984) = a1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 960), NormalWorkQueue);
        }
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 7232);
  v11 = *(_QWORD *)(a1 + 7344);
  if ( v10 > v11 && v10 - v11 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 704), 0, 0);
  return MiSignalLargePageRebuild(a1);
}
