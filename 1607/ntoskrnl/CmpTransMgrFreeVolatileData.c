/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1403FD614
 * Callers:
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404E9890 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1404EC2F0 (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x14060597C (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000ADEC (CmpDiscardKcb.c)
 *     CmpRemoveSecurityCellList @ 0x1400AB604 (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpRundownUnitOfWork @ 0x1403FD8BC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1403FD9D0 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1403FDA60 (CmpRebuildKcbCache.c)
 *     CmpFreeKeyByCell @ 0x1404005C8 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140401680 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404016EC (HvFreeCell.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmpMarkKeyUnbacked @ 0x14049FE7C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 *     CmpForceInvalidateAllHigherLayerKcbs @ 0x14060BBC0 (CmpForceInvalidateAllHigherLayerKcbs.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  _QWORD *v3; // r12
  ULONG_PTR v5; // rdi
  int v6; // eax
  ULONG_PTR v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r14d
  ULONG_PTR v10; // rbx
  __int64 v11; // r15
  int v12; // eax
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rdx
  __int64 v15; // r8
  ULONG_PTR v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  char v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+A0h] [rbp+50h] BYREF
  int v21; // [rsp+A4h] [rbp+54h]
  char v22; // [rsp+A8h] [rbp+58h] BYREF

  v3 = (_QWORD *)(BugCheckParameter2 + 16);
  while ( (_QWORD *)*v3 != v3 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) )
      goto LABEL_16;
    CmpLockRegistryExclusive();
    v6 = *(_DWORD *)(v5 + 68);
    if ( !v6 )
    {
      v16 = *(unsigned int *)(v5 + 88);
      if ( (unsigned int)(v16 - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), v16);
      goto LABEL_15;
    }
    if ( v6 > 3 )
    {
      if ( v6 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), *(unsigned int *)(v5 + 92));
        goto LABEL_15;
      }
      if ( v6 != 9 )
      {
        if ( v6 == 12 )
        {
          v7 = *(unsigned int *)(v5 + 96);
          if ( (unsigned int)(v7 - 1) <= 0xFFFFFFFD )
            HvFreeCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), v7);
        }
        goto LABEL_15;
      }
      v8 = *(_QWORD *)(v5 + 48);
      v20 = -1;
      v21 = 0;
      v9 = *(_DWORD *)(v5 + 88);
      v10 = *(_QWORD *)(v8 + 24);
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v10 + 8))(v10, v9, &v20);
      if ( v11 )
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(v10, v9) )
          goto LABEL_33;
        v12 = *(_DWORD *)(v11 + 12);
        if ( v12 != 1 )
        {
          *(_DWORD *)(v11 + 12) = v12 - 1;
LABEL_33:
          (*(void (__fastcall **)(ULONG_PTR, int *))(v10 + 16))(v10, &v20);
          goto LABEL_15;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(v10 + 16))(v10, &v20);
        CmpRemoveSecurityCellList(v10, v9);
        HvFreeCell(v10, v9);
      }
    }
LABEL_15:
    CmpUnlockRegistry();
LABEL_16:
    CmpLockRegistryExclusive();
    v13 = *(_QWORD *)(v5 + 48);
    if ( *(_QWORD *)(v13 + 280) == BugCheckParameter2 )
    {
      v14 = *(unsigned int *)(v13 + 276);
      if ( (_DWORD)v14 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v13 + 24), v14);
        *(_DWORD *)(v13 + 276) = -1;
        *(_DWORD *)(v13 + 272) = 0;
      }
      *(_QWORD *)(v13 + 280) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v13 + 232), BugCheckParameter2) && !*(_DWORD *)(v5 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpForceInvalidateAllHigherLayerKcbs(v13, 4LL, &v22, &v19) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10000uLL);
        v17[0] = 0LL;
        v17[1] = 0LL;
        v18 = 4;
        if ( (unsigned int)CmpSearchForOpenSubKeys(v13, 1LL, v15, v17) )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10100uLL);
        CmpFlushNotifiesOnKeyBodyList(v13, 8LL);
        *(_WORD *)(v13 + 4) |= 0x20u;
        CmpMarkKeyUnbacked(v13);
        if ( (*(_DWORD *)(v13 + 4) & 0x20000) == 0 )
          CmpDiscardKcb(v13);
      }
      *(_QWORD *)(v13 + 232) = 0LL;
    }
    if ( *(_DWORD *)(v13 + 32) != -1 )
    {
      if ( *(_QWORD *)(v13 + 24) )
        CmpRebuildKcbCache(v13);
    }
    CmpRundownUnitOfWork(v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
    CmpUnlockRegistry();
  }
}
