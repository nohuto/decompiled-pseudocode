/*
 * XREFs of CmUnloadKey @ 0x140517C64
 * Callers:
 *     CmUnloadKeyEx @ 0x140515DB8 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140517B00 (CmpLateUnloadHiveWorker.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpArmLazyWriter @ 0x1400EDFB0 (CmpArmLazyWriter.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14010B700 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpRemoveHiveFromNamespace @ 0x14010BABC (CmpRemoveHiveFromNamespace.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpTraceHiveUnloadStart @ 0x140517A80 (CmpTraceHiveUnloadStart.c)
 *     CmpTraceHiveUnloadStop @ 0x140517FE0 (CmpTraceHiveUnloadStop.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140518034 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpUnlockHiveList @ 0x1405183C8 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405193C8 (CmpLockHiveListExclusive.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601D18 (CmpVERemoveHiveFromSIDMappingTable.c)
 */

__int64 __fastcall CmUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  bool v6; // r14
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  int v10; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // esi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // ebp
  signed __int32 v22[18]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v6 = (*(_BYTE *)(v3 + 5360) & 0x20) != 0;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 6;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 4120), 1LL, 0LL)
    || (*(_DWORD *)(v3 + 144) & 0x40) != 0 )
  {
    *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 7;
    if ( v6 )
      CmpDecrementAppHiveUnloadCount();
    return 3221225865LL;
  }
  else
  {
    v7 = *(_QWORD *)(v3 + 5400);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 16) == v7 + 16;
      v9 = *(_QWORD *)(v3 + 64);
      if ( v8 )
        *(_DWORD *)(v9 + 144) &= ~1u;
      else
        *(_DWORD *)(v9 + 144) |= 1u;
      HvMarkBaseBlockDirty(v3);
    }
    *(_DWORD *)(v3 + 144) |= 0x40u;
    CmpTraceHiveUnloadStart((unsigned __int16 *)(v3 + 3008), (unsigned __int16 *)(v3 + 3024));
    v10 = CmpRemoveHiveFromNamespace(v3, a1);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 8;
      if ( v6 )
      {
        *(_DWORD *)(v3 + 6032) = 1;
        CmpDecrementAppHiveUnloadCount();
      }
      CmpFlushNotifiesOnKeyBodyList(a1, 1LL);
      CmpMarkKeyUnbacked(a1);
      CmpDiscardKcb(a1);
      CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL));
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
      CmpUnJoinClassOfTrust(v3);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
      if ( (*(_DWORD *)(v3 + 144) & 0x400) != 0 )
      {
        v15 = *(_QWORD *)(v3 + 2744);
        v16 = *(_QWORD **)(v3 + 2752);
        if ( *(_QWORD *)(v15 + 8) != v3 + 2744 || *v16 != v3 + 2744 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      CmpVERemoveHiveFromSIDMappingTable(v3);
      v17 = CmpFlushHive(v3, 0x2Cu);
      if ( v17 == -1073741811 )
        v17 = 0;
      if ( v17 < 0 && (*(_BYTE *)(v3 + 124) & 4) != 0 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
        *(_QWORD *)(v3 + 4104) = a1;
        CmpLockHiveListExclusive();
        v18 = (_QWORD *)qword_140748178;
        v19 = (_QWORD *)(v3 + 2760);
        if ( *(__int64 **)qword_140748178 != &CmpFailedUnloadListHead )
          __fastfail(3u);
        *v19 = &CmpFailedUnloadListHead;
        *(_QWORD *)(v3 + 2768) = v18;
        *v18 = v19;
        qword_140748178 = v3 + 2760;
        CmpUnlockHiveList();
        CmpArmLazyWriter(1LL, 0LL, 0);
        *(_BYTE *)(v3 + 6049) = 1;
        if ( v6 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v22, 0);
          if ( *(_QWORD *)(v3 + 6040) )
            ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
        }
      }
      else
      {
        v20 = *(_DWORD *)(v3 + 1400) + 4096;
        HvFreeHive(v3, 1);
        if ( v17 >= 0 && (*(_DWORD *)(v3 + 144) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 2968) - v20) > 0x100000 )
          CmpDoFileSetSizeEx(v3, 0, v20, 0);
        CmpCmdHiveClose(v3);
        if ( v6 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v22, 0);
          if ( *(_QWORD *)(v3 + 6040) )
            ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
        }
        CmpSignalUnloadEventArrayForHive(v3);
      }
      v10 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 9;
      *(_DWORD *)(v3 + 144) &= ~0x40u;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 4120), 0LL, 1LL);
      if ( v6 )
        CmpDecrementAppHiveUnloadCount();
    }
    CmpTraceHiveUnloadStop((unsigned int)v10);
    return (unsigned int)v10;
  }
}
