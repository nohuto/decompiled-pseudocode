/*
 * XREFs of MiAllocateWsle @ 0x14003BC70
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiCreateForkWsle @ 0x14010A5FC (MiCreateForkWsle.c)
 *     MiMakeSpecialPoolPaged @ 0x1401EB5FC (MiMakeSpecialPoolPaged.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiUpdateWsle @ 0x14003C310 (MiUpdateWsle.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiSimpleAging @ 0x1400AA7CC (MiSimpleAging.c)
 *     MiGetStandbyRepurposed @ 0x1400BD338 (MiGetStandbyRepurposed.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 *     MiAddWorkingSetPage @ 0x1400FFE80 (MiAddWorkingSetPage.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiDoReplacement @ 0x1401E2658 (MiDoReplacement.c)
 *     MiLogAllocateWsleEvent @ 0x1401E26D0 (MiLogAllocateWsleEvent.c)
 *     MiForcedTrim @ 0x1401E95FC (MiForcedTrim.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9D18 (MiReplaceWorkingSetEntrySmall.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF570 (MiCompleteSecureProcessFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  ULONG_PTR *v7; // rsi
  char v8; // cl
  ULONG_PTR *v12; // rbp
  char v13; // al
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  ULONG_PTR *v16; // rax
  ULONG_PTR v17; // r8
  unsigned __int16 v18; // ax
  int *v19; // r10
  int StandbyRepurposed; // eax
  __int64 v21; // r10
  __int64 v22; // r11
  char v23; // dl
  ULONG_PTR *v24; // rcx
  ULONG_PTR v26; // rbx
  ULONG_PTR v27; // r9
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v29; // rdx
  ULONG_PTR v30; // r8
  ULONG_PTR v31; // rax
  unsigned __int64 v32; // rsi
  int v33; // ecx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // al
  char v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // r11
  char v43; // dl
  __int64 v44; // rdx
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r10
  int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 updated; // rax
  __int64 v55; // rdx
  signed __int64 v56; // rax
  signed __int64 v57; // rcx
  signed __int64 v58; // rtt

  v7 = &BugCheckParameter2;
  v8 = *(_BYTE *)(a1 + 184);
  if ( (v8 & 7) == 2 )
    v12 = &BugCheckParameter2;
  else
    v12 = (ULONG_PTR *)(*(_QWORD *)(a1 + 16) + 416LL);
  if ( *((_DWORD *)v12 + 8) == 8 && (*(_QWORD *)(a1 + 128) >= 0x40000uLL || (v8 & 0x40) != 0) )
    MiConvertToLinkedWsles(a1);
  v13 = *(_BYTE *)(a1 + 184);
  ++*(_DWORD *)(a1 + 4);
  if ( (v13 & 7) == 2 )
    ++dword_140327D40;
  __incgsdword(0x2E10u);
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  if ( *(_QWORD *)(a1 + 112) >= *(_QWORD *)(a1 + 104) )
  {
    v15 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      v16 = &BugCheckParameter2;
    else
      v16 = (ULONG_PTR *)(*(_QWORD *)(a1 + 16) + 416LL);
    v17 = v16[1];
    if ( v15 > v17 )
    {
      v18 = *(_WORD *)(a1 + 164);
      v19 = v18 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v18);
      if ( v15 - v17 >= 3LL * (*((_QWORD *)v19 + 786) >> 2) )
      {
        StandbyRepurposed = MiGetStandbyRepurposed(v19, 1LL);
        if ( StandbyRepurposed != *(_DWORD *)(v22 + 44)
          && *(_QWORD *)(v21 + 6464) < (unsigned __int64)(4LL * *(_QWORD *)(v22 + 2400)) )
        {
          MiForcedTrim(a1);
        }
      }
    }
    v23 = *(_BYTE *)(a1 + 184);
    if ( (v23 & 7) == 2 )
      v24 = &BugCheckParameter2;
    else
      v24 = (ULONG_PTR *)(*(_QWORD *)(a1 + 16) + 416LL);
    if ( (v23 & 0x40) != 0 && *(_QWORD *)(a1 + 112) >= *(_QWORD *)(a1 + 144) )
    {
      if ( *((_DWORD *)v24 + 8) == 16 )
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
  if ( *v12 == 0xFFFFFFFFFLL && !(unsigned int)MiAddWorkingSetPage(a1) )
  {
    MiDoReplacement(a1, 1LL);
    if ( *v12 == 0xFFFFFFFFFLL )
    {
      ++dword_140327150;
      return 0LL;
    }
  }
  if ( v14 != MI_READ_PTE_LOCK_FREE(a2) )
  {
    ++dword_140327154;
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v7 = (ULONG_PTR *)(*(_QWORD *)(a1 + 16) + 416LL);
  v26 = *v7;
  if ( *v7 > v7[3] )
    KeBugCheckEx(0x1Au, 0x5000uLL, (ULONG_PTR)v7, *v7, v7[3]);
  _mm_lfence();
  v27 = v7[10];
  BugCheckParameter4 = *(_QWORD *)(v26 * *((unsigned int *)v7 + 8) + v27);
  if ( (BugCheckParameter4 & 1) != 0 || (*(_QWORD *)(v26 * *((unsigned int *)v7 + 8) + v27) & 0xFFFFFFELL) != 0xFFFFFFE )
    KeBugCheckEx(0x1Au, 0x5001uLL, (ULONG_PTR)v7, *v7, BugCheckParameter4);
  v29 = BugCheckParameter4 >> 28;
  if ( BugCheckParameter4 >> 28 != 0xFFFFFFFFFLL )
  {
    if ( v29 > v7[3] )
      KeBugCheckEx(0x1Au, 0x5002uLL, (ULONG_PTR)v7, *v7, BugCheckParameter4);
    v30 = v29 * *((unsigned int *)v7 + 8);
    v31 = *(_QWORD *)(v30 + v27);
    if ( (v31 & 1) != 0 || ((v26 ^ (v31 >> 1)) & 0x7FFFFFF) != 0 )
      KeBugCheckEx(0x1Au, 0x5003uLL, (ULONG_PTR)v7, *v7, v31);
    *(_QWORD *)(v30 + v27) = v31 | 0xFFFFFFE;
  }
  *v7 = v29;
  if ( v26 > v7[2] )
    v7[2] = v26;
  ++*(_QWORD *)(a1 + 128);
  v32 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++*(_QWORD *)(a1 + 112);
    v33 = 1;
  }
  else
  {
    v33 = 0;
  }
  v34 = *(_QWORD *)(a1 + 112);
  if ( v34 > *(_QWORD *)(a1 + 152) )
    *(_QWORD *)(a1 + 152) = v34;
  v35 = qword_140327D48;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    v36 = qword_140327D50;
    v35 = ++qword_140327D48;
    if ( v33 == 1 )
      v36 = ++qword_140327D50;
    if ( v36 > qword_140327D58 )
      qword_140327D58 = v36;
  }
  v37 = *(_BYTE *)(a1 + 184);
  v38 = v37 & 7;
  if ( (v37 & 7u) >= 2 )
  {
    v39 = *(_QWORD *)(a1 + 128);
    v40 = v39;
    v41 = (v37 & 7u) - 2;
    if ( v38 == 2 )
      v40 = v35;
    v42 = (_QWORD *)((char *)&unk_140327388 + 8 * v41);
    if ( (unsigned __int64)(v40 + qword_140327380) > *v42 )
    {
      if ( v38 == 2 )
        v39 = v35;
      *v42 = v39 + qword_140327380;
    }
  }
  if ( (a5 & 1) != 0 )
  {
    v43 = *(_BYTE *)(a1 + 184) & 7;
    if ( v43 == 2 )
    {
      a5 = ~qword_1403A9350 & (a5 | 0x8000000000000000uLL);
    }
    else if ( (MiFlags & 0x4000) != 0
           && (v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL)
           && (a5 & 0x8000000000000000uLL) == 0
           && ((MiFlags & 0x10000) != 0 || v43) )
    {
      MiLockPageAtDpcInline(a3);
      if ( !(unsigned int)MiGetPagePrivilege(a3, 1LL, 0LL) )
      {
        v44 = 7LL;
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
          v44 = 39LL;
        MiMarkPfnVerified(a3, v44);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v45 = a5;
    do
    {
      v46 = v45;
      v45 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)&a5,
              v45 ^ (v45 ^ ((v26 | 0x80000000) << 52)) & 0x7FF0000000000000LL,
              v45);
    }
    while ( v46 != v45 );
    v47 = a5;
    *a2 = a5;
    if ( (unsigned int)MiPteInShadowRange(a2, v47) )
      MiWritePteShadow(v49, v48);
    if ( a6 && (!KeGetCurrentThread()->ApcState.Process->SecurePid || (v50 & *(_QWORD *)(a3 + 8)) != 0) )
    {
      v51 = *(_DWORD *)(a6 + 48);
      if ( ((v51 & 1) == 0 || (a5 & 0x42) != 0) && ((v51 & 2) == 0 || (a5 & v50) == 0) )
      {
        v52 = MI_GET_PAGE_FRAME_FROM_PTE(&a5);
        *(_QWORD *)(v53 + 40) = v52;
        if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
          MiCompleteSecureProcessFault(a3);
      }
    }
  }
  updated = MiUpdateWsle(v26, a4);
  if ( v26 != updated )
  {
    v55 = updated | 0x80000000LL;
    v26 = updated;
    v56 = *a2;
    do
    {
      v57 = v56;
      if ( (v55 & 0x80000000) != 0 )
      {
        v57 = v56 ^ (v56 ^ (v55 << 52)) & 0x7FF0000000000000LL;
      }
      else
      {
        if ( (v55 & 1) != 0 )
          v57 = v56 | 0x20;
        if ( (v55 & 2) != 0 )
          v57 |= 0x42uLL;
      }
      v58 = v56;
      v56 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v57, v56);
    }
    while ( v58 != v56 );
  }
  if ( a4 )
    *(_QWORD *)(v26 * *((unsigned int *)v12 + 8) + v12[10]) |= a4;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(a3, *(_BYTE *)(a1 + 184) & 7, (__int64)((_QWORD)a2 << 25) >> 16);
  return v26;
}
