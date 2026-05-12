/*
 * XREFs of RaidAdapterResetBus @ 0x1C002492C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0004898 (RaidAdapterDeviceControlIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0006610 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0033C58 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C0034460 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C0034BF4 (RaidUnitRequestTimeout.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00068A8 (RaidAdapterReleaseInterruptLock.c)
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     RaidPauseAdapterQueue @ 0x1C00140CC (RaidPauseAdapterQueue.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0014E40 (RaidAdapterSetPauseTimer.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaCallMiniportResetBus @ 0x1C00230B4 (RaCallMiniportResetBus.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0023494 (RaidAdapterAcquireStartIoLock.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  __int64 v5; // rsi
  int v6; // r14d
  unsigned int v7; // ebx
  __int64 v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  int v10; // r13d
  ULONGLONG UnbiasedInterruptTime; // rbx
  unsigned int v12; // r14d
  ULONGLONG v13; // r15
  int v14; // ebx
  bool v15; // cc
  unsigned int v16; // ebx
  PSLIST_ENTRY v17; // rax
  const struct _TlgProvider_t *v18; // rcx
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned __int8 v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  ULONGLONG *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]

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
        v8 = v7;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + *(_QWORD *)(a1 + 4752)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v6;
          }
          else
          {
            _mm_pause();
          }
          v5 += 64LL;
          --v8;
        }
        while ( v8 );
        v5 = 0LL;
      }
    }
    while ( v6 < *(_DWORD *)(a1 + 4744) );
  }
  RaidAdapterAcquireStartIoLock(a1, &LockHandle);
  v10 = *(_DWORD *)(a1 + 960);
  *(_DWORD *)(a1 + 5208) = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v12 = RaCallMiniportResetBus(a1 + 296, a2);
  v13 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
  v14 = *(_DWORD *)(a1 + 5208);
  v15 = *(_DWORD *)(a1 + 4744) <= 1;
  v23 = v14;
  if ( !v15 )
  {
    v16 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v17 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v17 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)(HIDWORD(v17[1].Next) % v16) << 6)),
          v17);
        LODWORD(v5) = v5 + 1;
      }
    }
    while ( (int)v5 < *(_DWORD *)(a1 + 4744) );
    v14 = v23;
  }
  if ( *(_DWORD *)(a1 + 688) )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)LockHandle.LockQueue.Next);
  RaidAdapterSetPauseTimer(a1, (struct _KTIMER *)(a1 + 4216), (struct _KDPC *)(a1 + 4280), 4u);
  if ( (unsigned int)dword_1C0048030 > 5 )
  {
    if ( TlgKeywordOn(v18, 0x400000000000uLL) )
    {
      v23 = *(_DWORD *)(a1 + 56);
      v31 = a1 + 5192;
      v33 = &v23;
      v35 = &v22;
      v37 = (int *)&v26;
      v39 = &v27;
      v41 = &v25;
      v43 = &v24;
      v22 = a2;
      v26 = v12;
      v27 = v13;
      v25 = v10;
      v24 = v14;
      v32 = 16LL;
      v34 = 4LL;
      v36 = 1LL;
      v38 = 4LL;
      v40 = 8LL;
      v42 = 4LL;
      v44 = 4LL;
      TlgWrite(v19, &unk_1C003FB39, v20, v21, 9u, &pData);
    }
  }
  return v12;
}
