/*
 * XREFs of CmSetKeyFlags @ 0x1405FE410
 * Callers:
 *     NtSetInformationKey @ 0x1404F2CE0 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     CmpLogTransactionAborted @ 0x140135C24 (CmpLogTransactionAborted.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  char v3; // al
  int v6; // edi
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rsi
  ULONG_PTR v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *UnitOfWork; // rax
  ULONG v22; // edx
  unsigned int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r14
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // [rsp+20h] [rbp-30h]
  unsigned int v31; // [rsp+24h] [rbp-2Ch] BYREF
  int v32; // [rsp+28h] [rbp-28h] BYREF
  unsigned int BugCheckParameter3[3]; // [rsp+2Ch] [rbp-24h] BYREF
  _DWORD v34[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35; // [rsp+40h] [rbp-10h] BYREF
  char v36; // [rsp+98h] [rbp+48h]
  char v37; // [rsp+A8h] [rbp+58h]

  v34[0] = -1;
  v3 = 0;
  v34[1] = 0;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  v32 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( a2 == 1 )
  {
    if ( (a3 & 0xFFFFFFF0) != 0 )
      return 3221225485LL;
  }
  else if ( a2 == 2 )
  {
    v37 = 1;
    v36 = 0;
    goto LABEL_9;
  }
  v37 = 0;
  if ( a2 == 3 )
  {
    v36 = 1;
  }
  else
  {
    v36 = 0;
    v30 = 1;
    if ( a2 == 4 )
      goto LABEL_10;
  }
LABEL_9:
  v30 = 0;
  while ( 1 )
  {
LABEL_10:
    if ( v3 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    v16 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v17 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v17);
    if ( *(_WORD *)(v17 + 58) )
    {
      CmpLogUnsupportedOperation(16LL);
      v6 = -1073741822;
      goto LABEL_66;
    }
    if ( *(_BYTE *)(v17 + 57) == 1 )
    {
      v6 = -1073741790;
      goto LABEL_66;
    }
    v18 = *(_QWORD *)(v17 + 24);
    BugCheckParameter3[0] = *(_DWORD *)(v17 + 32);
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmpIsKeyDeletedForKeyBody(a1, *(__int64 *)&BugCheckParameter3[1]) )
        goto LABEL_63;
      v6 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &BugCheckParameter3[1]);
      if ( v6 < 0 )
        goto LABEL_66;
      if ( (*(_DWORD *)(*(_QWORD *)(v17 + 24) + 144LL) & 2) != 0 )
      {
        v6 = -1072103423;
        goto LABEL_66;
      }
    }
    if ( CmpIsKeyDeletedForKeyBody(a1, *(__int64 *)&BugCheckParameter3[1]) )
    {
LABEL_63:
      v6 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_66;
    }
    if ( *(_QWORD *)&BugCheckParameter3[1] && !v37 && !v36 && !v30 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      v7 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v6 = -1073741670;
LABEL_66:
        CmpUnlockKcb((char *)v17);
        CmpUnlockRegistry();
        ExReleaseRundownProtection(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
        return (unsigned int)v6;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v17);
      v6 = CmpTransEnlistUowInCmTrans((_QWORD *)v7, *(__int64 *)&BugCheckParameter3[1]);
      if ( v6 >= 0 )
      {
        if ( CmpLockIXLockIntent((unsigned int *)(v17 + 240), v7) && CmpLockIXLockExclusive(v17 + 256, (_QWORD *)v7, 1) )
        {
          *(_DWORD *)(v7 + 68) = 7;
          *(_DWORD *)(v7 + 88) = a3;
          v6 = CmAddLogForAction(v7, v22);
LABEL_59:
          if ( v6 >= 0 )
            goto LABEL_66;
        }
        else
        {
          v6 = -1072103423;
        }
      }
      if ( v7 )
      {
        CmpRundownUnitOfWork((_QWORD *)v7);
        ExFreePoolWithTag((PVOID)v7, 0x77554D43u);
      }
      goto LABEL_66;
    }
    v19 = v17 + 240;
    if ( *(int *)(v17 + 240) >= 0 )
    {
      v19 = v17 + 256;
      if ( !*(_DWORD *)(v17 + 256) )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
        v23 = BugCheckParameter3[0];
        if ( !HvpMarkCellDirty(v18, BugCheckParameter3[0], 0) )
        {
          v6 = -1073741443;
LABEL_58:
          ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
          goto LABEL_59;
        }
        v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v18 + 8))(v18, v23, v34);
        v25 = v24;
        if ( !v24 )
        {
          v6 = -1073741670;
          goto LABEL_58;
        }
        CmpUpdateKeyNodeAccessBits(v18, v24, BugCheckParameter3[0]);
        if ( v37 )
        {
          *(_DWORD *)(v25 + 52) ^= (*(_DWORD *)(v25 + 52) ^ (a3 << 20)) & 0xF00000;
          *(_DWORD *)(v17 + 176) ^= (*(_DWORD *)(v17 + 176) ^ *(unsigned __int16 *)(v25 + 54)) & 0xF0;
          if ( (a3 & 2) != 0 )
          {
            *(_WORD *)(v25 + 2) &= ~0x80u;
            *(_WORD *)(v17 + 178) &= ~0x80u;
          }
        }
        else if ( v30 )
        {
          *(_BYTE *)(v25 + 55) = a3;
          *(_BYTE *)(v17 + 177) = a3;
        }
        else if ( v36 )
        {
          if ( (a3 & 4) != 0 )
          {
            v26 = 128;
          }
          else
          {
            if ( (a3 & 1) != 0 )
            {
              *(_WORD *)(v25 + 2) |= 0x300u;
              *(_WORD *)(v17 + 178) |= 0x300u;
            }
            else
            {
              *(_WORD *)(v25 + 2) &= ~0x100u;
              *(_WORD *)(v17 + 178) &= ~0x100u;
            }
            if ( (a3 & 2) == 0 )
              goto LABEL_57;
            v26 = 512;
          }
          *(_WORD *)(v25 + 2) |= v26;
          *(_WORD *)(v17 + 178) |= v26;
        }
        else
        {
          *(_DWORD *)(v25 + 52) ^= (*(_DWORD *)(v25 + 52) ^ (a3 << 16)) & 0xF0000;
          *(_DWORD *)(v17 + 176) ^= (*(_DWORD *)(v17 + 176) ^ HIWORD(*(_DWORD *)(v25 + 52))) & 0xF;
        }
LABEL_57:
        *(_QWORD *)(v25 + 4) = v16;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v18 + 16))(v18, v34);
        *(_QWORD *)(v17 + 160) = v16;
        goto LABEL_58;
      }
    }
    v6 = CmpSnapshotTxOwnerArray(v19, &v31, &v35);
    if ( v6 < 0 )
      goto LABEL_66;
    CmpLogTransactionAborted(v17, 3u, v20, v31);
    CmpUnlockKcb((char *)v17);
    CmpUnlockRegistry();
    v6 = CmpRollbackTransactionArray(v31, v35, 0LL, &v32);
    if ( v6 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v17);
      goto LABEL_66;
    }
    v3 = 1;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return 3221225865LL;
}
