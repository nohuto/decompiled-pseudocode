/*
 * XREFs of MiInsertLargePageInNodeList @ 0x1401FBB4C
 * Callers:
 *     MiDeleteClusterSection @ 0x140021D60 (MiDeleteClusterSection.c)
 *     MiFreeLargePageMemory @ 0x140090970 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x1400922A0 (MiDeleteClusterPage.c)
 *     MiEnableNewPfns @ 0x1401E1B74 (MiEnableNewPfns.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x1401F58D4 (MiInsertUnusedLargePageInNodeList.c)
 *     MiGet64KPage @ 0x1401FB7C4 (MiGet64KPage.c)
 *     MiMoveLargeFreePage @ 0x1401FBB54 (MiMoveLargeFreePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInsertLargePageInNodeList(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  MiInsertLargePageInNodeListHelper(a1, a2, a3, 0);
}
