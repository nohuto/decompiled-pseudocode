/*
 * XREFs of MiAllocateWsle @ 0x140055ED0
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiCreateForkWsle @ 0x14009A798 (MiCreateForkWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiMakeSpecialPoolPaged @ 0x1401CEE78 (MiMakeSpecialPoolPaged.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x14001516C (MiGetStandbyRepurposed.c)
 *     MiAddWorkingSetPage @ 0x140017280 (MiAddWorkingSetPage.c)
 *     MiUpdateWsle @ 0x140056490 (MiUpdateWsle.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiSimpleAging @ 0x1400EB918 (MiSimpleAging.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDoReplacement @ 0x1401D27D4 (MiDoReplacement.c)
 *     MiLogAllocateWsleEvent @ 0x1401D284C (MiLogAllocateWsleEvent.c)
 *     MiForcedTrim @ 0x1401D7A98 (MiForcedTrim.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401D812C (MiReplaceWorkingSetEntrySmall.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiCompleteSecureProcessFault @ 0x1401DECFC (MiCompleteSecureProcessFault.c)
 */

ULONG_PTR __fastcall MiAllocateWsle(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  int *v14; // r10
  unsigned __int16 v15; // ax
  int StandbyRepurposed; // eax
  __int64 v17; // r10
  __int64 v18; // r11
  ULONG_PTR v20; // r8
  ULONG_PTR v21; // rsi
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r9
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  unsigned __int64 v29; // rax
  char v30; // cl
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  unsigned __int64 v36; // rbx
  __int64 v37; // rbx
  int v38; // ecx
  __int64 updated; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rax
  signed __int64 v42; // rcx
  signed __int64 v43; // rtt

  v6 = *(_QWORD *)(a1 + 184);
  if ( *(_DWORD *)(v6 + 64) == 8 && (*(_QWORD *)(a1 + 120) >= 0x40000uLL || (*(_BYTE *)(a1 + 216) & 0x40) != 0) )
    MiConvertToLinkedWsles(a1);
  ++*(_DWORD *)(a1 + 196);
  __incgsdword(0x2E10u);
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  if ( *(_QWORD *)(a1 + 104) >= *(_QWORD *)(a1 + 96) )
  {
    v12 = *(_QWORD *)(a1 + 120);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
    if ( v12 > v13 )
    {
      v14 = &MiSystemPartition;
      if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
      {
        v15 = *(_WORD *)(a1 + 180);
        if ( v15 != 1023 )
          v14 = *(int **)(qword_1402FEC28 + 8LL * v15);
      }
      if ( v12 - v13 >= 3LL * (*((_QWORD *)v14 + 714) >> 2) )
      {
        StandbyRepurposed = MiGetStandbyRepurposed((__int64)v14, 1u);
        if ( StandbyRepurposed != *(_DWORD *)(v18 + 44)
          && *(_QWORD *)(v17 + 5888) < (unsigned __int64)(4LL * *(_QWORD *)(v18 + 2400)) )
        {
          MiForcedTrim(a1);
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 216) & 0x40) != 0 && *(_QWORD *)(a1 + 104) >= *(_QWORD *)(a1 + 136) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 184) + 64LL) == 16 )
      {
        MiReplaceWorkingSetEntryLarge(a1, 0LL);
        MiSimpleAging(a1);
      }
      else
      {
        MiReplaceWorkingSetEntrySmall(a1, 0LL);
      }
    }
  }
  if ( *(_QWORD *)v6 == 0xFFFFFFFFFLL
    && !(unsigned int)MiAddWorkingSetPage(a1)
    && (MiDoReplacement(a1, 1LL), *(_QWORD *)v6 == 0xFFFFFFFFFLL) )
  {
    ++dword_1402FED40;
    return 0LL;
  }
  else if ( v11 == MI_READ_PTE_LOCK_FREE(a2) )
  {
    v20 = *(_QWORD *)(a1 + 184);
    v21 = *(_QWORD *)v20;
    if ( *(_QWORD *)v20 > *(_QWORD *)(v20 + 32) )
      KeBugCheckEx(0x1Au, 0x5000uLL, v20, *(_QWORD *)v20, *(_QWORD *)(v20 + 32));
    _mm_lfence();
    v22 = *(_QWORD *)(v20 + 496);
    v23 = *(_QWORD *)(v21 * *(unsigned int *)(v20 + 64) + v22);
    if ( (v23 & 1) != 0 || (*(_QWORD *)(v21 * *(unsigned int *)(v20 + 64) + v22) & 0xFFFFFFELL) != 0xFFFFFFE )
      KeBugCheckEx(0x1Au, 0x5001uLL, v20, *(_QWORD *)v20, *(_QWORD *)(v21 * *(unsigned int *)(v20 + 64) + v22));
    v24 = v23 >> 28;
    if ( v23 >> 28 != 0xFFFFFFFFFLL )
    {
      if ( v24 > *(_QWORD *)(v20 + 32) )
        KeBugCheckEx(0x1Au, 0x5002uLL, v20, *(_QWORD *)v20, *(_QWORD *)(v21 * *(unsigned int *)(v20 + 64) + v22));
      v25 = v24 * *(unsigned int *)(v20 + 64);
      BugCheckParameter4 = *(_QWORD *)(v25 + v22);
      if ( (BugCheckParameter4 & 1) != 0 || ((v21 ^ (BugCheckParameter4 >> 1)) & 0x7FFFFFF) != 0 )
        KeBugCheckEx(0x1Au, 0x5003uLL, v20, *(_QWORD *)v20, BugCheckParameter4);
      *(_QWORD *)(v25 + v22) = BugCheckParameter4 | 0xFFFFFFE;
    }
    *(_QWORD *)v20 = v24;
    if ( v21 > *(_QWORD *)(v20 + 16) )
      *(_QWORD *)(v20 + 16) = v21;
    v27 = ++*(_QWORD *)(a1 + 120);
    v28 = (__int64)((_QWORD)a2 << 25) >> 16;
    if ( (unsigned __int64)(v28 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
      ++*(_QWORD *)(a1 + 104);
    v29 = *(_QWORD *)(a1 + 104);
    if ( v29 > *(_QWORD *)(a1 + 168) )
      *(_QWORD *)(a1 + 168) = v29;
    v30 = *(_BYTE *)(a1 + 216);
    if ( (v30 & 7u) >= 2 )
    {
      v31 = qword_1402FEF40 + v27;
      v32 = (v30 & 7u) - 2;
      if ( v31 > qword_1402FEF48[v32] )
        qword_1402FEF48[v32] = v31;
    }
    if ( (a5 & 1) != 0 )
    {
      if ( (LONG *)a1 == &dword_1402FF880 )
      {
        a5 = ~qword_140381310 & (a5 | 0x8000000000000000uLL);
      }
      else if ( (MiFlags & 0x10000) != 0
             && (unsigned __int64)(v28 + 0x98000000000LL) > 0x7FFFFFFFFFLL
             && (a5 & 0x8000000000000000uLL) == 0
             && ((MiFlags & 0x40000) != 0 || (*(_BYTE *)(a1 + 216) & 7) != 0) )
      {
        MiLockPageAtDpcInline(a3);
        if ( !(unsigned int)MiGetPagePrivilege(a3, 1LL, 0LL) )
        {
          v33 = 7LL;
          if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
            v33 = 39LL;
          MiMarkPfnVerified(a3, v33);
        }
        _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v34 = a5;
      do
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&a5,
                v34 ^ (v34 ^ ((v21 | 0x80000000) << 52)) & 0x7FF0000000000000LL,
                v34);
      }
      while ( v35 != v34 );
      v36 = a5;
      *a2 = a5;
      if ( (unsigned int)MiPteInShadowRange(a2) )
        MiWritePteShadow(a2, v36);
      v37 = a6;
      if ( a6
        && (!KeGetCurrentThread()->ApcState.Process->SecurePid || (*(_QWORD *)(a3 + 8) & 0x8000000000000000uLL) != 0) )
      {
        v38 = *(_DWORD *)(a6 + 48);
        if ( ((v38 & 1) == 0 || (a5 & 0x42) != 0) && ((v38 & 2) == 0 || (a5 & 0x8000000000000000uLL) == 0) )
        {
          *(_QWORD *)(v37 + 40) = MI_GET_PAGE_FRAME_FROM_PTE(&a5);
          if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
            MiCompleteSecureProcessFault(a3);
        }
      }
    }
    updated = MiUpdateWsle(v21, a4);
    if ( v21 != updated )
    {
      v40 = updated | 0x80000000LL;
      v21 = updated;
      v41 = *a2;
      do
      {
        v42 = v41;
        if ( (v40 & 0x80000000) != 0 )
        {
          v42 = v41 ^ (v41 ^ (v40 << 52)) & 0x7FF0000000000000LL;
        }
        else
        {
          if ( (v40 & 1) != 0 )
            v42 = v41 | 0x20;
          if ( (v40 & 2) != 0 )
            v42 |= 0x42uLL;
          if ( (v40 & 4) != 0 )
            v42 &= ~0x20uLL;
        }
        v43 = v41;
        v41 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v42, v41);
      }
      while ( v43 != v41 );
    }
    if ( a4 )
      *(_QWORD *)(v21 * *(unsigned int *)(v6 + 64) + *(_QWORD *)(v6 + 496)) |= a4;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
      MiLogAllocateWsleEvent(a3, *(_BYTE *)(a1 + 216) & 7, (__int64)((_QWORD)a2 << 25) >> 16);
    return v21;
  }
  else
  {
    ++dword_1402FED44;
    return 0LL;
  }
}
