/*
 * XREFs of CmSetKeyFlags @ 0x140655BB8
 * Callers:
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  int v5; // edi
  __int64 v6; // r15
  char i; // al
  unsigned __int64 v9; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax
  struct _KTHREAD *v12; // rax
  unsigned __int64 v13; // rtt
  __int64 v14; // rbx
  ULONG_PTR v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // r13
  ULONG_PTR v20; // rcx
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  _QWORD *UnitOfWork; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // r8
  struct _KTHREAD *v26; // rax
  struct _KTHREAD *v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rbx
  char *v31; // rax
  __int64 *v32; // rcx
  signed __int32 v33; // eax
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // r14d
  __int64 v43; // rax
  __int64 v44; // r14
  __int16 v45; // ax
  char v46; // al
  unsigned __int64 v47; // rtt
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  char v50; // [rsp+40h] [rbp-30h]
  unsigned int v51; // [rsp+44h] [rbp-2Ch] BYREF
  char *v52; // [rsp+48h] [rbp-28h] BYREF
  int v53; // [rsp+50h] [rbp-20h] BYREF
  int v54; // [rsp+54h] [rbp-1Ch] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h] BYREF
  char v57; // [rsp+B8h] [rbp+48h]
  char v58; // [rsp+C8h] [rbp+58h]

  v54 = -1;
  v52 = 0LL;
  v53 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( a2 == 1 )
  {
    if ( (a3 & 0xFFFFFFF0) != 0 )
      return 3221225485LL;
  }
  else if ( a2 == 2 )
  {
    v58 = 1;
    v57 = 0;
    goto LABEL_9;
  }
  v58 = 0;
  if ( a2 == 3 )
  {
    v57 = 1;
  }
  else
  {
    v57 = 0;
    v50 = 1;
    if ( a2 == 4 )
      goto LABEL_10;
  }
LABEL_9:
  v50 = 0;
LABEL_10:
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v9 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v9 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v13 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      break;
    }
    v14 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v15 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v15, v16, v17, v18);
    v19 = *(_QWORD *)(v15 + 32);
    LODWORD(BugCheckParameter3) = *(_DWORD *)(v15 + 40);
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmRmIsKCBDeleted(v15, (__int64)v52) )
      {
        v46 = *(_BYTE *)(a1 + 48) & 1;
        goto LABEL_88;
      }
      v5 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v52);
      if ( v5 < 0 )
        goto LABEL_89;
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 144LL) & 2) != 0 )
      {
        v5 = -1072103423;
        goto LABEL_89;
      }
    }
    if ( CmRmIsKCBDeleted(v15, (__int64)v52) )
    {
      v46 = *(_BYTE *)(a1 + 48) & 1;
LABEL_88:
      v5 = v46 != 0 ? -1073740763 : -1073741444;
      goto LABEL_89;
    }
    if ( v52 && !v58 && !v57 && !v50 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      v6 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v5 = -1073741670;
LABEL_89:
        CmpUnlockKcb((char *)v15);
        CmpUnlockRegistry();
        _m_prefetchw(&CmpShutdownRundown);
        v47 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v47 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v48 = KeGetCurrentThread();
        v49 = v48->KernelApcDisable + 1;
        v48->KernelApcDisable = v49;
        if ( !v49
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
          && !v48->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return (unsigned int)v5;
      }
      v24 = UnitOfWork + 4;
      v25 = *(_QWORD **)(v15 + 208);
      UnitOfWork[4] = v15 + 200;
      UnitOfWork[5] = v25;
      if ( *v25 != v15 + 200 )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v15 + 208) = v24;
      CmpReferenceKeyControlBlock(v15);
      *(_QWORD *)(v6 + 48) = v15;
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v27 = KeGetCurrentThread();
      v29 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v28);
      v30 = v29;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v29);
      if ( v30 )
        *(_BYTE *)(v30 + 26) |= 1u;
      qword_14034D768 = (__int64)v27;
      v31 = v52 + 16;
      v32 = (__int64 *)*((_QWORD *)v52 + 3);
      *(_QWORD *)v6 = v52 + 16;
      *(_QWORD *)(v6 + 8) = v32;
      if ( (char *)*v32 != v31 )
        __fastfail(3u);
      *v32 = v6;
      *((_QWORD *)v31 + 1) = v6;
      qword_14034D768 = 0LL;
      v33 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v33 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v33);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v34 = KeGetCurrentThread();
      v35 = v34->KernelApcDisable + 1;
      v34->KernelApcDisable = v35;
      if ( !v35
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
        && !v34->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      *(_QWORD *)(v6 + 56) = v52;
      if ( CmpLockIXLockIntent((unsigned int *)(v15 + 240), v6) && CmpLockIXLockExclusive(v15 + 256, (_QWORD *)v6, 1) )
      {
        *(_DWORD *)(v6 + 68) = 7;
        *(_DWORD *)(v6 + 80) = a3;
        v5 = CmAddLogForAction(v6, v36);
LABEL_82:
        if ( v5 >= 0 )
          goto LABEL_89;
      }
      else
      {
        v5 = -1072103423;
      }
      if ( v6 )
      {
        CmpRundownUnitOfWork((_QWORD *)v6, v36, v37, v38);
        ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
      }
      goto LABEL_89;
    }
    v20 = v15 + 240;
    if ( *(int *)(v15 + 240) >= 0 )
    {
      v20 = v15 + 256;
      if ( !*(_DWORD *)(v15 + 256) )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v19 + 2848), 1u);
        v42 = BugCheckParameter3;
        if ( !HvpMarkCellDirty(v19, (unsigned int)BugCheckParameter3, 0, 0LL) )
        {
          v5 = -1073741443;
LABEL_81:
          ExReleaseResourceLite(*(PERESOURCE *)(v19 + 2848));
          goto LABEL_82;
        }
        v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v19 + 8))(v19, v42, &v54);
        v44 = v43;
        if ( !v43 )
        {
          v5 = -1073741670;
          goto LABEL_81;
        }
        CmpUpdateKeyNodeAccessBits(v19, v43, BugCheckParameter3);
        if ( v58 )
        {
          *(_DWORD *)(v44 + 52) ^= (*(_DWORD *)(v44 + 52) ^ (a3 << 20)) & 0xF00000;
          *(_DWORD *)(v15 + 184) ^= (*(_DWORD *)(v15 + 184) ^ *(unsigned __int16 *)(v44 + 54)) & 0xF0;
          if ( (a3 & 2) != 0 )
          {
            *(_WORD *)(v44 + 2) &= ~0x80u;
            *(_WORD *)(v15 + 186) &= ~0x80u;
          }
          goto LABEL_80;
        }
        if ( v50 )
        {
          *(_BYTE *)(v44 + 55) = a3;
          *(_BYTE *)(v15 + 185) = a3;
        }
        else if ( v57 )
        {
          if ( (a3 & 4) != 0 )
          {
            v45 = 128;
          }
          else
          {
            if ( (a3 & 1) != 0 )
            {
              *(_WORD *)(v44 + 2) |= 0x300u;
              *(_WORD *)(v15 + 186) |= 0x300u;
            }
            else
            {
              *(_WORD *)(v44 + 2) &= ~0x100u;
              *(_WORD *)(v15 + 186) &= ~0x100u;
            }
            if ( (a3 & 2) == 0 )
              goto LABEL_80;
            v45 = 512;
          }
          *(_WORD *)(v44 + 2) |= v45;
          *(_WORD *)(v15 + 186) |= v45;
        }
        else
        {
          *(_DWORD *)(v44 + 52) ^= (*(_DWORD *)(v44 + 52) ^ (a3 << 16)) & 0xF0000;
          *(_DWORD *)(v15 + 184) ^= (*(_DWORD *)(v15 + 184) ^ HIWORD(*(_DWORD *)(v44 + 52))) & 0xF;
        }
LABEL_80:
        *(_QWORD *)(v44 + 4) = v14;
        (*(void (__fastcall **)(ULONG_PTR, int *))(v19 + 16))(v19, &v54);
        *(_QWORD *)(v15 + 168) = v14;
        goto LABEL_81;
      }
    }
    v5 = CmpSnapshotTxOwnerArray(v20, &v51, &v56);
    if ( v5 < 0 )
      goto LABEL_89;
    CmpUnlockKcb((char *)v15);
    CmpUnlockRegistry();
    v5 = CmpRollbackTransactionArray(v51, v56, 0LL, &v53);
    if ( v5 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v15, v39, v40, v41);
      goto LABEL_89;
    }
  }
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221225865LL;
}
