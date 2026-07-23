/*
 * XREFs of KeBalanceSetManager @ 0x14013F4AC
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ExpScanGeneralLookasideList @ 0x14008CD10 (ExpScanGeneralLookasideList.c)
 *     ExpScanSystemLookasideList @ 0x14008CE00 (ExpScanSystemLookasideList.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __noreturn KeBalanceSetManager()
{
  int v0; // ebx
  volatile CCHAR v1; // cl
  NTSTATUS v2; // eax
  KSPIN_LOCK *v3; // rdx
  __int64 *v4; // rcx
  int v5; // eax
  ULONG ActiveProcessorCount; // r8d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r8d
  int v13; // edx
  __int64 v14; // r10
  unsigned int v15; // ecx
  PVOID Object[3]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v17[112]; // [rsp+60h] [rbp-88h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 17);
  v0 = 8;
  v1 = KeNumberProcessorsGroup0[1];
  Object[0] = &KiBalanceSetManagerPeriodicEvent;
  KiStackProtectTime = (unsigned __int64)((0x8F0D180 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v1;
  Object[1] = (PVOID)(qword_140324DE8 + 104);
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
    memset(v17, 0, 0x68uLL);
    VslpEnterIumSecureMode(1, 209LL, 0LL, (__int64)v17);
    if ( IopIrpCreditsEnabled > 1 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount > 1 )
      {
        v7 = 0LL;
        v8 = 0;
        do
        {
          v9 = KiProcessorBlock[v7];
          v7 = (unsigned int)(v7 + 1);
          v8 += *(_DWORD *)(v9 + 11548);
        }
        while ( (unsigned int)v7 < ActiveProcessorCount );
        v10 = 0LL;
        v11 = v8 / (int)ActiveProcessorCount;
        v12 = ActiveProcessorCount - 1;
        v13 = 0;
        do
        {
          v14 = KiProcessorBlock[v10];
          v15 = v11 - *(_DWORD *)(v14 + 11548);
          if ( v11 != *(_DWORD *)(v14 + 11548) )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 11548), v15);
            v13 += v15;
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < v12 );
        if ( v13 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(KiProcessorBlock[v10] + 11548), -v13);
      }
    }
    if ( !ExpScanCount )
      break;
    if ( ExpScanCount == 1 )
    {
      v3 = &ExPagedLookasideLock;
      v4 = &ExPagedLookasideListHead;
LABEL_7:
      ExpScanGeneralLookasideList(v4, v3);
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
