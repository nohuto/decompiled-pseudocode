/*
 * XREFs of RaidUnitAllocateResources @ 0x1C001037C
 * Callers:
 *     RaidCreateUnit @ 0x1C0010160 (RaidCreateUnit.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     StorCreateEventQueue @ 0x1C0011774 (StorCreateEventQueue.c)
 *     RaidUnitFreeResources @ 0x1C0011CBC (RaidUnitFreeResources.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     RaInitializeTagList @ 0x1C00528A8 (RaInitializeTagList.c)
 */

__int64 __fastcall RaidUnitAllocateResources(__int64 a1)
{
  __int64 v1; // r14
  int EventQueue; // ebx
  _QWORD *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // edi
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 ContiguousNodeMemory; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v16; // rax
  struct _DEVICE_OBJECT *v17; // rcx
  PIO_WORKITEM v18; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax
  SIZE_T v21; // rbx
  PVOID Pool; // rax
  int v23; // esi
  unsigned int v24; // edi
  unsigned int v25; // ebx

  v1 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1408) = -1;
  *(_DWORD *)(a1 + 648) = 1;
  KeInitializeEvent((PRKEVENT)(a1 + 160), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(a1 + 920), RaidUnitRestartQueueDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeDpc((PRKDPC)(a1 + 728), (PKDEFERRED_ROUTINE)RaidUnitPendingDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeTimer((PKTIMER)(a1 + 664));
  KeInitializeTimer((PKTIMER)(a1 + 792));
  KeInitializeDpc((PRKDPC)(a1 + 856), (PKDEFERRED_ROUTINE)RaidUnitPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
  KeSetCoalescableTimer((PKTIMER)(a1 + 664), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 728));
  EventQueue = StorCreateEventQueue(a1 + 200);
  if ( EventQueue < 0 )
    goto LABEL_20;
  v4 = (_QWORD *)(a1 + 256);
  EventQueue = RaInitializeTagList(a1 + 256, (unsigned int)(*(_DWORD *)(v1 + 512) + 1), *(_QWORD *)(a1 + 8));
  if ( EventQueue < 0 )
    goto LABEL_20;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 32));
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1504));
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(v1 + 512);
  *(_DWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 384) = v5;
  *(_QWORD *)(a1 + 392) = RaUnitStartIo;
  memset((void *)(a1 + 400), 0, 0x88uLL);
  *(_QWORD *)(a1 + 488) = a1 + 480;
  *(_QWORD *)(a1 + 480) = a1 + 480;
  *(_QWORD *)(a1 + 504) = a1 + 496;
  *(_QWORD *)(a1 + 496) = a1 + 496;
  *(_QWORD *)(a1 + 520) = a1 + 512;
  *(_QWORD *)(a1 + 512) = a1 + 512;
  KeInitializeEvent((PRKEVENT)(a1 + 448), NotificationEvent, 0);
  *(_DWORD *)(a1 + 404) = v7;
  *(_DWORD *)(a1 + 400) = 8913154;
  *(_QWORD *)(a1 + 408) = v6 + 768;
  if ( *(_DWORD *)(v1 + 440) )
  {
    v21 = *(unsigned int *)(v1 + 440);
    Pool = RaidAllocatePool(NonPagedPoolNx, v21, 0x45556152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 16) = Pool;
    if ( !Pool )
    {
      EventQueue = -1073741801;
      goto LABEL_20;
    }
    memset(Pool, 0, v21);
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v4 + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v9 )
  {
    v23 = 0;
    v24 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v25 = 0;
      if ( v24 )
        break;
LABEL_26:
      if ( ++v23 == 10 )
      {
        v10 = -1;
        goto LABEL_6;
      }
    }
    while ( 1 )
    {
      v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v4 + ((unsigned __int64)v25 << 6)));
      if ( v9 )
        break;
      if ( ++v25 >= v24 )
        goto LABEL_26;
    }
  }
  v10 = *((_DWORD *)&v9->Next + 2);
LABEL_6:
  if ( v10 != -1 )
  {
    *(_DWORD *)(a1 + 1408) = v10;
    v11 = ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1056;
    if ( *(_BYTE *)(v1 + 402) == 1 )
      v11 = ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1200;
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                             v11,
                             *(_QWORD *)(v1 + 4392),
                             *(_QWORD *)(v1 + 4400),
                             *(_QWORD *)(v1 + 4384),
                             4,
                             0x80000000);
    v14 = ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      *(_QWORD *)(a1 + 1424) = ContiguousNodeMemory + 16;
      *(_QWORD *)(a1 + 1432) = ContiguousNodeMemory + 800;
      *(_QWORD *)(a1 + 1416) = ContiguousNodeMemory + 1056;
      RaidZeroXrb(ContiguousNodeMemory + 16, v13, 0LL, 0LL);
      if ( *(_BYTE *)(v1 + 402) == 1 )
      {
        *(_DWORD *)(v14 + 760) = 144;
        *(_QWORD *)(v14 + 776) = v14 + ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1056LL;
      }
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      *(_QWORD *)(a1 + 1560) = WorkItem;
      if ( WorkItem )
      {
        v16 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        *(_QWORD *)(a1 + 1576) = v16;
        if ( v16 )
        {
          v17 = *(struct _DEVICE_OBJECT **)(a1 + 8);
          *(_QWORD *)(a1 + 1584) = 0LL;
          *(_DWORD *)(a1 + 1592) = 0;
          v18 = IoAllocateWorkItem(v17);
          *(_QWORD *)(a1 + 1600) = v18;
          if ( v18 )
          {
            CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u);
            *(_QWORD *)(a1 + 1448) = CacheAwareRundownProtection;
            if ( CacheAwareRundownProtection )
            {
              ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
              return 0LL;
            }
          }
        }
      }
    }
  }
  EventQueue = -1073741670;
LABEL_20:
  RaidUnitFreeResources(a1);
  return (unsigned int)EventQueue;
}
