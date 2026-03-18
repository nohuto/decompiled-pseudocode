/*
 * XREFs of MiAllocateWsle @ 0x1400BE0E0
 * Callers:
 *     MiCreateForkWsle @ 0x140001B8C (MiCreateForkWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiMakeSpecialPoolPaged @ 0x14020E340 (MiMakeSpecialPoolPaged.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 * Callees:
 *     MiAddWorkingSetPage @ 0x140068A30 (MiAddWorkingSetPage.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MiUpdateWsle @ 0x1400BE660 (MiUpdateWsle.c)
 *     MiGetStandbyRepurposed @ 0x14011374C (MiGetStandbyRepurposed.c)
 *     MiSimpleAging @ 0x1401271B8 (MiSimpleAging.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiDoReplacement @ 0x1402135E8 (MiDoReplacement.c)
 *     MiLogAllocateWsleEvent @ 0x140213B7C (MiLogAllocateWsleEvent.c)
 *     MiForcedTrim @ 0x14021A838 (MiForcedTrim.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x14021AF0C (MiReplaceWorkingSetEntrySmall.c)
 *     MiCompleteSecureProcessFault @ 0x140223B8C (MiCompleteSecureProcessFault.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG_PTR __fastcall MiAllocateWsle(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned __int64 v11; // r12
  __int64 PteShadow; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int16 *v16; // r10
  unsigned __int16 v17; // ax
  int StandbyRepurposed; // eax
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v22; // rax
  ULONG_PTR v23; // r8
  ULONG_PTR v24; // rbx
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r9
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  char v33; // cl
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // edx
  unsigned __int64 v37; // rdx
  __int64 v38; // r9
  int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 updated; // rax

  v6 = *(_QWORD *)(a1 + 184);
  if ( *(_DWORD *)(v6 + 64) == 8 && (*(_QWORD *)(a1 + 120) >= 0x40000uLL || (*(_BYTE *)(a1 + 216) & 0x40) != 0) )
    MiConvertToLinkedWsles(a1, a2);
  ++*(_DWORD *)(a1 + 196);
  __incgsdword(0x2E10u);
  v11 = a2 + 0x90482413000LL;
  PteShadow = *(_QWORD *)a2;
  if ( (unsigned __int64)(a2 + 0x90482413000LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( *(_QWORD *)(a1 + 104) >= *(_QWORD *)(a1 + 96) )
  {
    if ( *(_QWORD *)(a1 + 208) )
    {
      v13 = 0LL;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 120);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
      if ( v14 <= v15 )
        goto LABEL_19;
      v16 = MiSystemPartition;
      if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
      {
        v17 = *(_WORD *)(a1 + 180);
        if ( v17 != 1023 )
          v16 = *(__int16 **)(qword_14034F0E8 + 8LL * v17);
      }
      if ( v14 - v15 < 3LL * (*((_QWORD *)v16 + 666) >> 2) )
        goto LABEL_19;
      StandbyRepurposed = MiGetStandbyRepurposed(v16, 1LL);
      if ( StandbyRepurposed == *(_DWORD *)(v20 + 44)
        || *(_QWORD *)(v19 + 5504) >= (unsigned __int64)(4LL * *(_QWORD *)(v20 + 2400)) )
      {
        goto LABEL_19;
      }
      v13 = 1LL;
    }
    MiForcedTrim(a1, v13);
LABEL_19:
    if ( (*(_BYTE *)(a1 + 216) & 0x40) != 0 && *(_QWORD *)(a1 + 104) >= *(_QWORD *)(a1 + 136) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 184) + 64LL) == 16 )
      {
        MiReplaceWorkingSetEntryLarge(a1, 0);
        MiSimpleAging(a1);
      }
      else
      {
        MiReplaceWorkingSetEntrySmall(a1, 0LL);
      }
    }
  }
  if ( *(_QWORD *)v6 == 0xFFFFFFFFFLL && !(unsigned int)MiAddWorkingSetPage(a1) )
  {
    MiDoReplacement(a1, 1LL);
    if ( *(_QWORD *)v6 == 0xFFFFFFFFFLL )
    {
      ++dword_14034F1F4;
      return 0LL;
    }
  }
  v22 = *(_QWORD *)a2;
  if ( v11 <= 0x7F8 )
    v22 = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( PteShadow != v22 )
  {
    ++dword_14034F1F8;
    return 0LL;
  }
  v23 = *(_QWORD *)(a1 + 184);
  v24 = *(_QWORD *)v23;
  if ( *(_QWORD *)v23 > *(_QWORD *)(v23 + 32) )
    KeBugCheckEx(0x1Au, 0x5000uLL, v23, *(_QWORD *)v23, *(_QWORD *)(v23 + 32));
  _mm_lfence();
  v25 = *(_QWORD *)(v23 + 496);
  v26 = *(_QWORD *)(v24 * *(unsigned int *)(v23 + 64) + v25);
  if ( (v26 & 1) != 0 || (*(_QWORD *)(v24 * *(unsigned int *)(v23 + 64) + v25) & 0xFFFFFFELL) != 0xFFFFFFE )
    KeBugCheckEx(0x1Au, 0x5001uLL, v23, *(_QWORD *)v23, *(_QWORD *)(v24 * *(unsigned int *)(v23 + 64) + v25));
  v27 = v26 >> 28;
  if ( v26 >> 28 != 0xFFFFFFFFFLL )
  {
    if ( v27 > *(_QWORD *)(v23 + 32) )
      KeBugCheckEx(0x1Au, 0x5002uLL, v23, *(_QWORD *)v23, *(_QWORD *)(v24 * *(unsigned int *)(v23 + 64) + v25));
    v28 = v27 * *(unsigned int *)(v23 + 64);
    BugCheckParameter4 = *(_QWORD *)(v28 + v25);
    if ( (BugCheckParameter4 & 1) != 0 || ((v24 ^ (BugCheckParameter4 >> 1)) & 0x7FFFFFF) != 0 )
      KeBugCheckEx(0x1Au, 0x5003uLL, v23, *(_QWORD *)v23, BugCheckParameter4);
    *(_QWORD *)(v28 + v25) = BugCheckParameter4 | 0xFFFFFFE;
  }
  *(_QWORD *)v23 = v27;
  if ( v24 > *(_QWORD *)(v23 + 16) )
    *(_QWORD *)(v23 + 16) = v24;
  v30 = ++*(_QWORD *)(a1 + 120);
  v31 = a2 << 25 >> 16;
  if ( (unsigned __int64)(v31 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
    ++*(_QWORD *)(a1 + 104);
  v32 = *(_QWORD *)(a1 + 104);
  if ( v32 > *(_QWORD *)(a1 + 168) )
    *(_QWORD *)(a1 + 168) = v32;
  v33 = *(_BYTE *)(a1 + 216);
  if ( (v33 & 7u) >= 2 )
  {
    v34 = qword_14034F400 + v30;
    v35 = (v33 & 7u) - 2;
    if ( v34 > qword_14034F408[v35] )
      qword_14034F408[v35] = v34;
  }
  if ( (a5 & 1) != 0 )
  {
    if ( (signed __int32 *)a1 == dword_14034FD40 )
    {
      a5 = ~qword_1403D0220 & (a5 | 0x8000000000000000uLL);
    }
    else if ( (MiFlags & 0x30000) != 0
           && (a5 & 0x8000000000000000uLL) == 0
           && (unsigned __int64)(v31 + 0x98000000000LL) > 0x7FFFFFFFFFLL
           && ((BYTE2(MiFlags) & 3u) > 1 || (*(_BYTE *)(a1 + 216) & 7) != 0)
           && (MiFlags & 0x40000) == 0 )
    {
      v36 = 0;
      if ( ((*(_QWORD *)(a3 + 40) >> 54) & 7) != 3 )
        v36 = 2;
      if ( (a5 & 0x800) != 0 )
        v36 |= 1u;
      if ( v36 )
        MiMarkPfnVerified(a3, v36);
    }
    MiWriteValidPteVolatile(&a5, v24 | 0x80000000);
    v37 = a5;
    *(_QWORD *)a2 = a5;
    if ( v11 <= 0x7F8 )
      MiWritePteShadow(a2, v37);
    v38 = a6;
    if ( a6
      && (!KeGetCurrentThread()->ApcState.Process->SecurePid || (*(_QWORD *)(a3 + 8) & 0x8000000000000000uLL) != 0) )
    {
      v39 = *(_DWORD *)(a6 + 48);
      v40 = a5;
      if ( ((v39 & 1) == 0 || (a5 & 0x42) != 0) && ((v39 & 2) == 0 || (a5 & 0x8000000000000000uLL) == 0) )
      {
        if ( (unsigned __int64)&STACK[0x90482413080] <= 0x7F8 )
          v40 = MiReadPteShadow(&a5, a5);
        *(_QWORD *)(v38 + 40) = (v40 >> 12) & 0xFFFFFFFFFLL;
        if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
          MiCompleteSecureProcessFault(a3);
      }
    }
  }
  updated = MiUpdateWsle(v24, a4);
  if ( v24 != updated )
  {
    v24 = updated;
    MiWriteValidPteVolatile(a2, updated | 0x80000000LL);
  }
  if ( a4 )
    *(_QWORD *)(v24 * *(unsigned int *)(v6 + 64) + *(_QWORD *)(v6 + 496)) |= a4;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(a3, *(_BYTE *)(a1 + 216) & 7, a2 << 25 >> 16);
  return v24;
}
