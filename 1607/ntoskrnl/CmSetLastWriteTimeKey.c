/*
 * XREFs of CmSetLastWriteTimeKey @ 0x1405FE7F4
 * Callers:
 *     NtSetInformationKey @ 0x14050FD50 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AE94 (CmpTransEnlistUowInCmTrans.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x140087CB8 (CmpTransEnlistUowInKcb.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     CmpLogTransactionAborted @ 0x1401356B4 (CmpLogTransactionAborted.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FCB8C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1403FCC14 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403FCCF4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403FD8BC (CmpRundownUnitOfWork.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140402AD0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     CmpLockKcbExclusive @ 0x140422050 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1404DE450 (CmpAllocateUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 *     CmpRollbackTransactionArray @ 0x140605148 (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x14060BD0C (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F93C (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  char v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG_PTR v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // r15
  _QWORD *UnitOfWork; // rax
  ULONG v23; // edx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD v28[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h] BYREF
  __int64 v30; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+50h] BYREF
  int v32; // [rsp+98h] [rbp+58h] BYREF

  v28[0] = -1;
  v28[1] = 0;
  v4 = 0;
  v30 = 0LL;
  v5 = 0LL;
  v32 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    v6 = 1;
    CmpLockRegistry();
    v14 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v14);
    if ( *(_WORD *)(v14 + 58) )
    {
      CmpLogUnsupportedOperation(15LL);
      v4 = -1073741822;
      goto LABEL_40;
    }
    if ( *(_BYTE *)(v14 + 57) == 1 )
    {
      v4 = -1073741790;
      goto LABEL_40;
    }
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
        goto LABEL_37;
      v4 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v30);
      if ( v4 < 0 )
        goto LABEL_40;
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 24) + 144LL) & 2) != 0 )
      {
        v4 = -1072103423;
        goto LABEL_40;
      }
    }
    v15 = v30;
    if ( CmpIsKeyDeletedForKeyBody(a1, v30) )
    {
LABEL_37:
      v4 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_40;
    }
    if ( v15 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      v5 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v4 = -1073741670;
        goto LABEL_40;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v14);
      v4 = CmpTransEnlistUowInCmTrans((_QWORD *)v5, v15);
      if ( v4 >= 0 )
      {
        if ( CmpLockIXLockIntent((unsigned int *)(v14 + 240), v5) && CmpLockIXLockExclusive(v14 + 256, (_QWORD *)v5, 1) )
        {
          *(_DWORD *)(v5 + 68) = 8;
          *(_QWORD *)(v5 + 88) = *a2;
          v4 = CmAddLogForAction(v5, v23);
LABEL_31:
          if ( v4 >= 0 )
            goto LABEL_40;
        }
        else
        {
          v4 = -1072103423;
        }
      }
      if ( v5 )
      {
        CmpRundownUnitOfWork((_QWORD *)v5);
        ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
      }
      goto LABEL_40;
    }
    v16 = v14 + 240;
    if ( *(int *)(v14 + 240) >= 0 )
    {
      v16 = v14 + 256;
      if ( !*(_DWORD *)(v14 + 256) )
      {
        v18 = *(_QWORD *)(v14 + 24);
        v19 = *(_DWORD *)(v14 + 32);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
        if ( HvpMarkCellDirty(v18, v19, 0) )
        {
          v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v18 + 8))(v18, v19, v28);
          v21 = v20;
          if ( v20 )
          {
            CmpUpdateKeyNodeAccessBits(v18, v20, v19);
            *(_QWORD *)(v21 + 4) = *a2;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v18 + 16))(v18, v28);
            *(_QWORD *)(v14 + 160) = *a2;
          }
          else
          {
            v4 = -1073741670;
          }
        }
        else
        {
          v4 = -1073741443;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
        goto LABEL_31;
      }
    }
    v4 = CmpSnapshotTxOwnerArray(v16, &v31, &v29);
    if ( v4 < 0 )
      goto LABEL_40;
    CmpLogTransactionAborted(v14, 2u, v17, v31);
    CmpUnlockKcb((char *)v14);
    CmpUnlockRegistry();
    v4 = CmpRollbackTransactionArray(v31, v29, 0LL, &v32);
    if ( v4 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v14);
LABEL_40:
      CmpUnlockKcb((char *)v14);
      CmpUnlockRegistry();
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
      return (unsigned int)v4;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  return 3221225865LL;
}
