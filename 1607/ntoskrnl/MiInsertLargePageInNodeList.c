/*
 * XREFs of MiInsertLargePageInNodeList @ 0x1401FB978
 * Callers:
 *     MiDeleteClusterSection @ 0x1400218E0 (MiDeleteClusterSection.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiEnableNewPfns @ 0x1401E19A0 (MiEnableNewPfns.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x1401F5700 (MiInsertUnusedLargePageInNodeList.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 *     MiMoveLargeFreePage @ 0x1401FB980 (MiMoveLargeFreePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInsertLargePageInNodeList(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  MiInsertLargePageInNodeListHelper(a1, a2, a3, 0);
}
