/*
 * XREFs of MiHandleForkTransitionPte @ 0x1401E4E64
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiDuplicateCloneLeaf @ 0x1400F3798 (MiDuplicateCloneLeaf.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        _QWORD *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10,
        __int64 a11)
{
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r15
  unsigned int v20; // r15d
  volatile LONG *v21; // r15
  _WORD *v22; // r8
  unsigned int v23; // ebp
  __int64 Page; // rax
  _KPROCESS *v25; // rdx
  KIRQL v26; // r14
  int *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 result; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rsi
  int *v39; // rax
  __int64 v40; // rbx
  _KPROCESS *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  int *ProcessPartition; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h]
  unsigned __int64 v47; // [rsp+48h] [rbp-50h]
  _WORD *v48; // [rsp+50h] [rbp-48h] BYREF
  __int16 v49; // [rsp+58h] [rbp-40h]
  unsigned __int16 v50; // [rsp+5Ah] [rbp-3Eh]
  __int64 v54; // [rsp+C0h] [rbp+28h]

  v11 = a5;
  v12 = (a5 << 16) | 0x400;
  v46 = v12;
  v14 = 0LL;
  v47 = 0LL;
  v15 = MiLockTransitionLeafPage((ULONG_PTR)a3, 0LL);
  if ( v15 )
  {
    while ( 1 )
    {
      v17 = MI_READ_PTE_LOCK_FREE(a3);
      v19 = (v17 >> 5) & 0x1F;
      if ( !*(_WORD *)(v15 + 32) && ((v17 >> 5) & 0x18) != 0x10 )
      {
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)v11 = v17;
        if ( MiPteInShadowRange(v11) )
          MiWritePteShadow(v11, v17);
        if ( (*(_QWORD *)v11 & 0x80u) != 0LL )
          *(_QWORD *)v11 |= 0x20uLL;
        *(_QWORD *)(v11 + 24) = 2LL;
        *(_QWORD *)(v11 + 16) = (a9 & 1) != 0;
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(v11 + 16) & 0x7FFFFFFFFFFFFFFLL | (v17 >> 5 << 59);
        if ( (*(_QWORD *)(v15 + 16) & 0x1000LL) != 0 )
        {
          v14 = *(_QWORD *)(v15 + 16);
          if ( (*(_BYTE *)(v15 + 34) & 7) == 3 )
          {
            MiUnlinkPageFromList(v15, 0);
            v32 = 1;
          }
          else
          {
            v32 = 0;
          }
          *(_QWORD *)(v15 + 16) &= ~0x1000uLL;
          if ( v32 )
            MiInsertPageInList(v15, 8u);
        }
        *(_QWORD *)(v15 + 8) = v11;
        *(_QWORD *)(v15 + 40) |= 0x200000000000000uLL;
        v33 = *(_QWORD *)(v15 + 16);
        v34 = *(_QWORD *)(v15 + 40);
        if ( (v33 & 0x80u) != 0LL )
          *(_QWORD *)(v15 + 16) = v33 | 0x20;
        *(_QWORD *)(v15 + 16) |= 0x1000000uLL;
        v54 = v34 & 0xFFFFFFFFFLL;
        v44 = MI_READ_PTE_LOCK_FREE((__int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
        *(_QWORD *)(v15 + 40) = v34 ^ (v34 ^ MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v44)) & 0xFFFFFFFFFLL;
        v35 = MI_GET_PFN_FROM_PTE((__int64)&v44);
        MiLockNestedPageAtDpcInline(v35, v36, v37);
        *(_QWORD *)(v35 + 24) ^= (*(_QWORD *)(v35 + 24) ^ (*(_QWORD *)(v35 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *a3 = v12;
        if ( MiPteInShadowRange((__int64)a3) )
          MiWritePteShadow((__int64)a3, v12);
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v14 )
        {
          if ( (v14 & 0x2000) != 0 )
            v14 &= ~0x2000uLL;
          v38 = a1;
          v39 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1460));
          MiReleasePageFileInfo((__int64)v39, v14, 1);
        }
        else
        {
          v38 = a1;
        }
        if ( (a9 & 1) != 0 )
        {
          if ( (_DWORD)v19 != 24 )
            v12 |= 0x100uLL;
          ++*(_QWORD *)(a11 + 8);
        }
        *a4 = v12;
        if ( MiPteInShadowRange((__int64)a4) )
          MiWritePteShadow((__int64)a4, v12);
        MiLockAndDecrementShareCount(48 * v54 - 0x58000000000LL, 0);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        return 2LL;
      }
      v20 = *(unsigned __int8 *)(v15 + 34) >> 6;
      if ( *a8 != -1LL )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = (volatile LONG *)(a1 + 1280);
      MI_INITIALIZE_COLOR_BASE(a1 + 1280, 0, (__int64)&v48);
      v22 = v48;
      ++*v48;
      v23 = v50 | (unsigned __int16)(v49 & *v22);
      ProcessPartition = MiGetProcessPartition(a2);
      Page = MiGetPage((__int64)ProcessPartition, v23, 0);
      *a8 = Page;
      if ( Page == -1 )
      {
        v26 = a10;
        v27 = ProcessPartition;
        do
        {
          MiFlushTbList(a7, v25);
          LOBYTE(v28) = v26;
          MiUnlockWorkingSetExclusive((__int64)v21, v28, v29);
          MiWaitForFreePage((__int64)v27);
          v26 = ExAcquireSpinLockExclusive(v21);
          MiMakeSystemAddressValid((__int64)a3, 0LL, 0LL, v26, 1);
          v30 = MiGetPage((__int64)v27, v23, 0);
          *a8 = v30;
        }
        while ( v30 == -1 );
        v12 = v46;
        v14 = v47;
        a10 = v26;
        v11 = a5;
      }
      if ( (MI_READ_PTE_LOCK_FREE(a3) & 0x401) == 0 )
      {
        v15 = MiLockTransitionLeafPage((ULONG_PTR)a3, 0LL);
        if ( v15 )
          continue;
      }
      return 0LL;
    }
    v40 = 48 * *a8 - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v40, v16, v18);
    MiFinalizePageAttribute(v40, v20, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_BYTE *)(v15 + 34) & 0x20) != 0 )
    {
      MiFlushTbList(a7, v41);
      if ( (*(_BYTE *)(v15 + 34) & 8) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v42) = a10;
        MiUnlockWorkingSetExclusive(a1 + 1280, v42, v43);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
        return 0LL;
      }
    }
    if ( (unsigned int)MiDuplicateCloneLeaf((__int64)a3, a4, *a8, a10, 2u) )
    {
      result = 1LL;
      *a8 = -1LL;
      ++*a6;
      return result;
    }
  }
  return 0LL;
}
