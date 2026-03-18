/*
 * XREFs of MiWorkingSetManager @ 0x1400131F4
 * Callers:
 *     KeBalanceSetManager @ 0x1401373C4 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x1401D979C (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiSignalLargePageRebuild @ 0x1400133E0 (MiSignalLargePageRebuild.c)
 *     MiNumberWsSwapPagefiles @ 0x14001358C (MiNumberWsSwapPagefiles.c)
 *     MiScanPagefiles @ 0x1400135C0 (MiScanPagefiles.c)
 *     MiAdjustModifiedPageLoad @ 0x14001373C (MiAdjustModifiedPageLoad.c)
 *     MiAdjustCachedStacks @ 0x140013890 (MiAdjustCachedStacks.c)
 *     MiAdjustPteBins @ 0x140013A60 (MiAdjustPteBins.c)
 *     MiDeleteNoBlockStacks @ 0x140014528 (MiDeleteNoBlockStacks.c)
 *     MiEmptyDecayClusterTimers @ 0x140014790 (MiEmptyDecayClusterTimers.c)
 *     MiDeleteStaleCacheMaps @ 0x140014A20 (MiDeleteStaleCacheMaps.c)
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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

  v2 = *(_QWORD *)(a1 + 5616);
  v3 = 0;
  if ( !*(_QWORD *)(v2 + 96) )
    *(_QWORD *)(v2 + 96) = KeGetCurrentThread();
  if ( (int *)a1 == &MiSystemPartition )
    MiDeleteStaleCacheMaps();
  MiEmptyDecayClusterTimers(a1);
  if ( ++*(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 36) )
  {
    v13 = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 32) = 0;
    v14 = ((_BYTE)v13 + 1) & 0xF;
    *(_DWORD *)(v2 + 24) = v14;
    v15 = ((_BYTE)v14 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v15 + 2880) )
      KeSetEvent((PRKEVENT)(a1 + 24 * ((unsigned int)v15 + 155LL)), 0, 0);
  }
  if ( (int *)a1 == &MiSystemPartition )
  {
    MiDeleteNoBlockStacks(1LL);
    if ( !a2 )
      KePulseEvent(&stru_1402FF310, 0, 0);
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
  if ( (int *)a1 == &MiSystemPartition )
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
    if ( !*(_QWORD *)(a1 + 992) )
    {
      _InterlockedOr(v16, 0);
      LOBYTE(v8) = 1;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v8);
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a1 + 1000)) >= 0x861C46800LL )
      {
        if ( byte_1402FEC41 )
        {
          *(_QWORD *)(a1 + 1000) = UnbiasedInterruptTime - 33000000000LL;
        }
        else
        {
          *(_QWORD *)(a1 + 968) = 0LL;
          *(_QWORD *)(a1 + 984) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 992) = a1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 968), NormalWorkQueue);
        }
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 6016);
  v11 = *(_QWORD *)(a1 + 6128);
  if ( v10 > v11 && v10 - v11 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 712), 0, 0);
  return MiSignalLargePageRebuild(a1);
}
