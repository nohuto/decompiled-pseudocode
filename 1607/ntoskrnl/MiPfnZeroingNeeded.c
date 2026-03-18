/*
 * XREFs of MiPfnZeroingNeeded @ 0x1401071D8
 * Callers:
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiGetPage @ 0x14003DA50 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiFindPagesForMdl @ 0x14010404C (MiFindPagesForMdl.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiConvertContiguousPages @ 0x1401069D4 (MiConvertContiguousPages.c)
 *     MiInitializeMdlPages @ 0x140106A8C (MiInitializeMdlPages.c)
 *     MiAllocateMdlPagesByLists @ 0x14010F82C (MiAllocateMdlPagesByLists.c)
 *     MiGet64KPage @ 0x1401FB7C4 (MiGet64KPage.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC4CC (MiZeroAndConvertLargePage.c)
 *     MiGetFastLargePage @ 0x1406629F0 (MiGetFastLargePage.c)
 * Callees:
 *     MiIsFreshPfnFromZeroedList @ 0x1401F2C78 (MiIsFreshPfnFromZeroedList.c)
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
    if ( v4 == v1 || ((unsigned __int8)((1 << v4) | (1 << v1)) & (unsigned __int8)byte_140326A60) == 0 )
      return 0;
  }
  return result;
}
