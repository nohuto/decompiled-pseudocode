/*
 * XREFs of MiPfnZeroingNeeded @ 0x140104F58
 * Callers:
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiFindPagesForMdl @ 0x140101DCC (MiFindPagesForMdl.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiConvertContiguousPages @ 0x140104754 (MiConvertContiguousPages.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     MiAllocateMdlPagesByLists @ 0x14010FD90 (MiAllocateMdlPagesByLists.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MiGetFastLargePage @ 0x140662AD4 (MiGetFastLargePage.c)
 * Callees:
 *     MiIsFreshPfnFromZeroedList @ 0x1401F2AA4 (MiIsFreshPfnFromZeroedList.c)
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx
  _BOOL8 result; // rax
  int v4; // ecx

  result = 1;
  if ( (unsigned int)MiIsFreshPfnFromZeroedList(a1) )
  {
    v4 = *(unsigned __int8 *)(v2 + 34) >> 6;
    if ( v4 == v1 || ((unsigned __int8)((1 << v4) | (1 << v1)) & (unsigned __int8)byte_140326AA0) == 0 )
      return 0;
  }
  return result;
}
