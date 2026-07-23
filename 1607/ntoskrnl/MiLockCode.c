/*
 * XREFs of MiLockCode @ 0x140015170
 * Callers:
 *     MiDisablePagingOfDriver @ 0x14047C4D0 (MiDisablePagingOfDriver.c)
 *     MmResetDriverPaging @ 0x14047C8AC (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x14047D840 (MiHandleDriverNonPagedSections.c)
 *     MiLockImageSection @ 0x1404AEF68 (MiLockImageSection.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiAreChargesNeededToLockPage @ 0x14004E880 (MiAreChargesNeededToLockPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiUnlockCodePage @ 0x140081D40 (MiUnlockCodePage.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     MiTradeActivePage @ 0x140108F04 (MiTradeActivePage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 *     MiPrefetchDriverPages @ 0x1404B0324 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x1405097F0 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  int v10; // edi
  _KPROCESS *Process; // rcx
  char v12; // dl
  __int64 v13; // rbp
  __int64 v14; // rcx
  char v15; // cl
  __int64 DriverPage; // r13
  __int64 SharedVm; // rbx
  KIRQL v18; // r12
  ULONG_PTR v19; // rbx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  __int16 v25; // si
  __int64 v26; // r10
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r10
  unsigned __int64 v31; // r11
  __int64 v32; // rbp
  __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // rax
  char v37; // [rsp+30h] [rbp-168h]
  char v38; // [rsp+40h] [rbp-158h]
  int v40; // [rsp+48h] [rbp-150h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-148h]
  __int64 AnyMultiplexedVm; // [rsp+58h] [rbp-140h]
  unsigned __int64 v43; // [rsp+60h] [rbp-138h]
  __int64 v44; // [rsp+68h] [rbp-130h]
  __int64 v45; // [rsp+70h] [rbp-128h] BYREF
  __int64 v46; // [rsp+78h] [rbp-120h]
  unsigned __int64 v47; // [rsp+80h] [rbp-118h]
  int v48; // [rsp+90h] [rbp-108h] BYREF
  __int16 v49; // [rsp+94h] [rbp-104h]
  __int64 v50; // [rsp+98h] [rbp-100h]
  __int64 v51; // [rsp+A0h] [rbp-F8h]
  __int64 v52; // [rsp+A8h] [rbp-F0h]

  v4 = a4;
  v43 = a3;
  v5 = a2;
  v47 = a2;
  v44 = a1;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
    return 0LL;
  v10 = 0;
  v37 = 1;
  if ( v7 < qword_140326950 || v7 >= qword_140326950 + 0x8000000000LL )
  {
    if ( v7 >= qword_140327F70 && v7 < qword_140327F70 + 0xF8000000000LL
      || qword_140326C70
      && v7 >= qword_140326C70
      && v7 < qword_140326C70 + (qword_140326C50 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v14 = 2LL;
    }
    else
    {
      v14 = 1LL;
    }
    v41 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v14, 1LL);
    v13 = AnyMultiplexedVm;
  }
  else
  {
    v10 = 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    v41 = Process[1].ActiveProcessors.Bitmap[2];
    v12 = 1;
    v13 = Process[1].ActiveProcessors.Bitmap[2] + 3008;
    AnyMultiplexedVm = v13;
  }
  v38 = 0;
  if ( a1 && v10 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
  {
    v15 = 0;
    if ( (dword_1403A9134 & 1) != 0 )
      v15 = v12;
    v38 = v15;
  }
  MiPrefetchDriverPages(v5, v8);
  v50 = 20LL;
  DriverPage = -1LL;
  v48 = v10;
  v49 = 0;
  v51 = 0LL;
  v52 = 0LL;
  SharedVm = MiGetSharedVm(v13);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v46 = v10;
  do
  {
    v45 = MI_READ_PTE_LOCK_FREE(v5);
    v19 = v45;
    if ( (v45 & 1) == 0 )
    {
      MiFlushTbList(&v48);
      MiUnlockWorkingSetExclusive(v13, v18);
      v20 = MmAccessFault(0LL, (__int64)(v5 << 25) >> 16);
      if ( v20 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v5 << 25) >> 16, v19, v20);
      v21 = MiGetSharedVm(v13);
      v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v21);
      *(_DWORD *)(v21 + 4) = 0;
      continue;
    }
    v22 = MI_GET_PAGE_FRAME_FROM_PTE(&v45);
    v25 = v22;
    v27 = v26 + 48 * v22;
    if ( (v24 & *(_QWORD *)(v27 + 8)) == 0 )
    {
      MiFlushTbList(&v48);
      MiCopyOnWriteEx((__int64)(v5 << 25) >> 16, 0);
      continue;
    }
    v28 = 0x200000000000000LL;
    if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 && (!v41 || v38 == 1) && (v4 & 1) != 0 )
    {
      MiFlushTbList(&v48);
      MiMakeDriverPagesPrivate(v44, v5, v43, v18, 0);
      continue;
    }
    if ( (v19 & 0x800) == 0 && (v19 & 0x200) != 0 )
    {
      MiFlushTbList(&v48);
      MiMakeDriverPagesPrivate(v44, v5, v43, v18, 1);
      continue;
    }
    v29 = 0LL;
    if ( DriverPage != -1 )
      goto LABEL_39;
    if ( (v4 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v27 + 35) & 8) == 0 && *(_QWORD *)v27 )
      {
LABEL_54:
        if ( ((unsigned __int16)v22 & 0x1FFu) < (unsigned __int64)(qword_140326858 & 0x1FF) )
        {
          MiFlushTbList(&v48);
          MiUnlockWorkingSetExclusive(v13, v18);
          DriverPage = MiAllocateDriverPage();
          v35 = MiGetSharedVm(v13);
          v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v35);
          *(_DWORD *)(v35 + 4) = 0;
          continue;
        }
      }
    }
    else if ( *(_WORD *)(v27 + 32) == 1 )
    {
      goto LABEL_54;
    }
LABEL_39:
    v40 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v40);
        while ( (*(_QWORD *)(v27 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
      v4 = a4;
      v24 = 0x8000000000000000uLL;
      v28 = 0x200000000000000LL;
    }
    if ( DriverPage == -1 )
      goto LABEL_62;
    if ( (v4 & 2) == 0 )
      goto LABEL_66;
    if ( (*(_BYTE *)(v27 + 35) & 8) != 0
      || !*(_QWORD *)v27
      || (unsigned int)MiIsPfnFileOnly(v27, 0x200000000000000LL, v23, v24)
      || (v25 & 0x1FFu) >= (unsigned __int64)(DriverPage & 0x1FF) )
    {
      goto LABEL_62;
    }
    v32 = v30 + 48 * DriverPage;
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), v31);
    if ( (v28 & *(_QWORD *)(v27 + 40)) == 0 || (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 )
    {
      v34 = 1LL;
LABEL_57:
      if ( (unsigned int)MiTradeActivePage(v27, v32, (__int64)(v5 << 25) >> 16, 0, 2) == 1 )
      {
        *(_QWORD *)(v27 + 16) = 0LL;
        MiSetFreshPfnFromFreeList(v27);
        MiReleaseFreshPage(v27);
        DriverPage = -1LL;
        v27 = v32;
      }
      goto LABEL_59;
    }
    v34 = MiLockProtoPoolPage(v24 | *(_QWORD *)(v27 + 8), 0LL);
    if ( v34 )
      goto LABEL_57;
LABEL_59:
    if ( v34 > 1 )
    {
      LOBYTE(v33) = 17;
      MiUnlockProtoPoolPage(v34, v33);
    }
    MiLockPageAtDpcInline(v27);
    v13 = AnyMultiplexedVm;
    v4 = a4;
LABEL_62:
    if ( (v4 & 2) == 0 )
    {
LABEL_66:
      if ( v46 == 2 )
      {
        if ( !(unsigned int)MiAddLockedPageCharge(v27, 0LL, v23, v24) )
          v37 = 0;
      }
      else
      {
        if ( (unsigned int)MiAreChargesNeededToLockPage(v27, v28, v23, v24) )
          *(_BYTE *)(v27 + 35) |= 0x20u;
        ++*(_WORD *)(v27 + 32);
      }
      goto LABEL_72;
    }
    if ( (*(_BYTE *)(v27 + 35) & 8) == 0 && *(_QWORD *)v27 )
      MiRemoveImagePageFromSystemWorkingSet(v13, v5, v27, v24);
LABEL_72:
    if ( (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 )
      v29 = MiCaptureDirtyBitToPfn(v27);
    v36 = MI_READ_PTE_LOCK_FREE(v5);
    v45 = v36;
    if ( (v36 & 0x800) != 0 && (v36 & 0x42) == 0 )
    {
      MiWriteValidPteVolatile(v5, 2LL);
      MiInsertTbFlushEntry(&v48, (__int64)(v5 << 25) >> 16, 1LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v29 )
      MiReleasePageFileInfo(&MiSystemPartition, v29, 1LL);
    v5 += 8LL;
  }
  while ( v5 <= v43 && v37 == 1 );
  if ( v18 != 17 )
  {
    MiFlushTbList(&v48);
    MiUnlockWorkingSetExclusive(v13, v18);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  if ( v37 )
    return 0LL;
  MiUnlockCodePage(v47, v5 - 16);
  return 3221225626LL;
}
