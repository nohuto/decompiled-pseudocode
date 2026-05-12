/*
 * XREFs of RaidAdapterResetBus @ 0x1C0027CB0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00094B0 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0035EF4 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0036D28 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C0037640 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C0037E64 (RaidUnitRequestTimeout.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidPauseAdapterQueue @ 0x1C000C138 (RaidPauseAdapterQueue.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0019FB4 (RaidAdapterAcquireStartIoLock.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaCallMiniportResetBus @ 0x1C0026474 (RaCallMiniportResetBus.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0029318 (RaidAdapterSetPauseTimer.c)
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
  int v23; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  ULONGLONG v28; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  ULONGLONG *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]

  if ( a2 >= *(_BYTE *)(a1 + 376) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 252), 1, 0) == 1 )
    return 3221226614LL;
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
  RaidAdapterSetPauseTimer(a1, a1 + 4216, a1 + 4280, 4LL);
  if ( (unsigned int)dword_1C004F010 > 5 )
  {
    if ( TlgKeywordOn(v18, 0x400000000000uLL) )
    {
      v24 = *(_DWORD *)(a1 + 56);
      v32 = a1 + 5192;
      v34 = &v24;
      v36 = &v22;
      v38 = (int *)&v25;
      v40 = &v28;
      v42 = &v26;
      v44 = &v27;
      v22 = a2;
      v25 = v12;
      v28 = v13;
      v26 = v10;
      v27 = v14;
      v33 = 16LL;
      v35 = 4LL;
      v37 = 1LL;
      v39 = 4LL;
      v41 = 8LL;
      v43 = 4LL;
      v45 = 4LL;
      TlgWrite(v19, &unk_1C0045EBF, v20, v21, 9u, &pData);
    }
  }
  *(_DWORD *)(a1 + 252) = 0;
  return v12;
}
