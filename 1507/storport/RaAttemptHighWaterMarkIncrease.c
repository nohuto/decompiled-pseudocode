/*
 * XREFs of RaAttemptHighWaterMarkIncrease @ 0x1C00348E0
 * Callers:
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C000319C (StorSubmitIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C0010CD4 (StorNextIoGatewayItem.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     Template_zqqqqq @ 0x1C0034C94 (Template_zqqqqq.c)
 *     Template_zqqqqqqq @ 0x1C0034D7C (Template_zqqqqqqq.c)
 */

char __fastcall RaAttemptHighWaterMarkIncrease(__int64 a1)
{
  char v1; // r14
  __int64 v4; // r9
  __int64 v5; // rbp
  struct _SLIST_ENTRY *Pool; // rax
  int v7; // r8d
  struct _SLIST_ENTRY *v8; // rdi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  union _SLIST_HEADER *v12; // rcx
  ULONG TimeIncrement; // eax
  int v14; // r8d
  int v15; // ecx

  v1 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 188), 1, 0) )
    return 0;
  if ( *(_DWORD *)(a1 + 136) < *(_DWORD *)(a1 + 144) )
  {
    if ( !*(_QWORD *)(a1 + 168) )
      goto LABEL_7;
    if ( MEMORY[0xFFFFF78000000320] >= *(_QWORD *)(a1 + 168) )
    {
      *(_QWORD *)(a1 + 168) = 0LL;
LABEL_7:
      v4 = *(_QWORD *)(a1 + 152);
      v5 = *(_QWORD *)(v4 + 64);
      if ( *(_BYTE *)(a1 + 184) )
        Pool = (struct _SLIST_ENTRY *)RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a1 + 148), 0x53526152u, v4);
      else
        Pool = (struct _SLIST_ENTRY *)MmAllocateContiguousNodeMemory(
                                        *(unsigned int *)(a1 + 148),
                                        *(_QWORD *)(v5 + 4392),
                                        *(_QWORD *)(v5 + 4400),
                                        *(_QWORD *)(v5 + 4384),
                                        4,
                                        0x80000000);
      v8 = Pool;
      if ( Pool )
      {
        LODWORD(Pool[1].Next) = 523124044;
        *((_DWORD *)&Pool[46].Next + 2) = *(_DWORD *)(a1 + 180);
        v9 = *(_DWORD *)(a1 + 180);
        if ( v9 )
          *((_QWORD *)&Pool[47].Next + 1) = (char *)Pool + (unsigned int)(*(_DWORD *)(a1 + 148) - v9);
        *(_DWORD *)(a1 + 164) = 0;
        v1 = 1;
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
          Template_zqqqqq(
            *(_DWORD *)(a1 + 136) + 1,
            *(_DWORD *)(a1 + 136),
            v7,
            *(_QWORD *)(v5 + 48),
            *(_DWORD *)(v5 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 136),
            *(_DWORD *)(a1 + 136) + 1,
            *(_DWORD *)(a1 + 144));
        _InterlockedAdd((volatile signed __int32 *)(a1 + 136), 1u);
        v10 = *(_DWORD *)(a1 + 136);
        *(_DWORD *)(a1 + 28) = v10;
        *(_DWORD *)(a1 + 32) = v10;
        v11 = *(_DWORD *)(a1 + 128);
        if ( v11 )
          v12 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 64)
                                        + 8LL
                                        * ((unsigned int)(v11 * HIDWORD(KeGetPcr()[1].LockArray))
                                         / *(_DWORD *)(a1 + 132)));
        else
          v12 = (union _SLIST_HEADER *)(a1 + 64);
        ExpInterlockedPushEntrySList(v12, v8);
      }
      else
      {
        ++*(_DWORD *)(a1 + 160);
        ++*(_DWORD *)(a1 + 164);
        *(_QWORD *)(a1 + 168) = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v15 = *(_DWORD *)(a1 + 176) + 1;
        *(_DWORD *)(a1 + 176) = v15;
        *(_QWORD *)(a1 + 168) += 30 * (0x989680 / TimeIncrement);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20) != 0 )
          Template_zqqqqqqq(
            v15,
            0x989680 % TimeIncrement,
            v14,
            *(_QWORD *)(v5 + 48),
            *(_DWORD *)(v5 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 28),
            *(_DWORD *)(a1 + 144),
            *(_DWORD *)(a1 + 160),
            *(_DWORD *)(a1 + 164),
            v15);
      }
      goto LABEL_22;
    }
  }
  v1 = 0;
LABEL_22:
  *(_DWORD *)(a1 + 188) = 0;
  return v1;
}
