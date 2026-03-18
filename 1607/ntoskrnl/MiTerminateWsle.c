/*
 * XREFs of MiTerminateWsle @ 0x1400E22C0
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400751A0 (MiDeletePagablePteRange.c)
 *     MiDeletePageTableHierarchy @ 0x1400E4D40 (MiDeletePageTableHierarchy.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiDeleteValidSystemPte @ 0x140100BF0 (MiDeleteValidSystemPte.c)
 * Callees:
 *     MI_WSLE_LOG_ACCESS @ 0x140016E5C (MI_WSLE_LOG_ACCESS.c)
 *     MiLocateWsle @ 0x140046B50 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x140046F10 (MiRemoveWsle.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400BAB0C (MiRemoveLockedPageFromWorkingSet.c)
 *     MiReleaseWsle @ 0x1400E2430 (MiReleaseWsle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F2594 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiTerminateWsle(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3, int a4)
{
  ULONG_PTR *v7; // rsi
  ULONG_PTR Wsle; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a2 + 184) & 7) == 2 )
    v7 = &BugCheckParameter2;
  else
    v7 = (ULONG_PTR *)(*(_QWORD *)(a2 + 16) + 416LL);
  Wsle = MiLocateWsle(a1, a2, a3);
  v9 = *(_QWORD *)(Wsle * *((unsigned int *)v7 + 8) + v7[10]);
  v12 = v9;
  if ( a4 )
    MI_WSLE_LOG_ACCESS(a2, &v12, (_BYTE *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  if ( (v9 & 8) != 0
    && (*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
  {
    --*(_QWORD *)(a2 + 136);
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      --*(_QWORD *)(a2 + 120);
  }
  MiRemoveWsle(Wsle, a2);
  MiReleaseWsle(Wsle, a2, a1, 1LL);
  if ( Wsle >= v7[1] )
    return 0LL;
  v10 = MI_GET_PFN_FROM_PTE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiRemoveLockedPageFromWorkingSet(a2, a1, Wsle, v10);
  return 1LL;
}
