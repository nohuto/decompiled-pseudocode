/*
 * XREFs of MiCommitExistingVad @ 0x14002A7A0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitExistingVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r10d
  __int16 v10; // r11
  unsigned int ProtectionMask; // r12d
  int v12; // r10d
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  __int64 DemandZeroPte; // rbx
  __int64 v17; // r8
  __int64 v18; // rdx
  ULONG_PTR BugCheckParameter4; // r14
  unsigned __int64 v20; // rbp
  __int64 SharedVm; // rdi
  KIRQL v22; // si
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rax
  __int64 result; // rax
  int v27; // ecx
  __int64 *v28; // rax
  __int64 v29; // rax
  volatile signed __int32 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  LONG *v33; // rsi
  unsigned __int16 v34; // r13
  __int64 v35; // rbp
  int v36; // r15d
  __int64 UsedPtesHandle; // rdi
  __int64 CurrentIrql; // rcx
  signed __int32 v39; // edx
  signed __int32 v40; // eax
  unsigned __int64 v41; // rsi
  unsigned int v42; // ebp
  ULONG_PTR v43; // rsi
  int v44; // r9d
  char v45; // al
  ULONG_PTR v46; // r11
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // eax
  ULONG_PTR v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // r9
  __int64 v56; // r9
  int v57; // r10d
  unsigned __int8 v58; // bl
  LONG *v59; // rcx
  __int16 v60; // ax
  ULONG_PTR v61; // r8
  unsigned int v62; // ecx
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // [rsp+30h] [rbp-E8h]
  int v66; // [rsp+38h] [rbp-E0h]
  int v67; // [rsp+3Ch] [rbp-DCh]
  __int64 v68; // [rsp+40h] [rbp-D8h]
  __int64 v69; // [rsp+48h] [rbp-D0h]
  __int64 v70; // [rsp+50h] [rbp-C8h]
  __int64 v71; // [rsp+58h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-B8h] BYREF
  int v73; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int64 v74; // [rsp+70h] [rbp-A8h]
  __int64 v75; // [rsp+78h] [rbp-A0h]
  __int64 v76; // [rsp+80h] [rbp-98h]
  ULONG_PTR v77; // [rsp+88h] [rbp-90h]
  unsigned __int64 v78; // [rsp+90h] [rbp-88h]
  _DWORD *v79; // [rsp+98h] [rbp-80h]
  ULONG_PTR v80; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v83; // [rsp+B8h] [rbp-60h]
  __int64 v84; // [rsp+C0h] [rbp-58h]
  void *retaddr; // [rsp+118h] [rbp+0h]

  v77 = a1;
  v74 = a2;
  v79 = a5;
  ProtectionMask = MiMakeProtectionMask(a4);
  if ( ProtectionMask == 24 )
    goto LABEL_17;
  if ( v9 == 24 )
  {
    if ( (v10 & 0x8000) == 0 )
      v9 = (*(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1) & 0x1F;
    if ( v9 == 24 )
      LOBYTE(v9) = 0;
  }
  v12 = v9 & 0x18;
  if ( v12 )
  {
    if ( v12 != 16 )
    {
      if ( v12 == 8 )
      {
        ProtectionMask = ProtectionMask & 0xFFFFFFE7 | 8;
      }
      else if ( v12 == 24 )
      {
        ProtectionMask |= 0x18u;
      }
      goto LABEL_17;
    }
LABEL_16:
    ProtectionMask &= ~8u;
    goto LABEL_17;
  }
  v13 = ProtectionMask & 0x18;
  if ( v13 == 24 )
  {
    ProtectionMask &= 0xFFFFFFE7;
    goto LABEL_17;
  }
  if ( v13 == 8 )
    goto LABEL_16;
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  v70 = (__int64)CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v68 = Process;
  if ( *(int *)(a1 + 52) >= 0 )
    v78 = 0LL;
  else
    v78 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(ProtectionMask, 0xFFFFF68000000000uLL, v7, v8);
  BugCheckParameter4 = v18 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  v20 = (a2 + v17 - 1) | 0xFFF;
  v80 = v18 + ((v20 >> 9) & 0x7FFFFFFFF8LL);
  v69 = Process + 1280;
  v76 = ((__int64)(v80 - BugCheckParameter4) >> 3) + 1;
  if ( (int)MiChargeFullProcessCommitment(Process, v76) < 0 )
  {
    v67 = 0;
    SharedVm = MiGetSharedVm(v69);
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v23 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v20, a1, v22, 0LL);
    MiUnlockWorkingSetExclusive(v69, v22);
    v25 = v76 - v23;
    v24 = v76 == v23;
    Process = v68;
    v71 = v25;
    if ( !v24 )
    {
      result = MiChargeFullProcessCommitment(v68, v25);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = (struct _KTHREAD *)v70;
  }
  else
  {
    v71 = v76;
    v67 = 1;
  }
  v27 = *(_DWORD *)(a1 + 48);
  v66 = 0;
  if ( (v27 & 0x8000) != 0 )
  {
    if ( *(int *)(a1 + 52) < 0 || (v27 & 7) != 0 )
      goto LABEL_42;
  }
  else
  {
    if ( (unsigned __int8)v27 >> 3 != 24 )
      goto LABEL_42;
    v28 = *(__int64 **)(a1 + 72);
    if ( !v28 )
      goto LABEL_42;
    if ( (v27 & 7) == 1 )
      goto LABEL_42;
    v29 = *v28;
    if ( *(_QWORD *)(v29 + 64) || (*(_DWORD *)(v29 + 56) & 0x1000) == 0 )
      goto LABEL_42;
  }
  v66 = 1;
  --CurrentThread->SpecialApcDisable;
  v30 = (volatile signed __int32 *)(Process + 880);
  v31 = KeAbPreAcquire(Process + 880);
  v32 = v31;
  if ( _interlockedbittestandset64(v30, 0LL) )
    ExfAcquirePushLockExclusiveEx(v30, v31, v30);
  if ( v32 )
    *(_BYTE *)(v32 + 26) |= 1u;
  if ( (int)MiCommitPageTablesForVad(a1, a2, v20) < 0 )
  {
    UNLOCK_PAGE_TABLE_COMMITMENT(v70, v68);
    if ( v71 )
      MiReturnFullProcessCommitment(v68, v71);
    return 3221225773LL;
  }
LABEL_42:
  v33 = &dword_140327CC0;
  v34 = 0;
  v65 = 0LL;
  v35 = 0LL;
  v36 = 0;
  UsedPtesHandle = 0LL;
  if ( (*(_BYTE *)(v69 + 184) & 7) != 2 )
    v33 = (LONG *)(v69 + 192);
  CurrentIrql = KeGetCurrentIrql();
  v75 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v33, (unsigned __int8)CurrentIrql);
  }
  else
  {
    if ( _interlockedbittestandset(v33, 0x1Fu) )
      LODWORD(v35) = ExpWaitForSpinLockExclusiveAndAcquire(v33, (unsigned __int8)CurrentIrql);
    v39 = *v33;
    while ( (v39 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v39 & 0x40000000) == 0 )
      {
        v40 = _InterlockedCompareExchange(v33, v39 | 0x40000000, v39);
        v24 = v39 == v40;
        v39 = v40;
        if ( !v24 )
          continue;
      }
      LODWORD(v35) = v35 + 1;
      if ( ((unsigned int)v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait((unsigned int)v35);
      v39 = *v33;
    }
    v35 = 0LL;
  }
  v33[1] = 0;
  if ( BugCheckParameter4 <= v80 )
  {
    v41 = v74;
    while ( 1 )
    {
      if ( !v36 || (BugCheckParameter4 & 0xFFF) == 0 )
      {
        if ( v34 )
        {
          MiIncreaseUsedPtesCount(UsedPtesHandle, v34);
          v34 = 0;
        }
        v42 = (*(_DWORD *)(v77 + 48) >> 8) & 0x3F;
        BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
        v43 = BugCheckParameter3 + 1280;
        while ( 1 )
        {
          if ( (unsigned __int64)(((__int64)BugCheckParameter4 >> 47) + 1) <= 1 )
          {
            v81 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v82 = ((v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v83 = ((v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v44 = 4;
            v84 = ((v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            while ( 1 )
            {
              v45 = MI_READ_PTE_LOCK_FREE(*(&v81 + (unsigned int)(v44 - 1)));
              if ( (v45 & 1) == 0 )
                goto LABEL_87;
              if ( v45 < 0 )
                break;
              if ( !v44 )
                goto LABEL_70;
            }
            if ( BugCheckParameter4 < v46 || BugCheckParameter4 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
          }
LABEL_87:
          MiUnlockWorkingSetExclusive(v43, (unsigned __int8)v75);
          v51 = MmAccessFault(((unsigned __int64)v42 << 57) | 0x100000000000002LL, BugCheckParameter4);
          v52 = v51;
          if ( v51 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v52, BugCheckParameter3, BugCheckParameter4);
          }
          v53 = MiGetSharedVm(v43);
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v53);
          *(_DWORD *)(v53 + 4) = 0;
        }
LABEL_70:
        v41 = v74;
        UsedPtesHandle = MiGetUsedPtesHandle(v74);
        v36 = 1;
      }
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
      if ( !BugCheckParameter3 )
        break;
      v54 = MI_READ_PTE_LOCK_FREE(&BugCheckParameter3);
      if ( (v54 & 0x3E0) != 0x200
        || (v54 & 1) != 0
        || (v54 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v54) )
      {
        v35 = ++v65;
        if ( !*v79 )
        {
          if ( (v55 & 1) == 0 && (v55 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v55) )
          {
            v36 = v57;
            if ( v34 )
            {
              MiIncreaseUsedPtesCount(UsedPtesHandle, v34);
              v34 = 0;
            }
          }
          if ( ProtectionMask != (unsigned int)MiGetPageProtection(v77, BugCheckParameter4) )
            *v79 = 1;
        }
        goto LABEL_78;
      }
      BugCheckParameter3 = ((unsigned __int16)v55 ^ (unsigned __int16)(32 * ProtectionMask)) & 0x3E0 ^ v55;
      *(_QWORD *)BugCheckParameter4 = BugCheckParameter3;
      if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v48) )
      {
        v50 = v56;
LABEL_76:
        MiWritePteShadow(v49, v50);
      }
LABEL_77:
      v35 = v65;
LABEL_78:
      v41 += 4096LL;
      BugCheckParameter4 += 8LL;
      v74 = v41;
      if ( BugCheckParameter4 > v80 )
      {
        if ( v34 )
        {
          v73 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v73);
            while ( (*(_QWORD *)(UsedPtesHandle + 24) & 0x8000000000000000uLL) != 0 );
          }
          *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16)
                                                                                               + (v34 << 16))) & 0x3FF0000;
          _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v34 <= 1u )
            MiIsAddressValid(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL, v48);
        }
        goto LABEL_103;
      }
    }
    if ( BugCheckParameter4 <= v78 )
      ++v65;
    *(_QWORD *)BugCheckParameter4 = DemandZeroPte;
    ++v34;
    if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter4, v47) )
      goto LABEL_77;
    v50 = DemandZeroPte;
    goto LABEL_76;
  }
LABEL_103:
  v58 = v75;
  MiPreUnlockWorkingSetExclusive(v69, (unsigned __int8)v75);
  v59 = &dword_140327CC0;
  if ( (*(_BYTE *)(v69 + 184) & 7) != 2 )
    v59 = (LONG *)(v69 + 192);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v59, retaddr);
  else
    *v59 = 0;
  __writecr8(v58);
  if ( v66 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v68 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v68 + 880);
    KeAbPostRelease(v68 + 880);
    v60 = *(_WORD *)(v70 + 486) + 1;
    *(_WORD *)(v70 + 486) = v60;
    if ( !v60 && *(_QWORD *)(v70 + 152) != v70 + 152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v67 == 1 )
  {
    if ( v35 )
      MiReturnFullProcessCommitment(v68, v35);
    v71 = v76 - v35;
  }
  v61 = v77;
  v62 = *(_DWORD *)(v77 + 52);
  v63 = v62;
  LODWORD(v63) = v62 & 0x7FFFFFFF;
  v64 = (v71 + (v63 | ((unsigned __int64)*(unsigned __int8 *)(v77 + 34) << 31))) >> 31;
  LODWORD(v63) = v62 ^ (v71 + (v62 & 0x7FFFFFFF | (*(unsigned __int8 *)(v77 + 34) << 31)));
  *(_BYTE *)(v77 + 34) = v64;
  *(_DWORD *)(v61 + 52) = v62 ^ v63 & 0x7FFFFFFF;
  return 0LL;
}
