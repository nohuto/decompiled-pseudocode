/*
 * XREFs of MiSystemFault @ 0x14007DA70
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUpdatePfnPriorityByPte @ 0x140054C90 (MiUpdatePfnPriorityByPte.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiNoFaultFound @ 0x14007EB84 (MiNoFaultFound.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x14007ECA0 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     MiCheckVirtualAddress @ 0x1400896DC (MiCheckVirtualAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     KeInvalidAccessAllowed @ 0x140111530 (KeInvalidAccessAllowed.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiCombineCompareThread @ 0x140227B24 (MiCombineCompareThread.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemFault(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  _DWORD *v7; // rbp
  ULONG_PTR v9; // r12
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rsi
  bool v13; // zf
  unsigned __int8 CurrentIrql; // si
  int v15; // ett
  __int64 v16; // r12
  int v17; // eax
  unsigned __int64 v18; // r11
  int v19; // eax
  void *v20; // rax
  int v21; // ett
  int v22; // ett
  unsigned int v23; // r10d
  ULONG_PTR **v24; // r13
  ULONG_PTR **v25; // r9
  ULONG_PTR PteShadow; // rax
  _QWORD *v27; // r9
  __int64 v28; // rbx
  PVOID v29; // rdx
  unsigned __int64 v30; // r8
  unsigned int v31; // edi
  volatile signed __int32 *v32; // rsi
  struct _KPROCESS *Process; // rax
  unsigned __int64 v34; // rsi
  unsigned int v35; // ecx
  unsigned __int8 v36; // r15
  unsigned int v37; // ebx
  signed __int32 i; // edx
  int v39; // ett
  char v40; // r11
  unsigned int v41; // r9d
  __int64 v42; // r10
  ULONG_PTR v43; // rax
  volatile __int64 *v44; // r13
  ULONG_PTR v45; // rbx
  struct _KPROCESS *v46; // rax
  unsigned __int64 v47; // rsi
  volatile signed __int32 *v48; // rsi
  unsigned __int8 v49; // r12
  unsigned int v50; // ebx
  signed __int32 j; // edx
  int v52; // ett
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v54; // r8
  __int64 v55; // r9
  ULONG_PTR v56; // rax
  unsigned __int64 v57; // rdx
  ULONG_PTR *v58; // r13
  ULONG_PTR v59; // rbx
  unsigned int v60; // ebx
  __int64 PrototypePteDirect; // rdx
  ULONG_PTR v62; // r13
  __int64 v63; // r8
  _BYTE v64[80]; // [rsp+A0h] [rbp+A0h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+F8h]
  unsigned __int64 v68; // [rsp+118h] [rbp+118h]

  v68 = a4;
  v7 = (_DWORD *)((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL);
  v9 = a2;
  v10 = 0;
  if ( (a1 & 0x100000000000000LL) != 0 )
  {
    if ( a2 + 0x98000000000LL > 0x7FFFFFFFFFLL
      || a4 > (unsigned __int64)MmHighestUserAddress && a4 + 0xA8000000000LL > 0xFFFFFFFFFFLL )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( MEMORY[0xFFFFF580108042C0] && (a2 + 0xA7FF0000000LL <= 0x803FFF || a2 + 0x9053FF80000LL <= 0x401F)
    || a2 + 0xA8000000000LL <= 0xFFFFFFF
    || a2 + 0x90540000000LL <= 0x7FFFF
    || (a2 & 0xFFFFFFFFFFFFF000uLL) == 0xFFFFF58010804000uLL )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = dword_14034EF04 == 0;
  *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = CurrentThread;
  if ( !v13 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EF00);
    }
    else
    {
      _m_prefetchw(&dword_14034EF00);
      v15 = dword_14034EF00 & 0x7FFFFFFF;
      if ( v15 != _InterlockedCompareExchange(
                    &dword_14034EF00,
                    (dword_14034EF00 & 0x7FFFFFFF) + 1,
                    dword_14034EF00 & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&dword_14034EF00);
    }
    v6 = qword_14034EF08;
    if ( qword_14034EF08 )
    {
      v16 = *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      do
      {
        v17 = MiCombineCompareThread(v16, v6);
        if ( v17 >= 0 )
        {
          if ( v17 <= 0 )
            break;
          v6 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          v6 = *(_QWORD *)v6;
        }
      }
      while ( v6 );
      v9 = a2;
      if ( v6 && *(_QWORD *)(v6 + 40) != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v6 = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EF00, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EF00, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EF00);
    }
    __writecr8(CurrentIrql);
    if ( v6 )
      return 3221225477LL;
    CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    a4 = v68;
  }
  v18 = 0x7FFFFFFFFFLL;
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    goto LABEL_45;
  if ( (a3 & 1) == 0 )
    goto LABEL_37;
  if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
  {
LABEL_45:
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
      && (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeBalanceSetManager
      && a4 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      return 3221225477LL;
    }
    v10 = 32;
    *(_BYTE *)(a6 + 17) = 1;
    goto LABEL_49;
  }
  if ( (a3 & 1) != 0 )
    goto LABEL_50;
LABEL_37:
  if ( !a3 )
    goto LABEL_49;
  v19 = *(unsigned __int16 *)(a3 + 368);
  switch ( v19 )
  {
    case 16:
      v20 = &ExpInterlockedPopEntrySListFault;
      break;
    case 35:
      v20 = (void *)KeUserPopEntrySListFaultWow64;
      break;
    case 51:
      v20 = (void *)KeUserPopEntrySListFault;
      break;
    default:
      goto LABEL_49;
  }
  if ( *(void **)(a3 + 360) == v20 )
    goto LABEL_45;
LABEL_49:
  if ( (a3 & 1) == 0 )
  {
LABEL_56:
    if ( (v10 & 0x20) != 0 )
    {
      v6 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
        v18 = 0x7FFFFFFFFFLL;
      }
      else
      {
        _m_prefetchw(&dword_14034EE88);
        v22 = dword_14034EE88 & 0x7FFFFFFF;
        if ( v22 != _InterlockedCompareExchange(
                      &dword_14034EE88,
                      (dword_14034EE88 & 0x7FFFFFFF) + 1,
                      dword_14034EE88 & 0x7FFFFFFF) )
        {
          ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
          v18 = 0x7FFFFFFFFFLL;
        }
      }
    }
    else
    {
      LOBYTE(v6) = 17;
    }
    *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v6;
    goto LABEL_63;
  }
LABEL_50:
  if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    goto LABEL_56;
  if ( a4 < 0xFFFF800000000000uLL )
    return 192LL;
  v6 = KeGetCurrentIrql();
  *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v6;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
    v18 = 0x7FFFFFFFFFLL;
  }
  else
  {
    _m_prefetchw(&dword_14034EE88);
    v21 = dword_14034EE88 & 0x7FFFFFFF;
    if ( v21 != _InterlockedCompareExchange(
                  &dword_14034EE88,
                  (dword_14034EE88 & 0x7FFFFFFF) + 1,
                  dword_14034EE88 & 0x7FFFFFFF) )
    {
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
      v18 = 0x7FFFFFFFFFLL;
    }
  }
LABEL_63:
  v23 = 0;
  v24 = (ULONG_PTR **)a5;
  v25 = (ULONG_PTR **)a5;
  do
  {
    PteShadow = **v25;
    if ( (unsigned __int64)(*v25 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(*v25, **v25);
    if ( (PteShadow & 1) == 0 )
    {
      if ( (_BYTE)v6 == 17 )
        KeBugCheckEx(0x50u, v9, a1, a3, 2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
        __writecr8((unsigned __int8)v6);
        return 3221225477LL;
      }
      _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EE88);
      __writecr8((unsigned __int8)v6);
      return 3221225477LL;
    }
    ++v23;
    ++v25;
  }
  while ( v23 < 3 );
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v27 = *(_QWORD **)(a5 + 24);
    *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v27;
    v28 = *v27;
    if ( (unsigned __int64)(v27 + 0x12090482600LL) <= 0x7F8 )
      LOBYTE(v28) = MiReadPteShadow(v27, *v27);
    v29 = MmHighestUserAddress;
    v30 = v68;
    if ( v68 > (unsigned __int64)MmHighestUserAddress )
    {
      if ( v68 + 0x70000000000LL > v18 )
      {
        if ( qword_14034EE00 && v68 >= qword_14034EE00 && v68 < qword_14034EE00 + (qword_14034EDE0 << 21) )
        {
          v31 = v10 | 8;
        }
        else if ( v68 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
               || qword_14034EDB0
               && v68 >= qword_14034EDB0
               && v68 < qword_14034EDB0 + (qword_14034ED90 << 21)
               && (*(_BYTE *)(48 * ((*(_QWORD *)(((v68 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                            - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
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
    if ( *(_BYTE *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) != 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
        v30 = v68;
        v27 = *(_QWORD **)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
      else
      {
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
      __writecr8(*(unsigned __int8 *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      v29 = MmHighestUserAddress;
    }
    if ( (v28 & 1) != 0 )
    {
      if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      {
        MiUpdatePfnPriorityByPte((unsigned __int64)v27, *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7);
        return 0LL;
      }
      *v7 = v31 & 1;
      if ( (v31 & 1) != 0 )
      {
        v32 = (volatile signed __int32 *)&CurrentThread->ApcState.Process[1].IdealNode[8];
      }
      else if ( (v31 & 2) != 0 )
      {
        Process = CurrentThread->ApcState.Process;
        v34 = Process[1].ActiveProcessors.Bitmap[2];
        if ( !v34 || Process == PsInitialSystemProcess )
        {
          v35 = -805306362;
          if ( (v31 & 0x20) != 0 )
            return (unsigned int)-1073741819;
          return v35;
        }
        v32 = (volatile signed __int32 *)(v34 + 2968);
      }
      else if ( (v31 & 8) != 0 )
      {
        v32 = dword_14034FD40;
      }
      else
      {
        v32 = dword_14034FE40;
        if ( (v31 & 4) == 0 )
          v32 = dword_14034FF40;
      }
      v36 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v32);
      }
      else
      {
        v37 = 0;
        if ( _interlockedbittestandset(v32, 0x1Fu) )
          v37 = ExpWaitForSpinLockExclusiveAndAcquire(v32);
        for ( i = *v32; (*v32 & 0xBFFFFFFF) != 0x80000000; i = *v32 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(v32, i | 0x40000000, i);
          if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v37);
        }
      }
      if ( !*v7 && *(_BYTE *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) != 17 )
      {
        v31 |= 0x40u;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
        }
        else
        {
          _m_prefetchw(&dword_14034EE88);
          v39 = dword_14034EE88 & 0x7FFFFFFF;
          if ( v39 != _InterlockedCompareExchange(
                        &dword_14034EE88,
                        (dword_14034EE88 & 0x7FFFFFFF) + 1,
                        dword_14034EE88 & 0x7FFFFFFF) )
            ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
        }
      }
      v40 = 0;
      if ( (((v31 >> 1) & 1) == 0 || v68 + 0x70000000000LL <= 0x7FFFFFFFFFLL)
        && (((v31 >> 1) & 1) != 0 || v68 + 0x70000000000LL > 0x7FFFFFFFFFLL) )
      {
        v41 = 0;
        v42 = 0x12090482600LL;
        do
        {
          v43 = **v24;
          if ( (unsigned __int64)&(*v24)[v42] <= 0x7F8 )
            v43 = MiReadPteShadow(*v24, **v24);
          if ( (v43 & 1) == 0 )
            goto LABEL_137;
          ++v41;
          ++v24;
        }
        while ( v41 < 3 );
        if ( (v43 & 0x80u) == 0LL )
        {
          v44 = *(volatile __int64 **)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v45 = *v44;
          if ( (unsigned __int64)&v44[v42] <= 0x7F8 )
            v45 = MiReadPteShadow(*(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), *v44);
          if ( (v31 & 0x40) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
              v40 = 0;
            }
            else
            {
              _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
              _InterlockedDecrement(&dword_14034EE88);
            }
          }
          if ( (v45 & 1) != 0 )
          {
            if ( (a1 & 2) != 0 )
            {
              if ( (v45 & 0x800) == 0 )
              {
                if ( (v45 & 0x200) == 0 )
                  KeBugCheckEx(0xBEu, v9, v45, a3, 0xBuLL);
                MiCopyOnWriteEx(v9, v44, -1LL, v36, v40);
                MiUnlockWorkingSetExclusive(v32, v36);
                return 0LL;
              }
            }
            else
            {
              MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, v9, a3, v45, 2);
            }
            MiNoFaultFound(a1, (_DWORD)v44, v9, (_DWORD)v32, 1, ZeroPte);
            MiUnlockWorkingSetExclusive(v32, v36);
            return 0LL;
          }
LABEL_141:
          MiUnlockWorkingSetExclusive(v32, v36);
          return 0LL;
        }
        if ( (a1 & 2) != 0 && (v43 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v9, v43, a3, 0xDuLL);
        MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, v9, a3, v43, 1);
      }
LABEL_137:
      if ( (v31 & 0x40) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
          MiUnlockWorkingSetExclusive(v32, v36);
          return 0LL;
        }
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
      goto LABEL_141;
    }
    if ( v9 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
    {
      if ( (v31 & 0x20) == 0 )
      {
        if ( v30 > (unsigned __int64)v29 )
        {
          if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
            KeBugCheckEx(0x50u, v9, a1, a3, 9uLL);
          return 0LL;
        }
        return 192LL;
      }
      return 3221225477LL;
    }
    if ( (v31 & 2) != 0 )
    {
      v46 = CurrentThread->ApcState.Process;
      v47 = v46[1].ActiveProcessors.Bitmap[2];
      if ( !v47 || v46 == PsInitialSystemProcess )
      {
        if ( (v31 & 0x20) == 0 )
        {
          if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
            KeBugCheckEx(0x50u, v9, a1, a3, 3uLL);
          return 0LL;
        }
        return 3221225477LL;
      }
      v48 = (volatile signed __int32 *)(v47 + 2968);
    }
    else if ( (v31 & 8) != 0 )
    {
      v48 = dword_14034FD40;
    }
    else
    {
      v48 = dword_14034FE40;
      if ( (v31 & 4) == 0 )
        v48 = dword_14034FF40;
    }
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v48);
    }
    else
    {
      v50 = 0;
      if ( _interlockedbittestandset(v48, 0x1Fu) )
        v50 = ExpWaitForSpinLockExclusiveAndAcquire(v48);
      for ( j = *v48; (*v48 & 0xBFFFFFFF) != 0x80000000; j = *v48 )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedCompareExchange(v48, j | 0x40000000, j);
        if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v50);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) != 17 )
    {
      LOBYTE(v31) = v31 | 0x40;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
      }
      else
      {
        _m_prefetchw(&dword_14034EE88);
        v52 = dword_14034EE88 & 0x7FFFFFFF;
        if ( v52 != _InterlockedCompareExchange(
                      &dword_14034EE88,
                      (dword_14034EE88 & 0x7FFFFFFF) + 1,
                      dword_14034EE88 & 0x7FFFFFFF) )
          ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
      }
    }
    BugCheckParameter4 = 0LL;
    v54 = 0x90482413000LL;
    LODWORD(v55) = 0;
    do
    {
      v56 = **v24;
      v57 = (unsigned __int64)(*v24 + 0x12090482600LL);
      if ( v57 <= 0x7F8 )
      {
        v56 = MiReadPteShadow(*v24, **v24);
        v54 = 0x90482413000LL;
      }
      if ( (v56 & 1) == 0 )
        goto LABEL_208;
      v55 = (unsigned int)(v55 + 1);
      ++v24;
    }
    while ( (unsigned int)v55 < 3 );
    if ( (v56 & 0x80u) != 0LL )
    {
      if ( (a1 & 2) != 0 && (v56 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, a2, v56, a3, 0x10uLL);
      MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v56, 6);
LABEL_208:
      if ( (v31 & 0x40) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
          MiUnlockWorkingSetExclusive(v48, v49);
          return 0LL;
        }
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
      goto LABEL_271;
    }
    v58 = *(ULONG_PTR **)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v59 = *v58;
    if ( (unsigned __int64)(v58 + 0x12090482600LL) <= 0x7F8 )
      v59 = MiReadPteShadow(*(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), *v58);
    if ( (v31 & 0x40) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
        BugCheckParameter4 = 0LL;
      }
      else
      {
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
    }
    if ( (v59 & 1) != 0 )
    {
LABEL_271:
      MiUnlockWorkingSetExclusive(v48, v49);
      return 0LL;
    }
    if ( (v59 & 0x400) != 0 )
    {
      if ( (v59 & 2) != 0 )
      {
        if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          v60 = MiResolveDemandZeroFault(0, a2, a3, (_DWORD)v58, (__int64)v48, v49, BugCheckParameter4);
          MiUnlockWorkingSetExclusive(v48, v49);
          return v60;
        }
        goto LABEL_271;
      }
      PrototypePteDirect = MiGetPrototypePteDirect(v59, v57, v54, v55);
      if ( (v31 & 2) != 0 )
      {
        v62 = a2;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v59) )
        {
          PrototypePteDirect = MiCheckVirtualAddress(a2, v7 + 1, v7 + 6);
          if ( !PrototypePteDirect )
          {
            if ( (a3 & 1) != 0 )
            {
              if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                goto LABEL_269;
              if ( (a3 & 1) != 0 )
              {
                if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                  goto LABEL_269;
                if ( (a3 & 1) != 0 )
                {
LABEL_232:
                  MiUnlockWorkingSetExclusive(v48, v49);
                  return 3489660934LL;
                }
              }
            }
            if ( (unsigned __int8)KeInvalidAccessAllowed(a3) != 1 )
              goto LABEL_232;
LABEL_269:
            MiUnlockWorkingSetExclusive(v48, v49);
            return 3221225477LL;
          }
        }
LABEL_257:
        if ( (a1 & 2) == 0 || PrototypePteDirect || (v31 & 2) != 0 || ((v59 >> 5) & 4) != 0 )
        {
          *(_QWORD *)a6 = v48;
          *(_BYTE *)(a6 + 16) = v49;
          *(_QWORD *)(a6 + 8) = PrototypePteDirect;
          return 3221225494LL;
        }
        if ( (a3 & 1) == 0 )
          goto LABEL_266;
        if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
          goto LABEL_269;
        if ( (a3 & 1) == 0 )
          goto LABEL_266;
        if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_269;
        if ( (a3 & 1) == 0 )
        {
LABEL_266:
          if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
            goto LABEL_269;
        }
        KeBugCheckEx(0xBEu, v62, v59, a3, 0xEuLL);
      }
LABEL_256:
      v62 = a2;
      goto LABEL_257;
    }
    if ( (v59 & 0x800) == 0 && (v59 & 0x3E0) == 0 )
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_240;
      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
        goto LABEL_269;
      if ( (a3 & 1) == 0 )
        goto LABEL_240;
      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
        goto LABEL_269;
      if ( (a3 & 1) == 0 )
      {
LABEL_240:
        if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
          goto LABEL_269;
      }
      KeBugCheckEx(0x50u, a2, a1, a3, BugCheckParameter4);
    }
    v63 = (v59 >> 5) & 0x1F;
    if ( v63 == 24 )
      goto LABEL_246;
    if ( v63 == 31 )
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_251;
      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
      {
LABEL_246:
        if ( (a3 & 1) != 0 )
        {
          if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
            goto LABEL_252;
          if ( (a3 & 1) != 0 )
          {
            if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
            {
              if ( (a3 & 1) != 0 )
                goto LABEL_286;
              goto LABEL_251;
            }
LABEL_252:
            if ( v63 == 24 || (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
              goto LABEL_269;
            goto LABEL_255;
          }
        }
LABEL_251:
        if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
          goto LABEL_252;
LABEL_286:
        KeBugCheckEx(0x50u, a2, a1, a3, 1uLL);
      }
    }
LABEL_255:
    PrototypePteDirect = 0LL;
    goto LABEL_256;
  }
  if ( (a1 & 2) != 0 && (PteShadow & 0x800) == 0 )
    KeBugCheckEx(0xBEu, v9, PteShadow, a3, 0xCuLL);
  MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, v9, a3, PteShadow, 4);
  if ( (_BYTE)v6 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
      __writecr8((unsigned __int8)v6);
      return 0LL;
    }
    _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034EE88);
    __writecr8((unsigned __int8)v6);
  }
  return 0LL;
}
