/*
 * XREFs of RaAttemptHighWaterMarkIncrease @ 0x1C0039714
 * Callers:
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C00077A0 (StorSubmitIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C00186EC (StorNextIoGatewayItem.c)
 *     RaAttemptHighWaterMarkIncreasePassive @ 0x1C00399F0 (RaAttemptHighWaterMarkIncreasePassive.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     Template_zqqqqq @ 0x1C0039B9C (Template_zqqqqq.c)
 *     Template_zqqqqqqq @ 0x1C0039C84 (Template_zqqqqqqq.c)
 */

char __fastcall RaAttemptHighWaterMarkIncrease(__int64 a1)
{
  char v2; // r15
  __int64 v3; // rbx
  PIO_WORKITEM WorkItem; // rax
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 Pool; // rax
  int v9; // r8d
  struct _SLIST_ENTRY *v10; // rdi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  union _SLIST_HEADER *v14; // rcx
  ULONG TimeIncrement; // eax
  int v16; // r8d
  int v17; // ecx

  v2 = 0;
  if ( KeGetCurrentIrql() && !*(_BYTE *)(a1 + 184) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 64LL);
    if ( *(_QWORD *)(v3 + 5696)
      || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v3 + 8)), (*(_QWORD *)(v3 + 5696) = WorkItem) != 0LL) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 5712), 1, 0) )
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(v3 + 5696),
          RaAttemptHighWaterMarkIncreasePassive,
          CriticalWorkQueue,
          (PVOID)v3);
    }
    return 0;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 188), 1, 0) )
    return 0;
  if ( *(_DWORD *)(a1 + 136) < *(_DWORD *)(a1 + 144) )
  {
    if ( !*(_QWORD *)(a1 + 168) )
      goto LABEL_13;
    if ( MEMORY[0xFFFFF78000000320] >= *(_QWORD *)(a1 + 168) )
    {
      *(_QWORD *)(a1 + 168) = 0LL;
LABEL_13:
      v6 = *(_QWORD *)(a1 + 152);
      v7 = *(_QWORD *)(v6 + 64);
      if ( *(_BYTE *)(a1 + 184) )
        Pool = (__int64)RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a1 + 148), 0x53526152u, v6);
      else
        Pool = MmAllocateContiguousNodeMemory(
                 *(unsigned int *)(a1 + 148),
                 *(_QWORD *)(v7 + 4392),
                 *(_QWORD *)(v7 + 4400),
                 *(_QWORD *)(v7 + 4384),
                 4,
                 0x80000000);
      v10 = (struct _SLIST_ENTRY *)Pool;
      if ( Pool )
      {
        *(_DWORD *)(Pool + 16) = 523124044;
        *(_DWORD *)(Pool + 760) = *(_DWORD *)(a1 + 180);
        v11 = *(_DWORD *)(a1 + 180);
        if ( v11 )
          *(_QWORD *)(Pool + 776) = Pool + (unsigned int)(*(_DWORD *)(a1 + 148) - v11);
        *(_DWORD *)(a1 + 164) = 0;
        v2 = 1;
        if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
          Template_zqqqqq(
            *(_DWORD *)(a1 + 136) + 1,
            *(_DWORD *)(a1 + 136),
            v9,
            *(_QWORD *)(v7 + 48),
            *(_DWORD *)(v7 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 136),
            *(_DWORD *)(a1 + 136) + 1,
            *(_DWORD *)(a1 + 144));
        _InterlockedAdd((volatile signed __int32 *)(a1 + 136), 1u);
        v12 = *(_DWORD *)(a1 + 136);
        *(_DWORD *)(a1 + 28) = v12;
        *(_DWORD *)(a1 + 32) = v12;
        v13 = *(_DWORD *)(a1 + 128);
        if ( v13 )
          v14 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 64)
                                        + 8LL
                                        * ((unsigned int)(v13 * HIDWORD(KeGetPcr()[1].LockArray))
                                         / *(_DWORD *)(a1 + 132)));
        else
          v14 = (union _SLIST_HEADER *)(a1 + 64);
        ExpInterlockedPushEntrySList(v14, v10);
      }
      else
      {
        ++*(_DWORD *)(a1 + 160);
        ++*(_DWORD *)(a1 + 164);
        *(_QWORD *)(a1 + 168) = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v17 = *(_DWORD *)(a1 + 176) + 1;
        *(_DWORD *)(a1 + 176) = v17;
        *(_QWORD *)(a1 + 168) += 30 * (0x989680 / TimeIncrement);
        if ( (Microsoft_Windows_StorPortEnableBits & 0x20) != 0 )
          Template_zqqqqqqq(
            v17,
            0x989680 % TimeIncrement,
            v16,
            *(_QWORD *)(v7 + 48),
            *(_DWORD *)(v7 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 28),
            *(_DWORD *)(a1 + 144),
            *(_DWORD *)(a1 + 160),
            *(_DWORD *)(a1 + 164),
            v17);
      }
      goto LABEL_28;
    }
  }
  v2 = 0;
LABEL_28:
  *(_DWORD *)(a1 + 188) = 0;
  return v2;
}
