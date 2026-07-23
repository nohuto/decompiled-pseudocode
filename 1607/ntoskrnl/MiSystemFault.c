/*
 * XREFs of MiSystemFault @ 0x14001BB70
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MiSystemCacheVaControlArea @ 0x1400189B0 (MiSystemCacheVaControlArea.c)
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiCheckVirtualAddress @ 0x14001E978 (MiCheckVirtualAddress.c)
 *     MiRecheckVaWorkingSet @ 0x14001EF78 (MiRecheckVaWorkingSet.c)
 *     MiNoFaultFound @ 0x14001F078 (MiNoFaultFound.c)
 *     MiUpdatePfnPriorityByPte @ 0x14002E230 (MiUpdatePfnPriorityByPte.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeInvalidAccessAllowed @ 0x1400A39A4 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1400AEE78 (MiCheckSystemNxFault.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiTransientPageListWriter @ 0x1401FC268 (MiTransientPageListWriter.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemFault(
        ULONG_PTR a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  _BYTE *v6; // rbp
  unsigned __int64 v7; // rdi
  char v10; // bl
  struct _KTHREAD *CurrentThread; // r15
  KIRQL v13; // al
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rcx
  int v16; // eax
  void *v17; // rax
  _QWORD *v18; // r13
  _QWORD *v19; // r10
  ULONG_PTR v20; // rax
  int v21; // r9d
  __int64 v22; // r10
  KIRQL v23; // r11
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  __int64 v26; // r10
  KIRQL v27; // r11
  unsigned __int64 v28; // r8
  unsigned __int8 v29; // di
  __int64 v30; // rdx
  char v31; // bl
  KIRQL v32; // dl
  __int64 v33; // r15
  struct _KPROCESS *v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // rcx
  __int64 SharedVm; // rdi
  __int64 v38; // rax
  __int64 v39; // r12
  ULONG_PTR v40; // rax
  int v41; // r9d
  __int64 v42; // r15
  ULONG_PTR v43; // rdi
  struct _KPROCESS *Process; // rax
  char *AnyMultiplexedVm; // r15
  LONG *v46; // rdi
  char v47; // al
  __int64 CurrentIrql; // rcx
  unsigned int v49; // r15d
  signed __int32 v50; // edx
  signed __int32 v51; // eax
  char v52; // r10
  bool v53; // zf
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  ULONG_PTR v58; // rax
  int v59; // r9d
  __int64 v60; // r13
  ULONG_PTR v61; // rdi
  ULONG_PTR BugCheckParameter4; // r11
  __int64 v63; // rdi
  unsigned int v64; // ebx
  __int64 PrototypePteDirect; // rax
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rdi
  _BYTE v69[96]; // [rsp+B0h] [rbp+B0h] BYREF

  v6 = (_BYTE *)((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL);
  v7 = a4;
  v10 = 0;
  if ( (a1 & 0x100000000000000LL) != 0 )
  {
    if ( a2 < 0xFFFFF68000000000uLL
      || a2 > 0xFFFFF6FFFFFFFFFFuLL
      || a4 > 0x7FFFFFFEFFFFLL && (a4 < qword_140327FD0 || a4 > qword_140326D38) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( *(_QWORD *)(qword_140327FD0 + 276840752)
    && (a2 >= qword_140327FD0 + 0x10000000 && a2 < qword_140327FD0 + 276840816
     || a2 >= (((unsigned __int64)(qword_140327FD0 + 0x10000000) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
     && a2 < (((unsigned __int64)(qword_140327FD0 + 276840816) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
    || a2 >= qword_140327FD0 && a2 < qword_140327FD0 + 0x10000000
    || a2 >= (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a2 < (((unsigned __int64)(qword_140327FD0 + 0x10000000) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    || ((a2 ^ (qword_140327FD0 + 276840816)) & 0xFFFFFFFFFFFFF000uLL) == 0 )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->Priority
    || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x100) != 0
    && (unsigned int)MiTransientPageListWriter(CurrentThread, a2) == 1 )
  {
    return 3221225477LL;
  }
  if ( dword_140326E44 )
  {
    v13 = ExAcquireSpinLockShared(&dword_140326E40);
    v14 = (_QWORD *)qword_140326E48;
    if ( qword_140326E48 )
    {
      do
      {
        v15 = v14[3];
        if ( (unsigned __int64)CurrentThread > v15 )
        {
          v14 = (_QWORD *)v14[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v15 )
            break;
          v14 = (_QWORD *)*v14;
        }
      }
      while ( v14 );
      if ( v14 && v14[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v14 = 0LL;
    }
    ExReleaseSpinLockShared(&dword_140326E40, v13);
    if ( v14 )
      return 3221225477LL;
    v7 = a4;
  }
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    goto LABEL_44;
  if ( (a3 & 1) == 0 )
    goto LABEL_38;
  if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
    goto LABEL_44;
  if ( (a3 & 1) == 0 )
  {
LABEL_38:
    if ( !a3 )
      goto LABEL_49;
    v16 = *(unsigned __int16 *)(a3 + 368);
    if ( v16 == 16 )
    {
      v17 = &ExpInterlockedPopEntrySListFault;
    }
    else
    {
      if ( v16 != 51 )
        goto LABEL_49;
      v17 = (void *)KeUserPopEntrySListFault;
    }
    if ( *(void **)(a3 + 360) != v17 )
    {
LABEL_49:
      if ( (a3 & 1) == 0 )
        goto LABEL_53;
      goto LABEL_50;
    }
LABEL_44:
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
      && (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeBalanceSetManager
      && v7 >= qword_140326950
      && v7 < qword_140326950 + 0x8000000000LL )
    {
      return 3221225477LL;
    }
    v10 = 32;
    *(_BYTE *)(a6 + 17) = 1;
    goto LABEL_49;
  }
LABEL_50:
  if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    if ( v7 < 0xFFFF800000000000uLL )
      return 192LL;
    goto LABEL_54;
  }
LABEL_53:
  if ( (v10 & 0x20) == 0 )
  {
    *(_BYTE *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 17;
    goto LABEL_56;
  }
LABEL_54:
  *(_BYTE *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = ExAcquireSpinLockShared(&dword_140326D78);
LABEL_56:
  v18 = a5;
  v19 = a5;
  do
  {
    v20 = MI_READ_PTE_LOCK_FREE(*v19);
    if ( (v20 & 1) == 0 )
    {
      if ( v23 == 17 )
        KeBugCheckEx(0x50u, a2, a1, a3, 2uLL);
      ExReleaseSpinLockShared(&dword_140326D78, v23);
      return 3221225477LL;
    }
    if ( (v20 & 0x80u) != 0LL )
    {
      if ( (a1 & 2) != 0 && (v20 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, a2, v20, a3, 0xCuLL);
      MiCheckSystemNxFault(a1, a2, a3, v20, 4);
      v32 = *(_BYTE *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 1);
      if ( v32 == 17 )
      {
        if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, a2, a1, a3, 8uLL);
      }
      else
      {
LABEL_80:
        ExReleaseSpinLockShared(&dword_140326D78, v32);
      }
      return 0LL;
    }
    v19 = (_QWORD *)(v22 + 8);
  }
  while ( (unsigned int)(v21 + 1) < 3 );
  v24 = a5[3];
  *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v24;
  v25 = MI_READ_PTE_LOCK_FREE(v24);
  v28 = a4;
  v29 = v25;
  v30 = 0xF8000000000LL;
  if ( a4 > 0x7FFFFFFEFFFFLL )
  {
    if ( a4 < qword_140326950 || a4 >= qword_140326950 + 0x8000000000LL )
    {
      if ( qword_140326CC0 && a4 >= qword_140326CC0 && a4 < qword_140326CC0 + (qword_140326CA0 << 21) )
      {
        v31 = v10 | 8;
      }
      else if ( a4 >= qword_140327F70 && a4 < qword_140327F70 + 0xF8000000000LL
             || qword_140326C70
             && a4 >= qword_140326C70
             && a4 < qword_140326C70 + (qword_140326C50 << 21)
             && (v30 = (*(_QWORD *)(((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL,
                 (*(_BYTE *)(48 * v30 - 0x57FFFFFFFDALL) & 0xF0) == 0x70) )
      {
        v31 = v10 | 4;
      }
      else
      {
        v31 = v10 | 0x10;
      }
    }
    else
    {
      v31 = v10 | 2;
    }
  }
  else
  {
    v31 = v10 | 1;
  }
  if ( ((unsigned __int8)a3 & v25 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriorityByPte(v26, *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7);
    v32 = *(_BYTE *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 1);
    goto LABEL_80;
  }
  if ( v27 != 17 )
  {
    ExReleaseSpinLockShared(&dword_140326D78, v27);
    v28 = a4;
  }
  if ( (v29 & 1) == 0 )
  {
    if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( (v31 & 0x20) == 0 )
      {
        if ( v28 <= 0x7FFFFFFEFFFFLL )
          return 192LL;
        if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, a2, a1, a3, 9uLL);
        return 0LL;
      }
      return 3221225477LL;
    }
    if ( (v31 & 2) != 0 )
    {
      Process = CurrentThread->ApcState.Process;
      if ( !Process[1].ActiveProcessors.Bitmap[2] || Process == PsInitialSystemProcess )
      {
        if ( (v31 & 0x20) == 0 )
        {
          if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
            KeBugCheckEx(0x50u, a2, a1, a3, 3uLL);
          return 0LL;
        }
        return 3221225477LL;
      }
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    }
    else if ( (v31 & 8) != 0 )
    {
      AnyMultiplexedVm = (char *)MiGetAnyMultiplexedVm(0LL, v30);
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140327BA0;
      if ( (v31 & 4) == 0 )
        AnyMultiplexedVm = (char *)&unk_140327A90;
    }
    v46 = &dword_140327CC0;
    v47 = AnyMultiplexedVm[184] & 7;
    *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = AnyMultiplexedVm;
    if ( v47 != 2 )
      v46 = (LONG *)(AnyMultiplexedVm + 192);
    CurrentIrql = KeGetCurrentIrql();
    *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v46, (unsigned __int8)CurrentIrql);
    }
    else
    {
      v49 = 0;
      if ( _interlockedbittestandset(v46, 0x1Fu) )
        v49 = ExpWaitForSpinLockExclusiveAndAcquire(v46, (unsigned __int8)CurrentIrql);
      v50 = *v46;
      while ( (v50 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v50 & 0x40000000) == 0 )
        {
          v51 = _InterlockedCompareExchange(v46, v50 | 0x40000000, v50);
          v53 = v50 == v51;
          v50 = v51;
          if ( !v53 )
            continue;
        }
        if ( (++v49 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v49);
        v50 = *v46;
      }
      AnyMultiplexedVm = *(char **)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    v53 = *(_BYTE *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 1) == 17;
    v46[1] = 0;
    if ( !v53 )
    {
      v31 |= 0x40u;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D78);
    }
    v52 = *(_BYTE *)(*(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 184LL) & 7;
    if ( !v52 )
    {
      AnyMultiplexedVm = *(char **)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_188:
      if ( AnyMultiplexedVm && (AnyMultiplexedVm[184] & 7) == v52 )
      {
        while ( 1 )
        {
          v58 = MI_READ_PTE_LOCK_FREE(*v18);
          if ( (v58 & 1) == 0 )
            goto LABEL_252;
          if ( (v58 & 0x80u) != 0LL )
            break;
          ++v18;
          if ( (unsigned int)(v59 + 1) >= 3 )
          {
            v60 = *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            v61 = MI_READ_PTE_LOCK_FREE(v60);
            if ( (v31 & 0x40) != 0 )
            {
              ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
              BugCheckParameter4 = 0LL;
            }
            if ( (v61 & 1) == 0 )
            {
              if ( (v61 & 0x400) != 0 )
              {
                if ( (v61 & 2) != 0 )
                {
                  if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                  {
                    v63 = *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                    v64 = MiResolveDemandZeroFault(a2, v60, 0, (_DWORD)AnyMultiplexedVm, a3, BugCheckParameter4, v63);
                    MiUnlockWorkingSetExclusive(AnyMultiplexedVm, (unsigned __int8)v63);
                    return v64;
                  }
                  goto LABEL_254;
                }
                PrototypePteDirect = MiGetPrototypePteDirect(v61);
                *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = PrototypePteDirect;
                v66 = PrototypePteDirect;
                if ( (v31 & 2) != 0 )
                {
                  if ( (unsigned int)MiIsPrototypePteVadLookup(v61) )
                  {
                    v66 = MiCheckVirtualAddress(a2, v6 + 4, v6 + 32);
                    if ( !v66 )
                    {
                      if ( (a3 & 1) == 0 )
                        goto LABEL_209;
                      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                      {
                        if ( (a3 & 1) == 0 )
                          goto LABEL_209;
                        if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
                        {
                          if ( (a3 & 1) != 0 )
                            goto LABEL_210;
LABEL_209:
                          if ( (unsigned __int8)KeInvalidAccessAllowed(a3) != 1 )
                          {
LABEL_210:
                            MiUnlockWorkingSetExclusive(
                              AnyMultiplexedVm,
                              *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
                            return 3489660934LL;
                          }
                        }
                      }
LABEL_248:
                      MiUnlockWorkingSetExclusive(
                        AnyMultiplexedVm,
                        *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
                      return 3221225477LL;
                    }
                  }
                  else
                  {
                    v66 = *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                  }
                }
LABEL_235:
                if ( (a1 & 2) == 0 || v66 || (v31 & 2) != 0 || ((v61 >> 5) & 4) != 0 )
                {
                  v68 = *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  *(_QWORD *)a6 = AnyMultiplexedVm;
                  *(_BYTE *)(a6 + 16) = v68;
                  *(_QWORD *)(a6 + 8) = v66;
                  return 3221225494LL;
                }
                if ( (a3 & 1) == 0 )
                  goto LABEL_244;
                if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                  goto LABEL_248;
                if ( (a3 & 1) == 0 )
                  goto LABEL_244;
                if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                  goto LABEL_248;
                if ( (a3 & 1) == 0 )
                {
LABEL_244:
                  if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
                    goto LABEL_248;
                }
                KeBugCheckEx(0xBEu, a2, v61, a3, 0xEuLL);
              }
              if ( (v61 & 0x800) == 0 && (v61 & 0x3E0) == 0 )
              {
                if ( (a3 & 1) == 0 )
                  goto LABEL_219;
                if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                  goto LABEL_248;
                if ( (a3 & 1) == 0 )
                  goto LABEL_219;
                if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                  goto LABEL_248;
                if ( (a3 & 1) == 0 )
                {
LABEL_219:
                  if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
                    goto LABEL_248;
                }
                KeBugCheckEx(0x50u, a2, a1, a3, BugCheckParameter4);
              }
              v67 = (v61 >> 5) & 0x1F;
              if ( v67 == 24 )
              {
LABEL_225:
                if ( (a3 & 1) == 0 )
                  goto LABEL_230;
                if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                  goto LABEL_231;
                if ( (a3 & 1) == 0 )
                  goto LABEL_230;
                if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                  goto LABEL_231;
                if ( (a3 & 1) == 0 )
                  goto LABEL_230;
              }
              else
              {
                if ( v67 != 31 )
                  goto LABEL_234;
                if ( (a3 & 1) != 0 )
                {
                  if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
                    goto LABEL_225;
LABEL_234:
                  v66 = 0LL;
                  goto LABEL_235;
                }
LABEL_230:
                if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
                {
LABEL_231:
                  if ( v67 == 24 || (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                    goto LABEL_248;
                  goto LABEL_234;
                }
              }
              KeBugCheckEx(0x50u, a2, a1, a3, 1uLL);
            }
LABEL_254:
            MiUnlockWorkingSetExclusive(
              AnyMultiplexedVm,
              *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
            return 0LL;
          }
        }
        if ( (a1 & 2) != 0 && (v58 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, a2, v58, a3, 0x10uLL);
        MiCheckSystemNxFault(a1, a2, a3, v58, 6);
LABEL_252:
        if ( (v31 & 0x40) != 0 )
          ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
        goto LABEL_254;
      }
      goto LABEL_255;
    }
    if ( a2 < qword_140326950 || a2 >= qword_140326950 + 0x8000000000LL )
    {
      if ( qword_140326CC0 && a2 >= qword_140326CC0 && a2 < qword_140326CC0 + (qword_140326CA0 << 21) )
      {
        if ( v52 == 2 && *(_QWORD *)(MiGetSystemCacheReverseMap(a2) + 16) )
        {
          v54 = MiSystemCacheVaControlArea(a2);
          AnyMultiplexedVm = (char *)(MiPartitionIdToPointer(*(_WORD *)(v54 + 60) & 0x3FF, v55, v56, v57) + 6592);
          goto LABEL_188;
        }
LABEL_255:
        if ( (v31 & 0x40) != 0 )
          ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
        MiUnlockWorkingSetExclusive(
          *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        return 0LL;
      }
      if ( a2 >= qword_140327F70 && a2 < qword_140327F70 + 0xF8000000000LL
        || qword_140326C70
        && a2 >= qword_140326C70
        && a2 < qword_140326C70 + (qword_140326C50 << 21)
        && (*(_BYTE *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
      {
        v53 = v52 == 3;
      }
      else
      {
        v53 = v52 == 4;
      }
    }
    else
    {
      v53 = v52 == 1;
    }
    if ( v53 )
      goto LABEL_188;
    goto LABEL_255;
  }
  if ( (v31 & 1) != 0 )
  {
    v33 = (__int64)&CurrentThread->ApcState.Process[1].IdealNode[12];
    goto LABEL_99;
  }
  if ( (v31 & 2) != 0 )
  {
    v34 = CurrentThread->ApcState.Process;
    if ( v34[1].ActiveProcessors.Bitmap[2] && v34 != PsInitialSystemProcess )
    {
      v33 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
      goto LABEL_99;
    }
    v35 = -805306362;
    if ( (v31 & 0x20) != 0 )
      return (unsigned int)-1073741819;
    return v35;
  }
  else
  {
    if ( (v31 & 8) != 0 )
    {
      v36 = 0LL;
    }
    else
    {
      v36 = 2LL;
      if ( (v31 & 4) == 0 )
        v36 = 1LL;
    }
    v33 = MiGetAnyMultiplexedVm(v36, v30);
LABEL_99:
    SharedVm = MiGetSharedVm(v33);
    *v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    if ( (v31 & 1) == 0 && *(_BYTE *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 1) != 17 )
    {
      v31 |= 0x40u;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D78);
    }
    v38 = MiRecheckVaWorkingSet(v33, a4);
    v39 = v38;
    if ( v38 && ((*(_BYTE *)(v33 + 184) ^ *(_BYTE *)(v38 + 184)) & 7) == 0 )
    {
      while ( 1 )
      {
        v40 = MI_READ_PTE_LOCK_FREE(*v18);
        if ( (v40 & 1) == 0 )
          goto LABEL_125;
        if ( (v40 & 0x80u) != 0LL )
          break;
        ++v18;
        if ( (unsigned int)(v41 + 1) >= 3 )
        {
          v42 = *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v43 = MI_READ_PTE_LOCK_FREE(v42);
          if ( (v31 & 0x40) != 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
            v31 &= ~0x40u;
          }
          if ( (v43 & 1) != 0 )
          {
            if ( (v31 & 0x20) == 0 && (v43 & 0x80u) != 0LL && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
              KeBugCheckEx(0x50u, a2, a1, a3, 8uLL);
            if ( (a1 & 2) != 0 )
            {
              if ( (v43 & 0x800) == 0 )
              {
                if ( (v43 & 0x200) == 0 )
                  KeBugCheckEx(0xBEu, a2, v43, a3, 0xBuLL);
                MiCopyOnWriteEx(a2, 0);
                MiUnlockWorkingSetExclusive(v39, (unsigned __int8)*v6);
                return 0LL;
              }
            }
            else
            {
              MiCheckSystemNxFault(a1, a2, a3, v43, 2);
            }
            MiNoFaultFound(a1, v42, a2, 1, ZeroPte, v39);
            MiUnlockWorkingSetExclusive(v39, (unsigned __int8)*v6);
            return 0LL;
          }
LABEL_127:
          MiUnlockWorkingSetExclusive(v39, (unsigned __int8)*v6);
          return 0LL;
        }
      }
      if ( (a1 & 2) != 0 && (v40 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, a2, v40, a3, 0xDuLL);
      MiCheckSystemNxFault(a1, a2, a3, v40, 1);
      if ( (v31 & 0x20) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
        KeBugCheckEx(0x50u, a2, a1, a3, 8uLL);
LABEL_125:
      if ( (v31 & 0x40) != 0 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
      goto LABEL_127;
    }
    if ( (v31 & 0x40) != 0 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
    MiUnlockWorkingSetExclusive(v33, (unsigned __int8)*v6);
    return 0LL;
  }
}
