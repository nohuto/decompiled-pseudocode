/*
 * XREFs of CmUnloadKey @ 0x14049F858
 * Callers:
 *     CmUnloadKeyEx @ 0x14049D9AC (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000ADEC (CmpDiscardKcb.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140087508 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400878C4 (CmpRemoveHiveFromNamespace.c)
 *     CmpArmLazyWriter @ 0x1400F0130 (CmpArmLazyWriter.c)
 *     ExfUnblockPushLock @ 0x1401598C0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x14015B5E0 (ZwDeleteValueKey.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B47B0 (CmpUnJoinClassOfTrust.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FDC28 (CmpCleanUpSubKeyInfo.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140404978 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDoFileSetSizeEx @ 0x14047E8FC (CmpDoFileSetSizeEx.c)
 *     CmpTraceHiveUnloadStart @ 0x14049F674 (CmpTraceHiveUnloadStart.c)
 *     CmpTraceHiveUnloadStop @ 0x14049FBD4 (CmpTraceHiveUnloadStop.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14049FC28 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x14049FCA0 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x14049FDD4 (CmpDestroySecurityCache.c)
 *     CmpMarkKeyUnbacked @ 0x14049FE7C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpUnlockHiveList @ 0x14049FFBC (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1404A0FBC (CmpLockHiveListExclusive.c)
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 *     HvMarkBaseBlockDirty @ 0x140564650 (HvMarkBaseBlockDirty.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601C64 (CmpVERemoveHiveFromSIDMappingTable.c)
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
  __int64 v17; // rdx
  int v18; // esi
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // ebp
  signed __int32 v23[18]; // [rsp+0h] [rbp-48h] BYREF

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
      v18 = CmpFlushHive(v3, 0x2Cu);
      if ( v18 == -1073741811 )
        v18 = 0;
      if ( v18 < 0 && (*(_BYTE *)(v3 + 124) & 4) != 0 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
        *(_QWORD *)(v3 + 4104) = a1;
        CmpLockHiveListExclusive();
        v19 = (_QWORD *)qword_140748178;
        v20 = (_QWORD *)(v3 + 2760);
        if ( *(__int64 **)qword_140748178 != &CmpFailedUnloadListHead )
          __fastfail(3u);
        *v20 = &CmpFailedUnloadListHead;
        *(_QWORD *)(v3 + 2768) = v19;
        *v19 = v20;
        qword_140748178 = v3 + 2760;
        CmpUnlockHiveList();
        CmpArmLazyWriter(1LL, 0LL, 0);
        *(_BYTE *)(v3 + 6049) = 1;
        if ( v6 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v23, 0);
          if ( *(_QWORD *)(v3 + 6040) )
            ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
        }
      }
      else
      {
        LOBYTE(v17) = 1;
        v21 = *(_DWORD *)(v3 + 1400) + 4096;
        HvFreeHive(v3, v17);
        if ( v18 >= 0 && (*(_DWORD *)(v3 + 144) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 2968) - v21) > 0x100000 )
          CmpDoFileSetSizeEx(v3, 0, v21, 0);
        CmpCmdHiveClose(v3);
        if ( v6 )
        {
          *(_DWORD *)(v3 + 6032) = 0;
          _InterlockedOr(v23, 0);
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
