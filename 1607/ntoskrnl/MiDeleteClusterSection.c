/*
 * XREFs of MiDeleteClusterSection @ 0x140021D60
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14001D810 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x14001DCB8 (MiClearPfnImageVerified.c)
 *     MiReleasePageFileSpace @ 0x140022238 (MiReleasePageFileSpace.c)
 *     MiTryLockLeafPage @ 0x140022EEC (MiTryLockLeafPage.c)
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009E2E0 (MiLockNestedPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertLargePageInNodeList @ 0x1401FBB4C (MiInsertLargePageInNodeList.c)
 */

__int64 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned int v6; // ebx
  unsigned __int64 v7; // r12
  unsigned int v8; // r9d
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  int v11; // r9d
  __int64 v12; // r10
  unsigned __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // r13
  _QWORD *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  ULONG_PTR v24; // rsi
  unsigned int v25; // ebp
  _QWORD *v26; // rdi
  ULONG_PTR v28; // rax
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h]
  __int64 v31; // [rsp+80h] [rbp+18h]

  v30 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF, a2, a3, a4);
  v5 = -1LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  while ( 1 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v8);
    v29 = v9;
    if ( !v9 )
      return 0LL;
    if ( (v9 & 0x800) == 0 )
      return 0LL;
    v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v29);
    if ( !(unsigned int)MiIsPfnInline(v10) || v11 && v10 != v5 )
      return 0LL;
    v8 = v11 + 1;
    v5 = v10 + 1;
    if ( v8 >= 0x10 )
    {
      v13 = v10 - 15;
      v14 = 48 * v10 - 0x58000000000LL;
      v15 = 48 * v12 - 0x58000000000LL;
      v31 = v15;
      v16 = (_QWORD *)(a2 + 120);
      while ( 1 )
      {
        if ( v10 == v13 )
        {
          v18 = 48 * v13 - 0x58000000000LL;
        }
        else
        {
          v17 = MiTryLockLeafPage(v16, 1LL);
          v18 = v17;
          if ( !v17 )
            goto LABEL_33;
          if ( v17 != v14 )
            goto LABEL_32;
        }
        if ( (_QWORD *)(*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v16 )
        {
          v28 = MI_READ_PTE_LOCK_FREE(v16);
          KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v28, *(_QWORD *)(v18 + 8));
        }
        if ( (*(_BYTE *)(v18 + 34) & 7) == 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            (v18 + 0x58000000000LL) / 48,
            *(_BYTE *)(v18 + 34) & 7,
            *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        if ( *(_WORD *)(v18 + 32) || (*(_BYTE *)(v18 + 35) & 0x40) != 0 )
          break;
        MiUnlinkPageFromList(v18);
        if ( ((*(_QWORD *)(v18 + 40) >> 54) & 7) == 3 )
          MiClearPfnImageVerified(v18, 0xCu);
        MiReleasePageFileSpace(v30, *(_QWORD *)(v18 + 16), 1LL);
        if ( (*(_DWORD *)(v18 + 16) & 4) != 0 )
          *(_QWORD *)(v18 + 16) &= ~4uLL;
        if ( (*(_DWORD *)(v18 + 16) & 2) != 0 )
          *(_QWORD *)(v18 + 16) &= ~2uLL;
        *(_BYTE *)(v18 + 35) &= 0xF8u;
        *(_QWORD *)(v18 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        if ( (*(_BYTE *)(v18 + 34) & 0xC0) != 0x40 )
        {
          MiAbortCombineScan(v18, v19, v20, v21);
          *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0x3F | 0x40;
        }
        *(_QWORD *)(v18 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(v18 + 34) &= 0xC7u;
        *(_BYTE *)(v18 + 35) &= ~0x20u;
        *(_BYTE *)(v18 + 34) &= ~0x10u;
        v22 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_QWORD *)(v18 + 40) = v22 | 0xFFFFFFFFCLL;
        *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 1;
        *(_QWORD *)(v18 + 24) &= 0x8000000000000000uLL;
        *v16 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v16, v19) )
          MiWritePteShadow(v23, 0LL);
        ++v7;
        --v10;
        v14 -= 48LL;
        --v16;
        if ( v10 < v13 )
          goto LABEL_33;
      }
      if ( v10 == v13 )
        goto LABEL_33;
LABEL_32:
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_33:
      v24 = v13 + 15;
      v25 = 0;
      if ( v7 )
      {
        v26 = (_QWORD *)(48 * (v13 + 15) - 0x57FFFFFFFD8LL);
        do
        {
          if ( v24 == v13 )
            break;
          if ( v7 != 16 )
          {
            *v26 &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v24);
          }
          _InterlockedAnd64(v26 - 2, 0x7FFFFFFFFFFFFFFFuLL);
          ++v25;
          --v24;
          v26 -= 6;
        }
        while ( v25 < v7 );
        v15 = v31;
      }
      if ( v7 == 16 )
      {
        MiInsertLargePageInNodeList(v13, 16LL, 1LL);
        goto LABEL_43;
      }
      if ( v7 )
      {
LABEL_43:
        MiLockNestedPageAtDpcInline(v15);
        *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - v7)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LOBYTE(v6) = v7 == 16;
      return v6;
    }
  }
}
