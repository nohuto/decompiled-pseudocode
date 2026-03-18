/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1406BB034
 * Callers:
 *     PopFanUpdateCsState @ 0x1406BB0E4 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406BB248 (PopFanUpdateRunningState.c)
 * Callees:
 *     <none>
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_14032DFC8;
  if ( qword_14032DFC8 < (unsigned __int64)qword_14032DFD0 )
    v0 = qword_14032DFD0;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_14032DFD0) / 0x989680uLL);
}
