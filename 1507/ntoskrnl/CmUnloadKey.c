/*
 * XREFs of CmUnloadKey @ 0x1404EE348
 * Callers:
 *     CmUnloadKeyEx @ 0x1404ED844 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpArmLazyWriter @ 0x140062190 (CmpArmLazyWriter.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14044C1E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpTraceHiveUnloadStop @ 0x1404EE61C (CmpTraceHiveUnloadStop.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404EE670 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     CmpDestroyHive @ 0x1404EE8E0 (CmpDestroyHive.c)
 *     CmpTraceHiveUnloadStart @ 0x1404EEAD0 (CmpTraceHiveUnloadStart.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 *     CmpRemoveHiveFromMapping @ 0x140658DD0 (CmpRemoveHiveFromMapping.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, int a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  unsigned int v5; // esi
  bool v7; // r12
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v17; // rsi
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  int v20; // ebp
  __int64 v21; // r8
  unsigned int v22; // esi
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  signed __int8 v31; // cf
  __int64 v32; // rbp
  __int64 v33; // rcx
  _QWORD *v34; // rax
  signed __int64 v35; // rcx
  ULONG_PTR v36; // rtt
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 **v41; // rcx
  signed __int64 v42; // rcx
  ULONG_PTR v43; // rtt
  signed __int32 v44[18]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  v7 = (*(_BYTE *)(v3 + 5360) & 0x20) != 0;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 6;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 4120), 1LL, 0LL)
    || (*(_DWORD *)(v3 + 144) & 0x40) != 0 )
  {
    *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 7;
    if ( v7 && !--CmpActiveAppHiveUnloadCount )
    {
      _InterlockedOr(v44, 0);
      if ( CmpActiveAppHiveUnloadEvent )
        ExfUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL);
    }
    return 3221225865LL;
  }
  else
  {
    v8 = *(_QWORD *)(v3 + 5400);
    if ( v8 )
    {
      v26 = *(_QWORD *)(v8 + 16) == v8 + 16;
      v27 = *(_QWORD *)(v3 + 64);
      if ( v26 )
        *(_DWORD *)(v27 + 144) &= ~1u;
      else
        *(_DWORD *)(v27 + 144) |= 1u;
      HvMarkBaseBlockDirty(v3);
    }
    *(_DWORD *)(v3 + 144) |= 0x40u;
    CmpTraceHiveUnloadStart(v3 + 3008, v3 + 3024);
    v9 = CmpDestroyHive(v3, v5);
    if ( v9 < 0 )
    {
      *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 9;
      *(_DWORD *)(v3 + 144) &= ~0x40u;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 4120), 0LL, 1LL);
      if ( v7 && !--CmpActiveAppHiveUnloadCount )
      {
        _InterlockedOr(v44, 0);
        if ( CmpActiveAppHiveUnloadEvent )
          ExfUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL);
      }
    }
    else
    {
      *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 8;
      if ( v7 )
      {
        *(_DWORD *)(v3 + 6032) = 1;
        if ( !--CmpActiveAppHiveUnloadCount )
        {
          _InterlockedOr(v44, 0);
          if ( CmpActiveAppHiveUnloadEvent )
            ExfUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL);
        }
      }
      CmpFlushNotifiesOnKeyBodyList(a1, a2 == 1, 0);
      v10 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 4) |= 0x20000u;
      CmpRemoveKeyHash(v10, a1 + 16);
      v11 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 24) = -1LL;
      CmpCleanUpSubKeyInfo(v11);
      CmpUnlockRegistry();
      *a3 &= ~2u;
      if ( (*a3 & 4) != 0 )
      {
        UNLOCK_HIVE_LOAD(v13, v12);
        *a3 &= ~4u;
      }
      ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 3024));
      v14 = *(void **)(v3 + 3032);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      CmpDestroySecurityCache(v3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = v3 + 5368;
      if ( *(_QWORD *)v17 != v17 )
      {
        v28 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v15);
        v31 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v32 = v28;
        if ( v31 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v28, (ULONG_PTR)&CmpHiveListHeadLock, v30);
        if ( v32 )
          *(_BYTE *)(v32 + 26) |= 1u;
        v33 = *(_QWORD *)v17;
        v34 = *(_QWORD **)(v3 + 5376);
        if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || *v34 != v17 )
          __fastfail(3u);
        *v34 = v33;
        *(_QWORD *)(v33 + 8) = v34;
        _m_prefetchw(&CmpHiveListHeadLock);
        v35 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v35 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v36 = CmpHiveListHeadLock,
              v36 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v35,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, v29);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
      }
      v18 = KeGetCurrentThread();
      v19 = v18->KernelApcDisable + 1;
      v18->KernelApcDisable = v19;
      if ( !v19
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
        && !v18->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (*(_DWORD *)(v3 + 144) & 0x400) != 0 )
      {
        v24 = *(_QWORD *)(v3 + 2744);
        v25 = *(_QWORD **)(v3 + 2752);
        if ( *(_QWORD *)(v24 + 8) != v3 + 2744 || *v25 != v3 + 2744 )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
      }
      if ( (*(_DWORD *)(v3 + 5360) & 2) != 0 )
        CmpRemoveHiveFromMapping(v3);
      v20 = CmpFlushHive(v3, 0x2Cu);
      if ( v20 == -1073741811 )
        v20 = 0;
      if ( v20 < 0 && (*(_BYTE *)(v3 + 124) & 4) != 0 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
        *(_QWORD *)(v3 + 4104) = a1;
        v38 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v37);
        v31 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v40 = v38;
        if ( v31 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v38, (ULONG_PTR)&CmpHiveListHeadLock, v39);
        if ( v40 )
          *(_BYTE *)(v40 + 26) |= 1u;
        v41 = (__int64 **)qword_14077F020;
        *(_QWORD *)(v3 + 2768) = qword_14077F020;
        *(_QWORD *)(v3 + 2760) = &CmpFailedUnloadListHead;
        if ( *v41 != &CmpFailedUnloadListHead )
          __fastfail(3u);
        *v41 = (__int64 *)(v3 + 2760);
        qword_14077F020 = v3 + 2760;
        _m_prefetchw(&CmpHiveListHeadLock);
        v42 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v42 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v43 = CmpHiveListHeadLock,
              v43 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v42,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, (__int64)&CmpFailedUnloadListHead);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
        CmpArmLazyWriter(1, 0LL, 0);
        *(_BYTE *)(v3 + 6049) = 1;
        if ( v7 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v44, 0);
          if ( *(_QWORD *)(v3 + 6040) )
            ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
        }
      }
      else
      {
        v22 = *(_DWORD *)(v3 + 1400) + 4096;
        HvFreeHive(v3, 1, v21);
        if ( v20 >= 0 && (*(_DWORD *)(v3 + 144) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 2968) - v22) > 0x100000 )
          CmpDoFileSetSizeEx(v3, 0, v22, 0);
        CmpCmdHiveClose(v3);
        if ( v7 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v44, 0);
          if ( *(_QWORD *)(v3 + 6040) )
            ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
        }
        CmpSignalUnloadEventArrayForHive(v3);
      }
      v9 = 0;
    }
    CmpTraceHiveUnloadStop((unsigned int)v9);
    return (unsigned int)v9;
  }
}
