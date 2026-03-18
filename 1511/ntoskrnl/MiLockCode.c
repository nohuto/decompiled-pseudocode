/*
 * XREFs of MiLockCode @ 0x1400B7B30
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x1403CE89C (MiDisablePagingOfDriver.c)
 *     MmResetDriverPaging @ 0x1403CF258 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x140498AE4 (MiLockImageSection.c)
 *     MmLockPreChargedPagedPool @ 0x1404F5710 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiAreChargesNeededToLockPage @ 0x140066150 (MiAreChargesNeededToLockPage.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiUnlockCodePage @ 0x1400A1DD0 (MiUnlockCodePage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 *     MiPrefetchDriverPages @ 0x1404A9194 (MiPrefetchDriverPages.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bp
  unsigned __int64 v6; // rdx
  char v8; // r14
  int v9; // ebx
  volatile LONG *v10; // r13
  __int64 v11; // r15
  KIRQL v12; // r12
  _KPROCESS *v13; // rdx
  ULONG_PTR v14; // rbx
  __int64 v15; // r8
  int v16; // eax
  _KPROCESS *v17; // rdx
  _KPROCESS *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r8
  char v31; // [rsp+30h] [rbp-158h]
  __int64 DriverPage; // [rsp+38h] [rbp-150h]
  unsigned __int64 v34; // [rsp+48h] [rbp-140h]
  __int64 v36; // [rsp+58h] [rbp-130h] BYREF
  __int64 v37; // [rsp+60h] [rbp-128h]
  __int64 v38; // [rsp+68h] [rbp-120h]
  unsigned __int64 v39; // [rsp+70h] [rbp-118h]
  int v40; // [rsp+80h] [rbp-108h] BYREF
  __int16 v41; // [rsp+84h] [rbp-104h]
  __int64 v42; // [rsp+88h] [rbp-100h]
  __int64 v43; // [rsp+90h] [rbp-F8h]
  __int64 v44; // [rsp+98h] [rbp-F0h]

  v4 = a2;
  v39 = a2;
  v5 = a4;
  v6 = (__int64)(a2 << 25) >> 16;
  v37 = a1;
  if ( (*(_BYTE *)(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v6 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v8 = 1;
  v31 = 1;
  v9 = 0;
  if ( v6 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( v6 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
      || qword_1402FE8F0
      && v6 >= qword_1402FE8F0
      && v6 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v10 = &dword_1402FF980;
    }
    else
    {
      v10 = &dword_1402FFA80;
    }
    v34 = 0LL;
  }
  else
  {
    v9 = 2;
    v34 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = (volatile LONG *)(v34 + 2968);
  }
  MiPrefetchDriverPages(v4, a3);
  v11 = -1LL;
  v42 = 20LL;
  DriverPage = -1LL;
  v40 = v9;
  v41 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v12 = ExAcquireSpinLockExclusive(v10);
  v38 = v9;
  do
  {
    v36 = MI_READ_PTE_LOCK_FREE(v4);
    v14 = v36;
    if ( (v36 & 1) == 0 )
    {
      MiFlushTbList((__int64)&v40, v13);
      MiUnlockWorkingSetExclusive((__int64)v10, v12, v15);
      v16 = MmAccessFault(0LL, (__int64)(v4 << 25) >> 16, 0, 0LL);
      if ( v16 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v4 << 25) >> 16, v14, v16);
      v12 = ExAcquireSpinLockExclusive(v10);
      continue;
    }
    v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v36);
    v21 = 48 * v20 - 0x58000000000LL;
    if ( *(__int64 *)(v21 + 8) >= 0 )
    {
      MiFlushTbList((__int64)&v40, v18);
      MiCopyOnWriteEx((__int64)(v4 << 25) >> 16, v4, -1LL, v12, 0);
      v8 = v31;
      continue;
    }
    if ( (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0 && !v34 && (v5 & 1) != 0 )
    {
      MiFlushTbList((__int64)&v40, v18);
      MiMakeDriverPagesPrivate(v37, v4, a3, v12, 0);
LABEL_25:
      v8 = v31;
      continue;
    }
    if ( (v14 & 0x800) == 0 && (v14 & 0x200) != 0 )
    {
      MiFlushTbList((__int64)&v40, v18);
      MiMakeDriverPagesPrivate(v37, v4, a3, v12, 1);
      goto LABEL_25;
    }
    v22 = 0LL;
    if ( v11 != -1 )
      goto LABEL_33;
    if ( (v5 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v21 + 35) & 8) == 0 && *(_QWORD *)v21 )
      {
LABEL_51:
        if ( ((unsigned __int16)v20 & 0x1FFu) < (unsigned __int64)(qword_1402FE558 & 0x1FF) )
        {
          MiFlushTbList((__int64)&v40, v18);
          MiUnlockWorkingSetExclusive((__int64)v10, v12, v27);
          DriverPage = MiAllocateDriverPage();
          v11 = DriverPage;
          v8 = v31;
          v12 = ExAcquireSpinLockExclusive(v10);
          continue;
        }
      }
    }
    else if ( *(_WORD *)(v21 + 32) == 1 )
    {
      goto LABEL_51;
    }
LABEL_33:
    MiLockPageAtDpcInline(v21, (__int64)v18, v19);
    if ( v11 != -1 )
    {
      if ( (v5 & 2) == 0 )
        goto LABEL_56;
      if ( (*(_BYTE *)(v21 + 35) & 8) == 0
        && *(_QWORD *)v21
        && !(unsigned int)MI_IS_PFN_FILE_ONLY(v21)
        && ((unsigned __int16)v20 & 0x1FFu) < (unsigned __int64)(v11 & 0x1FF) )
      {
        v23 = 48 * v11 - 0x58000000000LL;
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
        {
          v25 = MiLockProtoPoolPage(*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL, 0LL);
          if ( !v25 )
            goto LABEL_42;
        }
        else
        {
          v25 = 1LL;
        }
        v28 = MiTbFlushType((__int64)v10);
        if ( (unsigned int)MiTradeActivePage(v21, v23, (__int64)(v4 << 25) >> 16, v28, 2u) == 1 )
        {
          *(_QWORD *)(v21 + 16) = 128LL;
          MiReleaseFreshPage(v21);
          v11 = -1LL;
          v21 = v23;
          DriverPage = -1LL;
        }
        else
        {
LABEL_42:
          v11 = DriverPage;
        }
        if ( v25 > 1 )
          MiUnlockProtoPoolPage(v25, 0x11u);
        MiLockPageAtDpcInline(v21, v24, v26);
        v5 = a4;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v21 + 35) & 8) == 0 && *(_QWORD *)v21 )
        MiRemoveImagePageFromSystemWorkingSet((__int64)v10, v4, v21);
LABEL_62:
      v8 = v31;
      goto LABEL_63;
    }
LABEL_56:
    if ( v38 != 2 )
    {
      if ( (unsigned int)MiAreChargesNeededToLockPage(v21) )
        *(_BYTE *)(v21 + 35) |= 0x20u;
      ++*(_WORD *)(v21 + 32);
      goto LABEL_62;
    }
    if ( (unsigned int)MiAddLockedPageCharge(v21, 0) )
      goto LABEL_62;
    v8 = 0;
    v31 = 0;
LABEL_63:
    if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
      v22 = MiCaptureDirtyBitToPfn(v21);
    v29 = MI_READ_PTE_LOCK_FREE(v4);
    v36 = v29;
    if ( (v29 & 0x800) != 0 && (v29 & 0x42) == 0 )
    {
      MI_WRITE_VALID_PTE_VOLATILE(v4, 2LL);
      MiInsertTbFlushEntry((__int64)&v40, (__int64)(v4 << 25) >> 16, 1LL, 0);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v22 )
      MiReleasePageFileInfo((__int64)MiSystemPartition, v22, 1);
    v4 += 8LL;
  }
  while ( v4 <= a3 && v8 == 1 );
  if ( v12 != 17 )
  {
    MiFlushTbList((__int64)&v40, v17);
    MiUnlockWorkingSetExclusive((__int64)v10, v12, v30);
  }
  if ( v11 != -1 )
    MiReleaseFreshPage(48 * v11 - 0x58000000000LL);
  if ( v8 )
    return 0LL;
  MiUnlockCodePage(v39, v4 - 16);
  return 3221225626LL;
}
