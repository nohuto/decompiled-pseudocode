/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x140031070
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140474640 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiSetProtectionOnTransitionPte @ 0x140129CD0 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiUpdatePfnProtection @ 0x140224EF8 (MiUpdatePfnProtection.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned int updated; // r14d
  volatile signed __int32 *v14; // r15
  __int64 CurrentIrql; // rbp
  signed __int32 i; // edx
  unsigned __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 ProtoPteAddress; // rax
  __int64 *v27; // r9
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 PrototypePteVadLookup; // rax
  unsigned __int64 v31; // r8
  int v32; // eax
  int v33; // [rsp+30h] [rbp-138h]
  unsigned __int64 v34; // [rsp+38h] [rbp-130h] BYREF
  __int64 v35; // [rsp+40h] [rbp-128h]
  unsigned __int64 v36; // [rsp+48h] [rbp-120h]
  ULONG_PTR v37; // [rsp+50h] [rbp-118h]
  _BYTE v38[8]; // [rsp+58h] [rbp-110h] BYREF
  int v39; // [rsp+60h] [rbp-108h] BYREF
  __int16 v40; // [rsp+64h] [rbp-104h]
  __int64 v41; // [rsp+68h] [rbp-100h]
  __int64 v42; // [rsp+70h] [rbp-F8h]
  __int64 v43; // [rsp+78h] [rbp-F0h]

  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v9 = 0;
  v10 = 4;
  v37 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v37;
  v33 = 0;
  v12 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = 20LL;
  updated = 1;
  v36 = v12;
  v39 = 1;
  v14 = (volatile signed __int32 *)(v7 + 1272);
  v40 = 0;
  v42 = 0LL;
  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7 + 1272);
  }
  else
  {
    if ( _interlockedbittestandset(v14, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v7 + 1272);
    for ( i = *v14; (*v14 & 0xBFFFFFFF) != 0x80000000; i = *v14 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v14, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    v9 = 0;
  }
  MiMakeSystemAddressValid(v37, 1);
  if ( v37 <= v12 )
  {
    v18 = 0xFFFFFFFFFLL;
    v19 = 0x58000000000LL;
    v20 = 0x200000000000000LL;
    do
    {
      if ( (v11 & 0xFFF) == 0 )
      {
        MiFlushTbList(&v39);
        MiMakeSystemAddressValid(v11, 1);
        v20 = 0x200000000000000LL;
        v18 = 0xFFFFFFFFFLL;
        v19 = 0x58000000000LL;
      }
      v21 = *(_QWORD *)v11;
      v22 = v11 + 0x90482413000LL;
      if ( v11 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v17)
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v17 )
        {
          v23 = *(_QWORD *)(v17 + 8 * ((v11 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v23 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      v34 = v21;
      if ( !v21 )
        goto LABEL_61;
      if ( (v21 & 1) != 0 )
      {
        if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
          v21 = MiReadPteShadow(&v34, v21);
        v24 = v18 & (v21 >> 12);
        v25 = 48 * v24 - v19;
        if ( *(_WORD *)(v25 + 32) > 1u && (updated & 7) != 4 )
          goto LABEL_61;
        if ( (v20 & *(_QWORD *)(v25 + 40)) != 0 )
        {
          ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, v38);
          v17 = *(_QWORD *)(v25 + 8) | 0x8000000000000000uLL;
          if ( v17 != ProtoPteAddress
            || (v27 = (__int64 *)(MiLocateWsle((__int64)(v11 << 25) >> 16) * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL),
                v28 = *v27,
                v29 = ((unsigned __int64)*v27 >> 4) & 0x1F,
                v29 != v10)
            && (v29 || (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v25 + 16) != v10) )
          {
            LOBYTE(CurrentIrql) = v35;
LABEL_61:
            v12 = v11 - 8;
            v10 = 1;
            v11 = v37;
            v9 = -1073741755;
            v36 = v12;
            v33 = -1073741755;
            updated = 4;
            goto LABEL_54;
          }
          LOBYTE(CurrentIrql) = v35;
          *v27 = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)(16 * updated)) & 0x1F0;
        }
        else
        {
          if ( ((*(_DWORD *)(v25 + 16) >> 5) & 0x1F) != (unsigned __int64)v10 )
            goto LABEL_61;
          updated = MiUpdatePfnProtection(a2, 48 * v24 - v19, updated);
        }
        MiRevertValidPte(a2, v11, updated, v24, (__int64)&v39);
        v12 = v36;
        v11 += 8LL;
      }
      else
      {
        if ( (v21 & 0x400) != 0 )
        {
          if ( (updated & 7) != 4 )
            goto LABEL_61;
          if ( !(unsigned int)MiIsPrototypePteVadLookup(v21) )
          {
            PrototypePteVadLookup = MiMakePrototypePteVadLookup(updated);
            v34 = PrototypePteVadLookup;
            *(_QWORD *)v11 = PrototypePteVadLookup;
            if ( v31 <= 0x7F8 )
              MiWritePteShadow(v11, PrototypePteVadLookup);
            goto LABEL_61;
          }
          goto LABEL_57;
        }
        if ( (v21 & 0x800) == 0 )
        {
          if ( ((v21 >> 5) & 0x1F) != v10 )
            goto LABEL_61;
LABEL_57:
          v17 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
          v34 = v17;
          *(_QWORD *)v11 = v17;
          if ( v22 <= 0x7F8 )
            MiWritePteShadow(v11, v17);
LABEL_59:
          v11 += 8LL;
          goto LABEL_53;
        }
        v32 = MiSetProtectionOnTransitionPte(a2, v11, updated, (updated & 7) == 4);
        if ( !v32 )
          goto LABEL_59;
        if ( v32 != 2 )
          goto LABEL_61;
      }
LABEL_53:
      v9 = v33;
LABEL_54:
      v20 = 0x200000000000000LL;
      v18 = 0xFFFFFFFFFLL;
      v19 = 0x58000000000LL;
    }
    while ( v11 <= v12 );
  }
  MiFlushTbList(&v39);
  MiUnlockWorkingSetExclusive(v14, (unsigned __int8)CurrentIrql);
  return v9;
}
