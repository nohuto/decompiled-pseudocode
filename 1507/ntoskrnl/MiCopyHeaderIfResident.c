/*
 * XREFs of MiCopyHeaderIfResident @ 0x1400E0408
 * Callers:
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePageAttributeStamp @ 0x1400E0280 (MiUpdatePageAttributeStamp.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400E2554 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // ebx
  __int64 *v7; // rbx
  __int64 v8; // rbx
  char v9; // dl
  unsigned __int64 *v10; // r14
  bool v11; // zf
  int *v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // rsi
  char v16; // al
  unsigned __int64 PteShadow; // rdx
  __int64 v18; // r10
  unsigned __int64 v19; // r9
  ULONG_PTR v20; // rdx
  int v21; // r14d
  __int64 v22; // rsi
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
    }
    else
    {
      v5 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
    v7 = *(__int64 **)(a1 + 40);
    if ( !v7 || (v8 = *v7) == 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        v12 = &dword_14034E780;
LABEL_63:
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
      }
      else
      {
        dword_14034E780 = 0;
      }
      goto LABEL_65;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    __writecr8(CurrentIrql);
  }
  v9 = BYTE6(PerfGlobalGroupMask);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    v9 = BYTE6(PerfGlobalGroupMask);
  }
  else
  {
    dword_14034E780 = 0;
  }
  if ( (*(_DWORD *)(v8 + 56) & 3) != 0 || (v10 = *(unsigned __int64 **)(v8 + 128)) == 0LL )
  {
    v11 = (v9 & 1) == 0;
    goto LABEL_25;
  }
  v13 = MiTryLockLeafAndContainingPagesAtDpc(*(_QWORD *)(v8 + 128), &v25, 0LL);
  if ( !v13 )
  {
    v11 = (BYTE6(PerfGlobalGroupMask) & 1) == 0;
LABEL_25:
    if ( !v11 )
    {
      v12 = (int *)(v8 + 72);
      goto LABEL_63;
    }
    *(_DWORD *)(v8 + 72) = 0;
LABEL_65:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v15 = v25;
  if ( !v25 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8 + 72, retaddr);
    else
      *(_DWORD *)(v8 + 72) = 0;
    __writecr8(2uLL);
LABEL_35:
    MiUnlockProtoPoolPage(v13, CurrentIrql);
    return 0LL;
  }
  v16 = *(_BYTE *)(v25 + 34);
  if ( (v16 & 0x20) != 0 || (v16 & 0xC0) != 0x40 || (*(_BYTE *)(v25 + 35) & 0x40) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8 + 72, retaddr);
    else
      *(_DWORD *)(v8 + 72) = 0;
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_35;
  }
  PteShadow = *v10;
  v18 = 0x90482413000LL;
  v19 = 2040LL;
  if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v10, PteShadow);
  v26 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    if ( (unsigned __int64)&v26 + v18 <= v19 )
      PteShadow = MiReadPteShadow(&v26, PteShadow);
    v20 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
    v21 = 0;
  }
  else
  {
    v21 = 1;
    v20 = ((unsigned __int64)MiReverseSwizzleInvalidPte(PteShadow, PteShadow, v14, v19) >> 12) & 0xFFFFFFFFFLL;
  }
  v22 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8 + 72, retaddr);
    else
      *(_DWORD *)(v8 + 72) = 0;
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_35;
  }
  MiCopyPage(a2, v20, 0LL, 4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8 + 72, retaddr);
  else
    *(_DWORD *)(v8 + 72) = 0;
  __writecr8(2uLL);
  if ( v21 == 1 )
    MiUpdatePageAttributeStamp(v25);
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v13, CurrentIrql);
  return 1LL;
}
