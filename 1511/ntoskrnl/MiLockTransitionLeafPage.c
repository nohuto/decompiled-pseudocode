/*
 * XREFs of MiLockTransitionLeafPage @ 0x14001068C
 * Callers:
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MiReplacePageTablePage @ 0x1400D98A0 (MiReplacePageTablePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400EEBBC (MiSetProtectionOnTransitionPte.c)
 *     MiGetPageForWriteCluster @ 0x140109954 (MiGetPageForWriteCluster.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, _BYTE *a2)
{
  unsigned __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 v9; // rax

  while ( 1 )
  {
    do
    {
      v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v5 = v4;
      if ( (unsigned __int64)a2 > 1 && ((v4 & 1) != 0 || (v4 & 0x400) != 0) || (v4 & 0x800) == 0 )
        return 0LL;
    }
    while ( !(unsigned int)MI_IS_PFN((v4 >> 12) & 0xFFFFFFFFFLL) );
    v7 = 48 * v6 - 0x58000000000LL;
    if ( (unsigned __int64)a2 > 1 )
    {
      *a2 = MiLockPageInline(48 * v6 - 0x58000000000LL);
    }
    else if ( a2 == (_BYTE *)1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        return 0LL;
    }
    else
    {
      MiLockPageAtDpcInline(48 * v6 - 0x58000000000LL);
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v5 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v9 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v9);
    }
  }
  if ( (unsigned __int64)a2 <= 1 && (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v5, *(_QWORD *)(v7 + 8));
  return v7;
}
