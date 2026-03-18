/*
 * XREFs of MiSystemFault @ 0x1400097D0
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x140008168 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     MiNoFaultFound @ 0x14000A164 (MiNoFaultFound.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiUpdatePfnPriorityByPte @ 0x14007C6B0 (MiUpdatePfnPriorityByPte.c)
 *     KeInvalidAccessAllowed @ 0x1400E5FF0 (KeInvalidAccessAllowed.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemFault(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3, unsigned __int64 a4, _QWORD *a5, __int64 a6)
{
  KIRQL *v6; // rbp
  __int64 v7; // r15
  int v11; // edi
  bool v12; // zf
  int v13; // eax
  void *v14; // rax
  _QWORD *v15; // rsi
  unsigned int v16; // ebx
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  PVOID v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r8
  unsigned int v24; // edi
  volatile signed __int32 *v25; // r14
  unsigned __int8 CurrentIrql; // r13
  unsigned int v27; // ebx
  __int64 v28; // rdx
  unsigned int j; // ebx
  __int64 v30; // rax
  __int64 v31; // rsi
  ULONG_PTR v32; // rbx
  __int64 v33; // r10
  __int64 v34; // r9
  struct _KPROCESS *v36; // rax
  unsigned __int64 v37; // r14
  volatile LONG *v38; // r14
  int v39; // eax
  unsigned int i; // ebx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rbx
  KIRQL v44; // al
  _QWORD *v45; // rbx
  KIRQL v46; // dl
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned int v49; // ebx
  ULONG_PTR v50; // rcx
  unsigned __int32 v51; // eax
  struct _KPROCESS *v52; // rax
  unsigned __int64 v53; // r14
  unsigned int v54; // ecx
  __int64 v55; // rax
  ULONG_PTR v56; // rcx
  ULONG_PTR v57; // rcx
  _BYTE v58[96]; // [rsp+B0h] [rbp+B0h] BYREF

  v6 = (KIRQL *)((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL);
  v7 = 0LL;
  v11 = 0;
  if ( (a1 & 0x100000000000000LL) != 0 )
  {
    if ( a2 + 0x98000000000LL > 0x7FFFFFFFFFLL
      || a4 > (unsigned __int64)MmHighestUserAddress && a4 + 0xA8000000000LL > 0xFFFFFFFFFFLL )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( MEMORY[0xFFFFF58010804318] && (a2 + 0xA7FF0000000LL <= 0x803FFF || a2 + 0x9053FF80000LL <= 0x401F)
    || a2 + 0xA8000000000LL <= 0xFFFFFFF
    || a2 + 0x90540000000LL <= 0x7FFFF
    || (a2 & 0xFFFFFFFFFFFFF000uLL) == 0xFFFFF58010804000uLL )
  {
    return 192LL;
  }
  v12 = dword_1402FEA44 == 0;
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = KeGetCurrentThread();
  if ( v12 )
    goto LABEL_9;
  v44 = ExAcquireSpinLockShared(&dword_1402FEA40);
  v45 = (_QWORD *)qword_1402FEA48;
  v46 = v44;
  if ( !qword_1402FEA48 )
    goto LABEL_114;
  v47 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  while ( 1 )
  {
    v48 = v45[3];
    if ( v47 <= v48 )
      break;
    v45 = (_QWORD *)v45[1];
LABEL_112:
    if ( !v45 )
      goto LABEL_113;
  }
  if ( v47 < v48 )
  {
    v45 = (_QWORD *)*v45;
    goto LABEL_112;
  }
LABEL_113:
  if ( v45 && v45[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v45 = 0LL;
LABEL_114:
  ExReleaseSpinLockShared(&dword_1402FEA40, v46);
  if ( v45 )
    return 3221225477LL;
LABEL_9:
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a3 & 1;
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
LABEL_98:
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
      && (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeBalanceSetManager
      && a4 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      return 3221225477LL;
    }
    v11 = 32;
    *(_BYTE *)(a6 + 17) = 1;
    goto LABEL_15;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      goto LABEL_98;
    if ( (a3 & 1) != 0 )
      goto LABEL_102;
  }
  if ( !a3 )
    goto LABEL_15;
  v13 = *(unsigned __int16 *)(a3 + 368);
  if ( v13 == 16 )
  {
    v14 = &ExpInterlockedPopEntrySListFault;
  }
  else
  {
    if ( v13 != 51 )
      goto LABEL_15;
    v14 = (void *)KeUserPopEntrySListFault;
  }
  if ( *(void **)(a3 + 360) == v14 )
    goto LABEL_98;
LABEL_15:
  if ( (a3 & 1) != 0 )
  {
LABEL_102:
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      if ( a4 >= 0xFFFF800000000000uLL )
        goto LABEL_104;
      return 192LL;
    }
  }
  if ( (v11 & 0x20) != 0 )
LABEL_104:
    *v6 = ExAcquireSpinLockShared(&dword_1402FE9C8);
  else
    *v6 = 17;
  v15 = a5;
  v16 = 0;
  v17 = a5;
  do
  {
    v18 = MI_READ_PTE_LOCK_FREE(*v17);
    if ( (v18 & 1) == 0 )
    {
      if ( *v6 == 17 )
        KeBugCheckEx(0x50u, a2, a1, a3, 2uLL);
      ExReleaseSpinLockShared(&dword_1402FE9C8, *v6);
      return 3221225477LL;
    }
    ++v16;
    ++v17;
  }
  while ( v16 < 3 );
  if ( (v18 & 0x80u) != 0LL )
  {
    if ( (a1 & 2) != 0 && (v18 & 0x800) == 0 )
      KeBugCheckEx(0xBEu, a2, v18, a3, 0xCuLL);
    MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v18, 4u);
    if ( *v6 != 17 )
      ExReleaseSpinLockShared(&dword_1402FE9C8, *v6);
    return 0LL;
  }
  v19 = a5[3];
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v19;
  v20 = MI_READ_PTE_LOCK_FREE(v19);
  v21 = MmHighestUserAddress;
  v22 = v20;
  v23 = 0x7FFFFFFFFFLL;
  if ( a4 <= (unsigned __int64)MmHighestUserAddress )
  {
    v24 = v11 | 1;
  }
  else if ( a4 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
  {
    v24 = v11 | 2;
  }
  else if ( qword_1402FE940 && a4 >= qword_1402FE940 && a4 < qword_1402FE940 + (qword_1402FE920 << 21) )
  {
    v24 = v11 | 8;
  }
  else if ( a4 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
         || qword_1402FE8F0
         && a4 >= qword_1402FE8F0
         && a4 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
         && (*(_BYTE *)(48 * ((*(_QWORD *)(((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
  {
    v24 = v11 | 4;
  }
  else
  {
    v24 = v11 | 0x10;
  }
  if ( *v6 != 17 )
  {
    ExReleaseSpinLockShared(&dword_1402FE9C8, *v6);
    v21 = MmHighestUserAddress;
    v23 = 0x7FFFFFFFFFLL;
  }
  if ( (v22 & 1) != 0 )
  {
    if ( *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8) && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriorityByPte(v22, *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0x7FFFFFFFFFLL);
      return 0LL;
    }
    if ( (v24 & 1) != 0 )
    {
      v38 = (volatile LONG *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 184LL)
                            + 1280LL);
    }
    else if ( (v24 & 2) != 0 )
    {
      v52 = *(struct _KPROCESS **)(*(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 184LL);
      v53 = v52[1].ActiveProcessors.Bitmap[2];
      if ( !v53 || v52 == PsInitialSystemProcess )
      {
        v54 = -805306362;
        if ( (v24 & 0x20) != 0 )
          return (unsigned int)-1073741819;
        return v54;
      }
      v38 = (volatile LONG *)(v53 + 2968);
    }
    else if ( (v24 & 8) != 0 )
    {
      v38 = &dword_1402FF880;
    }
    else
    {
      v38 = &dword_1402FF980;
      if ( (v24 & 4) == 0 )
        v38 = &dword_1402FFA80;
    }
    *(_BYTE *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = ExAcquireSpinLockExclusive(v38);
    if ( (v24 & 1) == 0 && *v6 != 17 )
    {
      v24 |= 0x40u;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE9C8);
    }
    v39 = (v24 >> 1) & 1;
    if ( v39 && a4 + 0x70000000000LL > 0x7FFFFFFFFFLL || !v39 && a4 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      if ( (v24 & 0x40) == 0 )
        goto LABEL_92;
    }
    else
    {
      for ( i = 0; i < 3; ++i )
      {
        v41 = MI_READ_PTE_LOCK_FREE(*v15);
        if ( (v41 & 1) == 0 )
          goto LABEL_179;
        ++v15;
      }
      if ( (v41 & 0x80u) == 0LL )
      {
        v42 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v43 = MI_READ_PTE_LOCK_FREE(v42);
        if ( (v24 & 0x40) != 0 )
          ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
        if ( (v43 & 1) != 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            if ( (v43 & 0x800) == 0 )
            {
              if ( (v43 & 0x200) == 0 )
                KeBugCheckEx(0xBEu, a2, v43, a3, 0xBuLL);
              MiCopyOnWriteEx(a2, 0);
              MiUnlockWorkingSetExclusive(
                v38,
                *(unsigned __int8 *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 1));
              return 0LL;
            }
          }
          else
          {
            MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v43, 2u);
          }
          MiNoFaultFound(a1, v42, a2, (_DWORD)v38, 1, ZeroPte);
        }
LABEL_92:
        MiUnlockWorkingSetExclusive(v38, *(unsigned __int8 *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 1));
        return 0LL;
      }
      if ( (a1 & 2) != 0 && (v41 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, a2, v41, a3, 0xDuLL);
      MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v41, 1u);
LABEL_179:
      if ( (v24 & 0x40) == 0 )
        goto LABEL_92;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
    goto LABEL_92;
  }
  if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
  {
    if ( (v24 & 0x20) != 0 )
      return 3221225477LL;
    if ( a4 <= (unsigned __int64)v21 )
      return 192LL;
    if ( !*(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8)
      || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      KeBugCheckEx(0x50u, a2, a1, a3, 9uLL);
    }
    return 0LL;
  }
  if ( (v24 & 2) == 0 )
  {
    if ( (v24 & 8) != 0 )
    {
      v25 = &dword_1402FF880;
    }
    else
    {
      v25 = &dword_1402FF980;
      if ( (v24 & 4) == 0 )
        v25 = &dword_1402FFA80;
    }
    goto LABEL_37;
  }
  v36 = *(struct _KPROCESS **)(*(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 184LL);
  v37 = v36[1].ActiveProcessors.Bitmap[2];
  if ( !v37 || v36 == PsInitialSystemProcess )
  {
    if ( (v24 & 0x20) != 0 )
      return 3221225477LL;
    if ( !*(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8)
      || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      KeBugCheckEx(0x50u, a2, a1, a3, 3uLL);
    }
    return 0LL;
  }
  v25 = (volatile signed __int32 *)(v37 + 2968);
LABEL_37:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, CurrentIrql, 0x7FFFFFFFFFLL);
  }
  else
  {
    v27 = 0;
    if ( _interlockedbittestandset(v25, 0x1Fu) )
      v27 = ExpWaitForSpinLockExclusiveAndAcquire(v25, CurrentIrql, 0x7FFFFFFFFFLL);
    v28 = *(unsigned int *)v25;
    if ( (*v25 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v28 & 0x40000000) == 0 )
        {
          v51 = _InterlockedCompareExchange(v25, v28 | 0x40000000, v28);
          v12 = (_DWORD)v28 == v51;
          v28 = v51;
          if ( !v12 )
            continue;
        }
        if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v27, v28, v23);
        v28 = *(unsigned int *)v25;
      }
      while ( (v28 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  if ( *v6 != 17 )
  {
    LOBYTE(v24) = v24 | 0x40;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE9C8);
  }
  for ( j = 0; j < 3; ++j )
  {
    v30 = MI_READ_PTE_LOCK_FREE(*v15);
    if ( (v30 & 1) == 0 )
      goto LABEL_198;
    ++v15;
  }
  if ( (v30 & 0x80u) != 0LL )
  {
    if ( (a1 & 2) != 0 && (v30 & 0x800) == 0 )
      KeBugCheckEx(0xBEu, a2, v30, a3, 0x10uLL);
    MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v30, 6u);
LABEL_198:
    if ( (v24 & 0x40) != 0 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
    goto LABEL_154;
  }
  v31 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  v32 = MI_READ_PTE_LOCK_FREE(v31);
  if ( (v24 & 0x40) != 0 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
  if ( (v32 & 1) != 0 )
  {
LABEL_154:
    MiUnlockWorkingSetExclusive(v25, CurrentIrql);
    return 0LL;
  }
  if ( (v32 & 0x400) == 0 )
  {
    v33 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v34 = (v32 >> 5) & 0x1F;
    if ( ((v32 >> 5) & 0x1F) == 0 && (v32 & 0x800) == 0 )
    {
      v56 = a3;
      if ( v33 )
      {
        if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_226;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
      {
        goto LABEL_226;
      }
      KeBugCheckEx(0x50u, a2, a1, v56, 0LL);
    }
    if ( v34 == 24 )
    {
      v50 = a3;
      goto LABEL_120;
    }
    if ( v34 != 31 )
      goto LABEL_54;
    v50 = a3;
    if ( !v33 )
      goto LABEL_218;
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      goto LABEL_54;
LABEL_120:
    if ( v33 )
    {
      if ( *(_BYTE *)(v50 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v50 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
LABEL_219:
        KeBugCheckEx(0x50u, a2, a1, v50, 1uLL);
    }
    else
    {
LABEL_218:
      if ( (unsigned __int8)KeInvalidAccessAllowed(v50) != 1 )
        goto LABEL_219;
    }
    if ( v34 == 24 || !v33 || *(_BYTE *)(v50 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
LABEL_226:
      MiUnlockWorkingSetExclusive(v25, CurrentIrql);
      return 3221225477LL;
    }
LABEL_54:
    if ( (a1 & 2) != 0 && !v7 && (v24 & 2) == 0 && ((v32 >> 5) & 4) == 0 )
    {
      v57 = a3;
      if ( v33 )
      {
        if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_226;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
      {
        goto LABEL_226;
      }
      KeBugCheckEx(0xBEu, a2, v32, v57, 0xEuLL);
    }
    *(_QWORD *)a6 = v25;
    *(_BYTE *)(a6 + 16) = CurrentIrql;
    *(_QWORD *)(a6 + 8) = v7;
    return 3221225494LL;
  }
  if ( (v32 & 2) != 0 )
  {
    if ( !*(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8)
      || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      v49 = MiResolveDemandZeroFault(0, a2, a3, v31, (__int64)v25, CurrentIrql, 0);
      MiUnlockWorkingSetExclusive(v25, CurrentIrql);
      return v49;
    }
    goto LABEL_154;
  }
  v7 = (__int64)v32 >> 16;
  if ( (v24 & 2) == 0 || HIDWORD(v32) != 0xFFFFFFFF )
  {
    v33 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    goto LABEL_54;
  }
  v55 = MiCheckVirtualAddress(a2, v6 + 4, v6 + 32);
  v33 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v7 = v55;
  if ( v55 )
    goto LABEL_54;
  if ( v33 )
  {
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      goto LABEL_226;
  }
  else if ( (unsigned __int8)KeInvalidAccessAllowed(a3) == 1 )
  {
    goto LABEL_226;
  }
  MiUnlockWorkingSetExclusive(v25, CurrentIrql);
  return 3489660934LL;
}
