/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14063BC40
 * Callers:
 *     PopFanUpdateCsState @ 0x14063BCD8 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x14063BD4C (PopFanUpdateRunningState.c)
 * Callees:
 *     <none>
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_1402DE8C8;
  if ( qword_1402DE8C8 < (unsigned __int64)qword_1402DE8D0 )
    v0 = qword_1402DE8D0;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_1402DE8D0) / 0x989680uLL);
}
