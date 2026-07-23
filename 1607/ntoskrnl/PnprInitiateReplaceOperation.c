/*
 * XREFs of PnprInitiateReplaceOperation @ 0x1403DBA90
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnprCompleteWake @ 0x1401CFEB8 (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x1401D0400 (PnprQuiesce.c)
 *     PnprSwap @ 0x1401D0740 (PnprSwap.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403D6AF0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 *     CmpMarkLockTryAcquired @ 0x140528708 (CmpMarkLockTryAcquired.c)
 *     PnprReplaceStart @ 0x14064552C (PnprReplaceStart.c)
 */

__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  SIZE_T v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  unsigned __int8 CurrentIrql; // bp
  void *v14; // r8
  SIZE_T v15; // rcx
  int v16; // eax
  int v17; // eax
  SIZE_T v18; // rcx
  int v19; // eax
  int v20; // eax
  PVOID *v21; // rcx
  unsigned int v22; // eax
  _QWORD v24[6]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 10520), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 10544), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 10568), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 10592), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x51706E50u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = PnprContext;
      v5 = -1073741670;
      v6 = *(_DWORD *)(PnprContext + 10744);
      if ( !v6 )
        v6 = 1667;
      v7 = *(_DWORD *)(PnprContext + 10748);
      *(_DWORD *)(PnprContext + 10744) = v6;
      if ( !v7 )
        v7 = 10;
LABEL_7:
      *(_DWORD *)(v4 + 10748) = v7;
      goto LABEL_39;
    }
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  }
  v8 = PnprReplaceStart();
  v4 = PnprContext;
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = *(_DWORD *)(PnprContext + 10744);
    if ( !v9 )
      v9 = 1682;
    *(_DWORD *)(PnprContext + 10744) = v9;
    v10 = *(_DWORD *)(v4 + 10748);
    if ( !v10 )
      v10 = 1;
    *(_DWORD *)(v4 + 10748) = v10;
    goto LABEL_39;
  }
  v1 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
    {
      memset(v24, 0, 0x28uLL);
      v24[3] = 0LL;
      v24[0] = PnprStartMirroring;
      LODWORD(v24[4]) = 8;
      v24[1] = PnprEndMirroring;
      v24[2] = PnprMirrorPhysicalMemory;
      v11 = MmDuplicateMemory((__int64)v24);
      v4 = PnprContext;
      v5 = v11;
      if ( v11 == 1073742484 )
        v5 = 0;
      goto LABEL_39;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 10712))(*(_QWORD *)(PnprContext + 10640));
    if ( v5 < 0 )
    {
      v4 = PnprContext;
      v12 = *(_DWORD *)(PnprContext + 10744);
      if ( !v12 )
        v12 = 1750;
      *(_DWORD *)(PnprContext + 10744) = v12;
      v7 = *(_DWORD *)(v4 + 10748);
      if ( !v7 )
        v7 = 8;
      goto LABEL_7;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v5 = PnprQuiesce();
  if ( v5 < 0 )
  {
    v18 = PnprContext;
    v19 = *(_DWORD *)(PnprContext + 10744);
    if ( !v19 )
      v19 = 1783;
    *(_DWORD *)(PnprContext + 10744) = v19;
    v20 = *(_DWORD *)(v18 + 10748);
    if ( !v20 )
      v20 = 1;
    *(_DWORD *)(v18 + 10748) = v20;
  }
  else
  {
    v0 = 1;
    v5 = PnprSwap();
    if ( v5 < 0 )
    {
      off_1402F2398((PVOID)3, *(_QWORD *)(PnprContext + 10632), v14);
      v15 = PnprContext;
      v16 = *(_DWORD *)(PnprContext + 10744);
      if ( !v16 )
        v16 = 1773;
      *(_DWORD *)(PnprContext + 10744) = v16;
      v17 = *(_DWORD *)(v15 + 10748);
      if ( !v17 )
        v17 = 1;
      *(_DWORD *)(v15 + 10748) = v17;
    }
    PnprWakeProcessors();
  }
  __writecr8(CurrentIrql);
  v4 = PnprContext;
LABEL_39:
  if ( (*(_DWORD *)(v4 + 64) & 0x20) != 0 )
  {
    if ( !v0 )
      goto LABEL_45;
    PnprCompleteWake();
  }
  else
  {
    if ( !v2 )
      goto LABEL_45;
    KeSetEvent((PRKEVENT)(v4 + 10568), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 10592), Executive, 0, 0, 0LL);
  }
  v4 = PnprContext;
LABEL_45:
  v21 = *(PVOID **)(v4 + 10632);
  if ( v21 )
  {
    off_1402F23A0(v21);
    v4 = PnprContext;
  }
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL) )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD))(v4 + 10680))(*(_QWORD *)(v4 + 10640));
      if ( v5 >= 0 )
        return v22;
    }
  }
  return (unsigned int)v5;
}
