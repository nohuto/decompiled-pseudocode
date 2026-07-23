/*
 * XREFs of MiLockTransitionLeafPage @ 0x1400B6E48
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReplacePageTablePage @ 0x1400A3B30 (MiReplacePageTablePage.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400B6D28 (MiSetProtectionOnTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x1400B6E00 (MiTryDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiUpdatePrefetchPriority @ 0x1400E4510 (MiUpdatePrefetchPriority.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiGetPageForWriteCluster @ 0x140116BC4 (MiGetPageForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E068C (MiReleaseCommitForResetPageCallback.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, _BYTE *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  ULONG_PTR v11; // [rsp+58h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v11 = v4;
      v5 = v4;
      if ( (unsigned __int64)a2 > 1 && ((v4 & 1) != 0 || (v4 & 0x400) != 0) || (v4 & 0x800) == 0 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(v4) )
      {
        v6 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v11);
        if ( MiIsPfnInline(v6) )
          break;
      }
    }
    v8 = 48 * v7 - 0x58000000000LL;
    if ( (unsigned __int64)a2 <= 1 )
    {
      if ( a2 == (_BYTE *)1 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          return 0LL;
        v5 = v11;
      }
      else
      {
        MiLockPageAtDpcInline(48 * v7 - 0x58000000000LL);
      }
    }
    else
    {
      *a2 = MiLockPageInline(48 * v7 - 0x58000000000LL);
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v5 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v9 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v9);
    }
  }
  if ( (unsigned __int64)a2 <= 1 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v5, *(_QWORD *)(v8 + 8));
  return v8;
}
