/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1406730B0
 * Callers:
 *     PopFanUpdateCsState @ 0x140673148 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406731BC (PopFanUpdateRunningState.c)
 * Callees:
 *     <none>
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140303F88;
  if ( qword_140303F88 < (unsigned __int64)qword_140303F90 )
    v0 = qword_140303F90;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140303F90) / 0x989680uLL);
}
