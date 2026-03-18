/*
 * XREFs of MiLockCode @ 0x140010950
 * Callers:
 *     MiLockImageSection @ 0x1404251F4 (MiLockImageSection.c)
 *     MmResetDriverPaging @ 0x1404F523C (MmResetDriverPaging.c)
 *     MmLockPreChargedPagedPool @ 0x140569BDC (MmLockPreChargedPagedPool.c)
 *     MiDisablePagingOfDriver @ 0x140573F50 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x14057516C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1400FCE2C (MiTradeActivePage.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x140123B68 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiPrefetchDriverPages @ 0x14042530C (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiLockCode(int a1, ULONG_PTR *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rdx
  char v7; // r14
  int v8; // edi
  volatile signed __int32 *v9; // r15
  ULONG_PTR *v10; // rbp
  unsigned __int8 CurrentIrql; // r12
  __int64 i; // rdx
  unsigned int v13; // ebx
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  int v21; // eax
  unsigned __int8 v22; // di
  unsigned int v23; // ebx
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  unsigned int v29; // edi
  unsigned __int8 v30; // di
  __int64 v31; // rbp
  unsigned __int64 v32; // rdi
  int v33; // eax
  unsigned int v34; // edi
  __int16 v35; // cx
  __int64 v36; // rax
  __int64 *v37; // r10
  char v38; // al
  __int64 v39; // r9
  __int64 PteShadow; // rbx
  ULONG_PTR v41; // rax
  char v42; // [rsp+30h] [rbp-158h]
  __int64 DriverPage; // [rsp+38h] [rbp-150h]
  ULONG_PTR *v45; // [rsp+40h] [rbp-148h]
  unsigned __int64 v47; // [rsp+50h] [rbp-138h]
  ULONG_PTR v49; // [rsp+60h] [rbp-128h] BYREF
  __int64 v50; // [rsp+68h] [rbp-120h]
  ULONG_PTR *v51; // [rsp+70h] [rbp-118h]
  int v52; // [rsp+80h] [rbp-108h] BYREF
  __int16 v53; // [rsp+84h] [rbp-104h]
  __int64 v54; // [rsp+88h] [rbp-100h]
  __int64 v55; // [rsp+90h] [rbp-F8h]
  __int64 v56; // [rsp+98h] [rbp-F0h]

  v51 = a2;
  v5 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (*(_BYTE *)(8 * ((v5 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v5 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v7 = 1;
  v8 = 0;
  v42 = 1;
  if ( v5 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( v5 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
      || qword_14034EDB0
      && v5 >= qword_14034EDB0
      && v5 < qword_14034EDB0 + (qword_14034ED90 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v9 = dword_14034FE40;
    }
    else
    {
      v9 = &dword_14034FF40;
    }
    v47 = 0LL;
  }
  else
  {
    v8 = 2;
    v47 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v9 = (volatile signed __int32 *)(v47 + 2968);
  }
  MiPrefetchDriverPages(a2, a3);
  DriverPage = -1LL;
  v10 = a2;
  v45 = a2;
  v54 = 20LL;
  v52 = v8;
  v53 = 0;
  v55 = 0LL;
  v56 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
    for ( i = *(unsigned int *)v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v9 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, i | 0x40000000, i);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
  }
  v50 = v8;
  do
  {
    v14 = *v10;
    v15 = 0x7FFFFFFFFFFFFFFFLL;
    v16 = 0x200000000000000LL;
    v17 = 0x8000000000000000uLL;
    v18 = 0x58000000000LL;
    v19 = (unsigned __int64)(v10 + 0x12090482600LL);
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, i)
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( i )
      {
        v20 = *(_QWORD *)(i + 8 * (((unsigned __int64)v10 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v20 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
    }
    v49 = v14;
    if ( (v14 & 1) == 0 )
    {
      MiFlushTbList(&v52);
      MiUnlockWorkingSetExclusive(v9, CurrentIrql);
      v21 = MmAccessFault(0LL, (__int64)((_QWORD)v10 << 25) >> 16);
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)((_QWORD)v10 << 25) >> 16, v14, v21);
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
        CurrentIrql = v22;
      }
      else
      {
        v23 = 0;
        if ( _interlockedbittestandset(v9, 0x1Fu) )
          v23 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
        for ( i = *(unsigned int *)v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v9 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(v9, i | 0x40000000, i);
          if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v23);
        }
        CurrentIrql = v22;
      }
      continue;
    }
    v24 = v14;
    if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, i)
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( i )
      {
        v25 = *(_QWORD *)(i + 8 * (((unsigned __int64)&v49 >> 3) & 0x1FF));
        if ( (v25 & 0x20) != 0 )
          v24 = v14 | 0x20;
        if ( (v25 & 0x42) != 0 )
          v24 |= 0x42uLL;
      }
    }
    v26 = (v24 >> 12) & 0xFFFFFFFFFLL;
    v27 = 48 * v26 - v18;
    if ( (v17 & *(_QWORD *)(v27 + 8)) == 0 )
    {
      MiFlushTbList(&v52);
      MiCopyOnWriteEx((__int64)((_QWORD)v10 << 25) >> 16, 0);
      v7 = v42;
      continue;
    }
    if ( (v16 & *(_QWORD *)(v27 + 40)) != 0 && !v47 && (a4 & 1) != 0 )
    {
      MiFlushTbList(&v52);
      MiMakeDriverPagesPrivate(a1, (_DWORD)v10, a3, CurrentIrql, 0);
LABEL_68:
      v7 = v42;
      continue;
    }
    if ( (v14 & 0x800) == 0 && (v14 & 0x200) != 0 )
    {
      MiFlushTbList(&v52);
      MiMakeDriverPagesPrivate(a1, (_DWORD)v10, a3, CurrentIrql, 1);
      goto LABEL_68;
    }
    v28 = 0LL;
    if ( DriverPage != -1 )
    {
LABEL_76:
      v29 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v29);
            v17 = 0x8000000000000000uLL;
          }
        }
        while ( (*(_QWORD *)(v27 + 24) & v17) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
        v18 = 0x58000000000LL;
        v15 = 0x7FFFFFFFFFFFFFFFLL;
        v16 = 0x200000000000000LL;
      }
      if ( DriverPage == -1 )
        goto LABEL_121;
      if ( (a4 & 2) == 0 )
        goto LABEL_125;
      if ( (*(_BYTE *)(v27 + 35) & 8) != 0
        || !*(_QWORD *)v27
        || ((unsigned __int16)v26 & 0x1FFu) >= (unsigned __int64)(DriverPage & 0x1FF) )
      {
LABEL_121:
        if ( (a4 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v27 + 35) & 8) == 0 && *(_QWORD *)v27 )
            MiRemoveImagePageFromSystemWorkingSet(v9, v10, v27, v18);
          goto LABEL_137;
        }
LABEL_125:
        if ( v50 == 2 )
        {
          if ( !(unsigned int)MiAddLockedPageCharge(v27, 0LL) )
          {
            v7 = 0;
            v42 = 0;
            goto LABEL_138;
          }
LABEL_137:
          v7 = v42;
LABEL_138:
          v37 = (__int64 *)(v27 + 16);
          if ( (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 )
          {
            v38 = *(_BYTE *)(v27 + 34);
            if ( (v38 & 0x10) == 0 )
            {
              if ( (v38 & 8) == 0 )
              {
                v39 = *v37;
                if ( (*v37 & 4) != 0 )
                {
                  PteShadow = *v37;
                  if ( (unsigned __int64)(v27 + 0x90482413010LL) <= 0x7F8 )
                    PteShadow = MiReadPteShadow(v27 + 16, v39);
                  *v37 = v39 & 0xFFFFFFFFFFFFFFFBuLL;
                  v28 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
                }
              }
              *(_BYTE *)(v27 + 34) |= 0x10u;
            }
          }
          v41 = *v10;
          if ( v19 <= 0x7F8 )
            LOWORD(v41) = MiReadPteShadow(v10, *v10);
          if ( (v41 & 0x800) != 0 && (v41 & 0x42) == 0 )
          {
            MiWriteValidPteVolatile(v10, 2LL);
            MiInsertTbFlushEntry(&v52, (__int64)((_QWORD)v10 << 25) >> 16, 1LL, 0LL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v28 )
            MiReleasePageFileInfo(&MiSystemPartition, v28, 1LL);
          v45 = ++v10;
          continue;
        }
        i = 0x3FFFFFFFFFFFFFFFLL;
        v35 = *(_WORD *)(v27 + 32);
        v36 = *(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v35 )
          goto LABEL_135;
        if ( v35 == 1 )
        {
          if ( v36 )
            goto LABEL_135;
        }
        else if ( v35 != 2 || !v36 )
        {
          goto LABEL_136;
        }
        if ( (*(_BYTE *)(v27 + 34) & 8) == 0 )
        {
LABEL_136:
          *(_WORD *)(v27 + 32) = v35 + 1;
          goto LABEL_137;
        }
LABEL_135:
        *(_BYTE *)(v27 + 35) |= 0x20u;
        goto LABEL_136;
      }
      v31 = 48 * DriverPage - v18;
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), v15);
      if ( (v16 & *(_QWORD *)(v27 + 40)) != 0 && (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
      {
        v32 = MiLockProtoPoolPage(v17 | *(_QWORD *)(v27 + 8), 0LL);
        if ( !v32 )
        {
LABEL_111:
          if ( v32 > 1 )
          {
            LOBYTE(i) = 17;
            MiUnlockProtoPoolPage(v32, i);
          }
          v34 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v34);
            }
            while ( (*(_QWORD *)(v27 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
          }
          v10 = v45;
          goto LABEL_121;
        }
      }
      else
      {
        v32 = 1LL;
      }
      v33 = MiTbFlushType(v9);
      if ( (unsigned int)MiTradeActivePage(v27, v31, (__int64)((_QWORD)v45 << 25) >> 16, v33, 2) == 1 )
      {
        *(_QWORD *)(v27 + 16) = MiMakeDemandZeroPte(4LL);
        MiReleaseFreshPage(v27);
        v27 = v31;
        DriverPage = -1LL;
      }
      goto LABEL_111;
    }
    if ( (a4 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v27 + 35) & 8) != 0 || !*(_QWORD *)v27 )
        goto LABEL_76;
    }
    else if ( *(_WORD *)(v27 + 32) != 1 )
    {
      goto LABEL_76;
    }
    if ( ((unsigned __int16)v26 & 0x1FFu) >= (unsigned __int64)(qword_14034EA18 & 0x1FF) )
      goto LABEL_76;
    MiFlushTbList(&v52);
    MiUnlockWorkingSetExclusive(v9, CurrentIrql);
    DriverPage = MiAllocateDriverPage();
    v30 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
      v7 = v42;
      CurrentIrql = v30;
    }
    else
    {
      if ( _interlockedbittestandset(v9, 0x1Fu) )
        LODWORD(v28) = ExpWaitForSpinLockExclusiveAndAcquire(v9);
      for ( i = *(unsigned int *)v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v9 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v9, i | 0x40000000, i);
        LODWORD(v28) = v28 + 1;
        if ( ((unsigned int)v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait((unsigned int)v28);
      }
      v7 = v42;
      CurrentIrql = v30;
    }
  }
  while ( (unsigned __int64)v10 <= a3 && v7 == 1 );
  if ( CurrentIrql != 17 )
  {
    MiFlushTbList(&v52);
    MiUnlockWorkingSetExclusive(v9, CurrentIrql);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  if ( v7 )
    return 0LL;
  MiUnlockCodePage(v51, v10 - 2);
  return 3221225626LL;
}
