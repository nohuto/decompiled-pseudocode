/*
 * XREFs of PopFanEndCsFanPeriod @ 0x140672FCC
 * Callers:
 *     PopFanUpdateCsState @ 0x140673064 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406730D8 (PopFanUpdateRunningState.c)
 * Callees:
 *     <none>
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140304048;
  if ( qword_140304048 < (unsigned __int64)qword_140304050 )
    v0 = qword_140304050;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140304050) / 0x989680uLL);
}
