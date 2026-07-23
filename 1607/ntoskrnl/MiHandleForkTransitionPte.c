/*
 * XREFs of MiHandleForkTransitionPte @ 0x1401F701C
 * Callers:
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 * Callees:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1400BBC2C (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 *a8,
        int a9,
        KIRQL a10,
        __int64 a11)
{
  unsigned __int64 v11; // r14
  __int64 PrototypePteDirect; // rdi
  unsigned __int64 v14; // rbx
  ULONG_PTR v15; // r8
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r15
  __int64 v21; // r15
  __int16 v22; // ax
  _WORD *v23; // r8
  __int16 v24; // r11
  unsigned int v25; // ebp
  __int64 Page; // rax
  _KPROCESS *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  KIRQL v30; // di
  __int64 v31; // rdx
  LONG *SharedVm; // rsi
  KIRQL v33; // al
  __int64 v34; // rax
  __int64 result; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // r11
  int v40; // r13d
  _QWORD *v41; // rsi
  int v42; // eax
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // r9
  unsigned __int64 v47; // rsi
  __int64 v48; // rcx
  unsigned __int64 v49; // r9
  __int64 v50; // rsi
  struct _KEVENT *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rbx
  _KPROCESS *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  LONG *v58; // rbx
  unsigned int v59; // [rsp+30h] [rbp-68h]
  int *v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h] BYREF
  __int64 v62; // [rsp+40h] [rbp-58h]
  _WORD *v63; // [rsp+48h] [rbp-50h] BYREF
  __int16 v64; // [rsp+50h] [rbp-48h]
  unsigned __int16 v65; // [rsp+52h] [rbp-46h]
  __int64 v69; // [rsp+C0h] [rbp+28h]

  v11 = a5;
  PrototypePteDirect = MiMakePrototypePteDirect(a5);
  v62 = PrototypePteDirect;
  v14 = 0LL;
  v16 = MiLockTransitionLeafPage(v15, 0LL);
  if ( v16 )
  {
    while ( 1 )
    {
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
      v20 = (v17 >> 5) & 0x1F;
      if ( *(_WORD *)(v16 + 32) == (_WORD)v19 && ((v17 >> 5) & 0x18) != 0x10 )
      {
        *(_QWORD *)v11 = v19;
        *(_QWORD *)v11 = v17;
        if ( MiPteInShadowRange(v11) )
          MiWritePteShadow(v37, v36);
        MI_MAKE_PROTECT_WRITE_COPY(v11);
        *(_QWORD *)(v11 + 24) = 2LL;
        v40 = v39 & a9;
        if ( ((unsigned int)v39 & a9) != 0 )
          *(_QWORD *)(v11 + 16) = v39;
        else
          *(_QWORD *)(v11 + 16) = v38;
        v41 = (_QWORD *)(v16 + 16);
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(v11 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v20 << 59);
        if ( (((unsigned __int8)*(_QWORD *)(v16 + 16) >> 1) & (unsigned __int8)v39) != 0 )
        {
          v14 = *(_QWORD *)(v16 + 16);
          if ( (*(_BYTE *)(v16 + 34) & 7) == 3 )
          {
            MiUnlinkPageFromList(v16, 0);
            v42 = 1;
          }
          else
          {
            v42 = v38;
          }
          *v41 &= ~2uLL;
          if ( v42 )
            MiInsertPageInList(v16, 8u);
        }
        *(_QWORD *)(v16 + 8) = v11;
        *(_QWORD *)(v16 + 40) |= 0x200000000000000uLL;
        MI_MAKE_PROTECT_WRITE_COPY(v16 + 16);
        v43 = *(_QWORD *)(v16 + 40);
        *v41 |= 8uLL;
        v69 = v43 & 0xFFFFFFFFFLL;
        v61 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v44 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v61);
        *(_QWORD *)(v16 + 40) = v46 ^ v45 & (v46 ^ v44);
        v47 = MI_GET_PFN_FROM_PTE((__int64)&v61);
        MiLockNestedPageAtDpcInline(v47);
        *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *a3 = PrototypePteDirect;
        if ( MiPteInShadowRange((unsigned __int64)a3) )
          MiWritePteShadow(v48, PrototypePteDirect);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v49);
        if ( v14 )
        {
          if ( (v14 & 4) != 0 )
            v14 &= ~4uLL;
          v50 = a1;
          v51 = (struct _KEVENT *)MiPartitionIdToPointer(*(_WORD *)(a1 + 1444));
          MiReleasePageFileInfo(v51, v14, 1);
        }
        else
        {
          v50 = a1;
        }
        if ( v40 )
        {
          if ( (_DWORD)v20 != 24 )
            PrototypePteDirect |= 8uLL;
          ++*(_QWORD *)(a11 + 8);
        }
        *a4 = PrototypePteDirect;
        if ( MiPteInShadowRange((unsigned __int64)a4) )
          MiWritePteShadow(v52, PrototypePteDirect);
        MiLockAndDecrementShareCount(48 * v69 - 0x58000000000LL, 0);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        return 2LL;
      }
      v21 = a1 + 1280;
      v59 = *(unsigned __int8 *)(v16 + 34) >> 6;
      if ( *a8 != -1 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v18);
      MiInitializePageColorBase(v21, 0, (__int64)&v63);
      v22 = v64;
      v23 = v63;
      *v63 += v24;
      v25 = v65 | (unsigned __int16)(v22 & *v23);
      v60 = MiPartitionIdToPointer(*(_WORD *)(a2 + 1444));
      Page = MiGetPage((__int64)v60, v25, 0);
      *a8 = Page;
      if ( Page == -1 )
      {
        v30 = a10;
        do
        {
          MiFlushTbList(a7, v27, v28, v29);
          LOBYTE(v31) = v30;
          MiUnlockWorkingSetExclusive(v21, v31);
          MiWaitForFreePage((__int64)v60);
          SharedVm = MiGetSharedVm(v21);
          v33 = ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
          v30 = v33;
          MiMakeSystemAddressValid((ULONG_PTR)a3, 0LL, 0, v33, 1);
          v34 = MiGetPage((__int64)v60, v25, 0);
          *a8 = v34;
        }
        while ( v34 == -1 );
        v11 = a5;
        a10 = v30;
        PrototypePteDirect = v62;
      }
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a3) & 0x401) == 0 )
      {
        v16 = MiLockTransitionLeafPage((ULONG_PTR)a3, 0LL);
        if ( v16 )
          continue;
      }
      return 0LL;
    }
    v53 = 48 * *a8 - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v53);
    MiFinalizePageAttribute(v53, v59, 1u);
    _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_BYTE *)(v16 + 34) & 0x20) != 0 )
    {
      MiFlushTbList(a7, v54, v55, v56);
      if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v57) = a10;
        MiUnlockWorkingSetExclusive(v21, v57);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v58 = MiGetSharedVm(v21);
        ExAcquireSpinLockExclusive(v58);
        v58[1] = 0;
        return 0LL;
      }
    }
    LOBYTE(v56) = a10;
    if ( (unsigned int)MiDuplicateCloneLeaf((__int64)a3, a4, *a8, v56, 2u) )
    {
      result = 1LL;
      *a8 = -1LL;
      ++*a6;
      return result;
    }
  }
  return 0LL;
}
