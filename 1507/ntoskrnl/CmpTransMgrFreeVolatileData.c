/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1404480CC
 * Callers:
 *     CmRmFinalizeRecovery @ 0x1404EC588 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14012AF2C (CmpRemoveSecurityCellList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, int a2)
{
  _QWORD *v3; // r12
  ULONG_PTR v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  ULONG_PTR v8; // r15
  unsigned int v9; // ebp
  ULONG_PTR v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // esi
  ULONG_PTR v13; // rbx
  __int64 v14; // rbp
  int v15; // eax
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v3 != v3 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL) )
      goto LABEL_10;
    CmpLockRegistryExclusive();
    v6 = *(_DWORD *)(v5 + 68);
    if ( !v6 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 80) - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL));
      goto LABEL_9;
    }
    if ( v6 > 3 )
    {
      if ( v6 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL), *(unsigned int *)(v5 + 84));
      }
      else
      {
        if ( v6 != 9 )
        {
          if ( v6 != 12 )
            goto LABEL_9;
          v16 = *(unsigned int *)(v5 + 88);
          if ( (unsigned int)(v16 - 1) > 0xFFFFFFFD )
            goto LABEL_9;
          v17 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL);
LABEL_28:
          HvFreeCell(v17, v16);
          goto LABEL_9;
        }
        v11 = *(_QWORD *)(v5 + 48);
        v19 = -1;
        v12 = *(_DWORD *)(v5 + 80);
        v13 = *(_QWORD *)(v11 + 32);
        v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v13 + 8))(v13, v12, &v19);
        if ( v14 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(v13, v12) )
            goto LABEL_29;
          v15 = *(_DWORD *)(v14 + 12);
          if ( v15 != 1 )
          {
            *(_DWORD *)(v14 + 12) = v15 - 1;
LABEL_29:
            (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v19);
            goto LABEL_9;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v19);
          CmpRemoveSecurityCellList(v13, v12);
          v16 = v12;
          v17 = v13;
          goto LABEL_28;
        }
      }
    }
LABEL_9:
    CmpUnlockRegistry();
LABEL_10:
    CmpLockRegistry();
    v7 = *(_QWORD *)(v5 + 48);
    v8 = *(_QWORD *)(v7 + 32);
    v9 = *(_DWORD *)(v7 + 16);
    CmpLockHashEntryExclusive(v8, v9);
    CmpLockKcbExclusive(v7);
    if ( (*(_DWORD *)(v7 + 4) & 0x20000) == 0 )
    {
      if ( *(_QWORD *)(v7 + 280) == a1 )
      {
        v10 = *(unsigned int *)(v7 + 276);
        if ( (_DWORD)v10 != -1 )
        {
          HvFreeCell(*(_QWORD *)(v7 + 32), v10);
          *(_DWORD *)(v7 + 272) = 0;
          *(_DWORD *)(v7 + 276) = -1;
        }
        *(_QWORD *)(v7 + 280) = 0LL;
      }
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v7 + 232), a1) )
      {
        if ( a2 == 8 && (*(_DWORD *)(v7 + 4) & 0x20000) == 0 )
        {
          CmpFlushNotifiesOnKeyBodyList(v7, 0LL, 0LL);
          *(_WORD *)(v7 + 4) |= 0x20u;
          v18 = *(_QWORD *)(v7 + 32);
          *(_DWORD *)(v7 + 4) |= 0x20000u;
          CmpRemoveKeyHash(v18, v7 + 16);
          *(_QWORD *)(v7 + 24) = -1LL;
          *(_DWORD *)(v7 + 40) = -1;
        }
        *(_QWORD *)(v7 + 232) = 0LL;
      }
      if ( *(_DWORD *)(v7 + 40) != -1 )
      {
        if ( *(_QWORD *)(v7 + 32) )
          CmpRebuildKcbCache(v7);
      }
    }
    CmpRundownUnitOfWork(v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
    CmpUnlockKcb((PVOID)v7);
    CmpUnlockHashEntry(v8, v9);
    CmpUnlockRegistry();
  }
}
