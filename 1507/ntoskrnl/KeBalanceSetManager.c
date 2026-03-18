/*
 * XREFs of KeBalanceSetManager @ 0x140165F30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     ExpScanGeneralLookasideList @ 0x1401032A0 (ExpScanGeneralLookasideList.c)
 *     ExpScanSystemLookasideList @ 0x1401033C0 (ExpScanSystemLookasideList.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 */

void __noreturn KeBalanceSetManager()
{
  int v0; // ebx
  volatile CCHAR v1; // cl
  NTSTATUS v2; // eax
  __int64 *v3; // rdx
  __int64 *v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d
  int v12; // edx
  __int64 v13; // r10
  unsigned int v14; // ecx
  PVOID Object[3]; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int8 v16[112]; // [rsp+60h] [rbp-88h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 17);
  v0 = 8;
  v1 = KeNumberProcessorsGroup0[1];
  Object[0] = &KiBalanceSetManagerPeriodicEvent;
  KiStackProtectTime = (unsigned __int64)((0x8F0D180 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v1;
  Object[1] = (PVOID)(qword_140355188 + 104);
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( !v2 )
        break;
      if ( v2 == 1 )
        MiWorkingSetManager((__int64)MiSystemPartition, 1);
    }
    HvlpEnterIumSecureMode(1u, 209, 0, v16);
    if ( IopIrpCreditsEnabled > 1 && (unsigned int)KeNumberProcessors_0 > 1 )
    {
      v7 = 0LL;
      v8 = 0;
      do
      {
        v9 = KiProcessorBlock[v7];
        v7 = (unsigned int)(v7 + 1);
        v8 += *(_DWORD *)(v9 + 11548);
      }
      while ( (unsigned int)v7 < (unsigned int)KeNumberProcessors_0 );
      v6 = 0LL;
      v10 = v8 / (int)KeNumberProcessors_0;
      v11 = KeNumberProcessors_0 - 1;
      v12 = 0;
      do
      {
        v13 = KiProcessorBlock[v6];
        v14 = v10 - *(_DWORD *)(v13 + 11548);
        if ( v10 != *(_DWORD *)(v13 + 11548) )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 11548), v14);
          v12 += v14;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < v11 );
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(KiProcessorBlock[v6] + 11548), -v12);
    }
    if ( !ExpScanCount )
      break;
    if ( ExpScanCount == 1 )
    {
      v3 = &ExPagedLookasideLock;
      v4 = &ExPagedLookasideListHead;
LABEL_7:
      ExpScanGeneralLookasideList(v4, (volatile signed __int32 *)v3);
      goto LABEL_8;
    }
    if ( ExpScanCount == 2 )
      ExpScanSystemLookasideList();
LABEL_8:
    if ( ++ExpScanCount == 3 )
      ExpScanCount = 0;
    if ( EtwpInitialized )
    {
      if ( !--EtwpBufferAdjustmentCount )
      {
        EtwpBufferAdjustmentCount = 8;
        if ( !_InterlockedCompareExchange(&EtwpBufferAdjustmentActive, 1, 0) )
          ExQueueWorkItem(&EtwpAdjustBuffersWorkItem, DelayedWorkQueue);
      }
    }
    MiWorkingSetManager((__int64)MiSystemPartition, 0);
    if ( PspJobTimeLimitsRequest )
    {
      v5 = PspJobTimeLimitsCount;
      if ( PspJobTimeLimitsCount )
      {
        --PspJobTimeLimitsCount;
        if ( v5 == 1 )
        {
          _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
          if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 5u) & 4) == 0 )
            ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
        }
      }
    }
    if ( !--v0 )
    {
      v0 = 8;
      if ( !_InterlockedCompareExchange(&KiStackOutSwapRequest, 1, 0) )
        KeSetEvent(&KiSwapEvent, 1, 0);
    }
  }
  v3 = &ExNPagedLookasideLock;
  v4 = &ExNPagedLookasideListHead;
  goto LABEL_7;
}
