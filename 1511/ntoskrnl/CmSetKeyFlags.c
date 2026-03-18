/*
 * XREFs of CmSetKeyFlags @ 0x1405E0250
 * Callers:
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  int v3; // edi
  __int64 v4; // r15
  char i; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  ULONG_PTR v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *UnitOfWork; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  struct _KTHREAD *v18; // rax
  char *v19; // rax
  __int64 *v20; // rcx
  ULONG v21; // edx
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // r14
  __int16 v25; // ax
  char v26; // [rsp+40h] [rbp-30h]
  unsigned int v27; // [rsp+44h] [rbp-2Ch] BYREF
  int v28; // [rsp+48h] [rbp-28h] BYREF
  unsigned int BugCheckParameter3; // [rsp+4Ch] [rbp-24h]
  int BugCheckParameter3_4; // [rsp+50h] [rbp-20h] BYREF
  char *v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  char v33; // [rsp+B8h] [rbp+48h]
  char v34; // [rsp+C8h] [rbp+58h]

  BugCheckParameter3_4 = -1;
  v3 = 0;
  v31 = 0LL;
  v4 = 0LL;
  v28 = 0;
  if ( a2 == 1 )
  {
    if ( (a3 & 0xFFFFFFF0) != 0 )
      return 3221225485LL;
  }
  else if ( a2 == 2 )
  {
    v34 = 1;
    v33 = 0;
    goto LABEL_9;
  }
  v34 = 0;
  if ( a2 == 3 )
  {
    v33 = 1;
  }
  else
  {
    v33 = 0;
    v26 = 1;
    if ( a2 == 4 )
      goto LABEL_10;
  }
LABEL_9:
  v26 = 0;
LABEL_10:
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    v10 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v11 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v11);
    v12 = *(_QWORD *)(v11 + 32);
    BugCheckParameter3 = *(_DWORD *)(v11 + 40);
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmRmIsKCBDeleted(v11, (__int64)v31) )
        goto LABEL_65;
      v3 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v31);
      if ( v3 < 0 )
        goto LABEL_66;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 32) + 144LL) & 2) != 0 )
      {
        v3 = -1072103423;
        goto LABEL_66;
      }
    }
    if ( CmRmIsKCBDeleted(v11, (__int64)v31) )
    {
LABEL_65:
      v3 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_66;
    }
    if ( v31 && !v34 && !v33 && !v26 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      v4 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v3 = -1073741670;
LABEL_66:
        CmpUnlockKcb((char *)v11);
        CmpUnlockRegistry();
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return (unsigned int)v3;
      }
      v16 = UnitOfWork + 4;
      v17 = *(_QWORD **)(v11 + 208);
      UnitOfWork[4] = v11 + 200;
      UnitOfWork[5] = v17;
      if ( *v17 != v11 + 200 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v11 + 208) = v16;
      CmpReferenceKeyControlBlock((signed __int32 *)v11);
      *(_QWORD *)(v4 + 48) = v11;
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v19 = v31 + 16;
      v20 = (__int64 *)*((_QWORD *)v31 + 3);
      *(_QWORD *)v4 = v31 + 16;
      *(_QWORD *)(v4 + 8) = v20;
      if ( (char *)*v20 != v19 )
        __fastfail(3u);
      *v20 = v4;
      *((_QWORD *)v19 + 1) = v4;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *(_QWORD *)(v4 + 56) = v31;
      if ( CmpLockIXLockIntent((unsigned int *)(v11 + 240), v4) && CmpLockIXLockExclusive(v11 + 256, v4, 1) )
      {
        *(_DWORD *)(v4 + 68) = 7;
        *(_DWORD *)(v4 + 80) = a3;
        v3 = CmAddLogForAction(v4, v21);
LABEL_61:
        if ( v3 >= 0 )
          goto LABEL_66;
      }
      else
      {
        v3 = -1072103423;
      }
      if ( v4 )
      {
        CmpRundownUnitOfWork((_QWORD *)v4);
        ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
      }
      goto LABEL_66;
    }
    v13 = v11 + 240;
    if ( *(int *)(v11 + 240) >= 0 )
    {
      v13 = v11 + 256;
      if ( !*(_DWORD *)(v11 + 256) )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 2848), 1u);
        v22 = BugCheckParameter3;
        if ( !HvpMarkCellDirty(v12, BugCheckParameter3, 0) )
        {
          v3 = -1073741443;
LABEL_60:
          ExReleaseResourceLite(*(PERESOURCE *)(v12 + 2848));
          goto LABEL_61;
        }
        v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v12 + 8))(v12, v22, &BugCheckParameter3_4);
        v24 = v23;
        if ( !v23 )
        {
          v3 = -1073741670;
          goto LABEL_60;
        }
        CmpUpdateKeyNodeAccessBits(v12, v23, BugCheckParameter3);
        if ( v34 )
        {
          *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ (a3 << 20)) & 0xF00000;
          *(_DWORD *)(v11 + 184) ^= (*(_DWORD *)(v11 + 184) ^ *(unsigned __int16 *)(v24 + 54)) & 0xF0;
          if ( (a3 & 2) != 0 )
          {
            *(_WORD *)(v24 + 2) &= ~0x80u;
            *(_WORD *)(v11 + 186) &= ~0x80u;
          }
        }
        else if ( v26 )
        {
          *(_BYTE *)(v24 + 55) = a3;
          *(_BYTE *)(v11 + 185) = a3;
        }
        else if ( v33 )
        {
          if ( (a3 & 4) != 0 )
          {
            v25 = 128;
          }
          else
          {
            if ( (a3 & 1) != 0 )
            {
              *(_WORD *)(v24 + 2) |= 0x300u;
              *(_WORD *)(v11 + 186) |= 0x300u;
            }
            else
            {
              *(_WORD *)(v24 + 2) &= ~0x100u;
              *(_WORD *)(v11 + 186) &= ~0x100u;
            }
            if ( (a3 & 2) == 0 )
              goto LABEL_59;
            v25 = 512;
          }
          *(_WORD *)(v24 + 2) |= v25;
          *(_WORD *)(v11 + 186) |= v25;
        }
        else
        {
          *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ (a3 << 16)) & 0xF0000;
          *(_DWORD *)(v11 + 184) ^= (*(_DWORD *)(v11 + 184) ^ HIWORD(*(_DWORD *)(v24 + 52))) & 0xF;
        }
LABEL_59:
        *(_QWORD *)(v24 + 4) = v10;
        (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &BugCheckParameter3_4);
        *(_QWORD *)(v11 + 168) = v10;
        goto LABEL_60;
      }
    }
    v3 = CmpSnapshotTxOwnerArray(v13, &v27, &v32);
    if ( v3 < 0 )
      goto LABEL_66;
    CmpLogTransactionAborted(v11, 3u, v14, v27);
    CmpUnlockKcb((char *)v11);
    CmpUnlockRegistry();
    v3 = CmpRollbackTransactionArray(v27, v32, 0LL, &v28);
    if ( v3 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v11);
      goto LABEL_66;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 3221225865LL;
}
