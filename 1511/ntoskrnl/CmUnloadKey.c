/*
 * XREFs of CmUnloadKey @ 0x140498EAC
 * Callers:
 *     CmUnloadKeyEx @ 0x140498BA0 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     CmpArmLazyWriter @ 0x140038EB0 (CmpArmLazyWriter.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1400D2A60 (CmpDecrementAppHiveUnloadCount.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1403DB2CC (CmpReferenceKeyControlBlockUnsafe.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpTraceHiveUnloadStop @ 0x14049913C (CmpTraceHiveUnloadStop.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140499190 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     CmpDestroyHive @ 0x140499400 (CmpDestroyHive.c)
 *     CmpTraceHiveUnloadStart @ 0x1404995F0 (CmpTraceHiveUnloadStart.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 *     CmpRemoveHiveFromMapping @ 0x1405E28F4 (CmpRemoveHiveFromMapping.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, int a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  unsigned int v5; // esi
  bool v8; // r15
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // r14
  int v15; // ebp
  __int64 v16; // r8
  unsigned int v17; // esi
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  signed __int8 v24; // cf
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  signed __int64 v28; // rcx
  ULONG_PTR v29; // rtt
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 **v32; // rcx
  signed __int64 v33; // rcx
  ULONG_PTR v34; // rtt
  signed __int32 v35[18]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  v8 = (*(_BYTE *)(v3 + 5360) & 0x20) != 0;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 6;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 4120), 1LL, 0LL)
    || (*(_DWORD *)(v3 + 144) & 0x40) != 0 )
  {
    *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 7;
    if ( v8 )
      CmpDecrementAppHiveUnloadCount();
    return 3221225865LL;
  }
  else
  {
    v9 = *(_QWORD *)(v3 + 5400);
    if ( v9 )
    {
      v21 = *(_QWORD *)(v9 + 16) == v9 + 16;
      v22 = *(_QWORD *)(v3 + 64);
      if ( v21 )
        *(_DWORD *)(v22 + 144) &= ~1u;
      else
        *(_DWORD *)(v22 + 144) |= 1u;
      HvMarkBaseBlockDirty(v3);
    }
    *(_DWORD *)(v3 + 144) |= 0x40u;
    CmpTraceHiveUnloadStart(v3 + 3008, v3 + 3024);
    v10 = CmpDestroyHive(v3, v5);
    if ( v10 < 0 )
    {
      *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 9;
      *(_DWORD *)(v3 + 144) &= ~0x40u;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 4120), 0LL, 1LL);
      if ( v8 )
        CmpDecrementAppHiveUnloadCount();
    }
    else
    {
      *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 8;
      if ( v8 )
      {
        *(_DWORD *)(v3 + 6032) = 1;
        CmpDecrementAppHiveUnloadCount();
      }
      CmpFlushNotifiesOnKeyBodyList(a1, a2 == 1, 0);
      v11 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 4) |= 0x20000u;
      CmpRemoveKeyHash(v11, a1 + 16);
      v12 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 24) = -1LL;
      CmpCleanUpSubKeyInfo(v12);
      CmpUnlockRegistry();
      *a3 &= ~2u;
      if ( (*a3 & 4) != 0 )
      {
        UNLOCK_HIVE_LOAD();
        *a3 &= ~4u;
      }
      ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 3024));
      CmpDestroySecurityCache(v3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = v3 + 5368;
      if ( *(_QWORD *)v14 != v14 )
      {
        v23 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
        v24 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v25 = v23;
        if ( v24 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v23, (ULONG_PTR)&CmpHiveListHeadLock);
        if ( v25 )
          *(_BYTE *)(v25 + 26) |= 1u;
        v26 = *(_QWORD *)v14;
        v27 = *(_QWORD **)(v3 + 5376);
        if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v27 != v14 )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        _m_prefetchw(&CmpHiveListHeadLock);
        v28 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v28 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v29 = CmpHiveListHeadLock,
              v29 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v28,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( (*(_DWORD *)(v3 + 144) & 0x400) != 0 )
      {
        v19 = *(_QWORD *)(v3 + 2744);
        v20 = *(_QWORD **)(v3 + 2752);
        if ( *(_QWORD *)(v19 + 8) != v3 + 2744 || *v20 != v3 + 2744 )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
      }
      if ( (*(_DWORD *)(v3 + 5360) & 2) != 0 )
        CmpRemoveHiveFromMapping(v3);
      v15 = CmpFlushHive(v3, 0x2Cu);
      if ( v15 == -1073741811 )
        v15 = 0;
      if ( v15 < 0 && (*(_BYTE *)(v3 + 124) & 4) != 0 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
        *(_QWORD *)(v3 + 4104) = a1;
        v30 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
        v24 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v31 = v30;
        if ( v24 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v30, (ULONG_PTR)&CmpHiveListHeadLock);
        if ( v31 )
          *(_BYTE *)(v31 + 26) |= 1u;
        v32 = (__int64 **)qword_1406FC008;
        *(_QWORD *)(v3 + 2768) = qword_1406FC008;
        *(_QWORD *)(v3 + 2760) = &CmpFailedUnloadListHead;
        if ( *v32 != &CmpFailedUnloadListHead )
          __fastfail(3u);
        *v32 = (__int64 *)(v3 + 2760);
        qword_1406FC008 = v3 + 2760;
        _m_prefetchw(&CmpHiveListHeadLock);
        v33 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v33 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v34 = CmpHiveListHeadLock,
              v34 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v33,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
        CmpArmLazyWriter(1, 0LL, 0);
        *(_BYTE *)(v3 + 6049) = 1;
        if ( v8 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v35, 0);
          if ( *(_QWORD *)(v3 + 6040) )
            ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
        }
      }
      else
      {
        v17 = *(_DWORD *)(v3 + 1400) + 4096;
        HvFreeHive(v3, 1, v16);
        if ( v15 >= 0 && (*(_DWORD *)(v3 + 144) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 2968) - v17) > 0x100000 )
          CmpDoFileSetSizeEx(v3, 0LL, v17, 0LL);
        CmpCmdHiveClose(v3);
        if ( v8 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v35, 0);
          if ( *(_QWORD *)(v3 + 6040) )
            ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
        }
        CmpSignalUnloadEventArrayForHive(v3);
      }
      v10 = 0;
    }
    CmpTraceHiveUnloadStop((unsigned int)v10);
    return (unsigned int)v10;
  }
}
