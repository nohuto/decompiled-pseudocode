/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1403DE534
 * Callers:
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 *     CmRmFinalizeRecovery @ 0x1404C2C8C (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x1405E6328 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400EE0DC (CmpRemoveSecurityCellList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1403D8900 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1403DE8AC (CmpRebuildKcbCache.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  _QWORD *v5; // r12
  ULONG_PTR v7; // rdi
  int v8; // eax
  __int64 v9; // rbx
  ULONG_PTR v10; // r15
  unsigned int v11; // ebp
  ULONG_PTR v12; // rdx
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // esi
  ULONG_PTR v16; // rbx
  __int64 v17; // rbp
  int v18; // eax
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  v5 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v5 != v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL) )
      goto LABEL_10;
    CmpLockRegistryExclusive();
    v8 = *(_DWORD *)(v7 + 68);
    if ( !v8 )
    {
      v13 = *(_DWORD *)(v7 + 80);
      if ( v13 - 1 <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL), v13, 0);
      goto LABEL_9;
    }
    if ( v8 > 3 )
    {
      if ( v8 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL), *(unsigned int *)(v7 + 84));
      }
      else
      {
        if ( v8 != 9 )
        {
          if ( v8 != 12 )
            goto LABEL_9;
          v19 = *(unsigned int *)(v7 + 88);
          if ( (unsigned int)(v19 - 1) > 0xFFFFFFFD )
            goto LABEL_9;
          v20 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL);
LABEL_28:
          HvFreeCell(v20, v19);
          goto LABEL_9;
        }
        v14 = *(_QWORD *)(v7 + 48);
        v22 = -1;
        v15 = *(_DWORD *)(v7 + 80);
        v16 = *(_QWORD *)(v14 + 32);
        v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v16 + 8))(v16, v15, &v22);
        if ( v17 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(v16, v15) )
            goto LABEL_29;
          v18 = *(_DWORD *)(v17 + 12);
          if ( v18 != 1 )
          {
            *(_DWORD *)(v17 + 12) = v18 - 1;
LABEL_29:
            (*(void (__fastcall **)(ULONG_PTR, int *))(v16 + 16))(v16, &v22);
            goto LABEL_9;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v16 + 16))(v16, &v22);
          CmpRemoveSecurityCellList(v16, v15);
          v19 = v15;
          v20 = v16;
          goto LABEL_28;
        }
      }
    }
LABEL_9:
    CmpUnlockRegistry();
LABEL_10:
    CmpLockRegistry(a1, a2, a3, a4);
    v9 = *(_QWORD *)(v7 + 48);
    v10 = *(_QWORD *)(v9 + 32);
    v11 = *(_DWORD *)(v9 + 16);
    CmpLockHashEntryExclusive(v10, v11);
    CmpLockKcbExclusive(v9);
    if ( (*(_DWORD *)(v9 + 4) & 0x20000) == 0 )
    {
      if ( *(_QWORD *)(v9 + 280) == a1 )
      {
        v12 = *(unsigned int *)(v9 + 276);
        if ( (_DWORD)v12 != -1 )
        {
          HvFreeCell(*(_QWORD *)(v9 + 32), v12);
          *(_DWORD *)(v9 + 272) = 0;
          *(_DWORD *)(v9 + 276) = -1;
        }
        *(_QWORD *)(v9 + 280) = 0LL;
      }
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v9 + 232)) )
      {
        if ( v4 == 8 && (*(_DWORD *)(v9 + 4) & 0x20000) == 0 )
        {
          CmpFlushNotifiesOnKeyBodyList(v9, 0LL, 0);
          *(_WORD *)(v9 + 4) |= 0x20u;
          v21 = *(_QWORD *)(v9 + 32);
          *(_DWORD *)(v9 + 4) |= 0x20000u;
          CmpRemoveKeyHash(v21, v9 + 16);
          *(_QWORD *)(v9 + 24) = -1LL;
          *(_DWORD *)(v9 + 40) = -1;
        }
        *(_QWORD *)(v9 + 232) = 0LL;
      }
      if ( *(_DWORD *)(v9 + 40) != -1 )
      {
        if ( *(_QWORD *)(v9 + 32) )
          CmpRebuildKcbCache(v9);
      }
    }
    CmpRundownUnitOfWork(v7);
    ExFreePoolWithTag((PVOID)v7, 0x77554D43u);
    CmpUnlockKcb((PVOID)v9);
    CmpUnlockHashEntry(v10, v11);
    CmpUnlockRegistry();
  }
}
