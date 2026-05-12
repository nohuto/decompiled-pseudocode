/*
 * XREFs of RaidAdapterResetBus @ 0x1C00223E8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00039F4 (RaidAdapterDeviceControlIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00059D0 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C00323F8 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C0032BD0 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C0033284 (RaidUnitRequestTimeout.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     RaidPauseAdapterQueue @ 0x1C0011978 (RaidPauseAdapterQueue.c)
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0012D20 (RaidAdapterSetPauseTimer.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C00210D8 (RaidAdapterAcquireStartIoLock.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  __int64 v5; // r15
  int v6; // r14d
  unsigned int v7; // ebx
  __int64 v8; // rsi
  struct _SLIST_ENTRY *v9; // rax
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // r13
  unsigned int v13; // esi
  unsigned int v14; // r14d
  PSLIST_ENTRY v15; // rax
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // r13
  unsigned __int8 v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  unsigned int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  if ( a2 >= *(_BYTE *)(a1 + 376) )
    return 3221225485LL;
  RaidPauseAdapterQueue(a1);
  v5 = 0LL;
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v6 = 0;
    v7 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v7 )
      {
        v8 = v5;
        v5 = v7;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v8 + *(_QWORD *)(a1 + 4752)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v6;
          }
          else
          {
            _mm_pause();
          }
          v8 += 64LL;
          --v5;
        }
        while ( v5 );
      }
    }
    while ( v6 < *(_DWORD *)(a1 + 4744) );
  }
  RaidAdapterAcquireStartIoLock(a1, &LockHandle);
  v10 = MEMORY[0xFFFFF78000000014];
  v23 = 0LL;
  if ( (qword_1C0044010 & 0x400) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 296),
      11,
      *(_QWORD *)(a1 + 296),
      *(unsigned int *)(*(_QWORD *)(a1 + 296) + 56LL),
      a2,
      v5,
      v23);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 528) + 40LL))(*(_QWORD *)(a1 + 536) + 16LL, a2);
  v12 = MEMORY[0xFFFFF78000000014];
  v13 = v11 == 0 ? 0xC0000001 : 0;
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v14 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v15 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v15 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)(HIDWORD(v15[1].Next) % v14) << 6)),
          v15);
        LODWORD(v5) = v5 + 1;
      }
    }
    while ( (int)v5 < *(_DWORD *)(a1 + 4744) );
    LODWORD(v5) = 0;
  }
  if ( *(_DWORD *)(a1 + 688) == (_DWORD)v5 )
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)LockHandle.LockQueue.Next);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidAdapterSetPauseTimer(a1, (struct _KTIMER *)(a1 + 4216), (struct _KDPC *)(a1 + 4280), 4u);
  v19 = v12 - v10;
  if ( (unsigned int)dword_1C0044050 > 5 )
  {
    v21 = *(_DWORD *)(a1 + 56);
    v28 = a1 + 5412;
    v30 = &v21;
    v32 = (char *)&v20;
    v34 = &v22;
    v36 = &v24;
    v20 = a2;
    v22 = v13;
    v24 = v19;
    v29 = 16LL;
    v31 = 4LL;
    v33 = 1LL;
    v35 = 4LL;
    v37 = 8LL;
    TlgWrite(v16, &unk_1C003CAC9, v17, v18, 7u, &pData);
  }
  return v13;
}
