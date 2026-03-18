/*
 * XREFs of MiOkToShrinkPageFiles @ 0x14001BE3C
 * Callers:
 *     MiContractPagingFiles @ 0x14001BDC8 (MiContractPagingFiles.c)
 *     MiAttemptPageFileReduction @ 0x1401DBFE8 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiOkToShrinkPageFiles(unsigned __int64 a1, unsigned __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) )
    return a1 + 0x8000 > a1;
  return result;
}
