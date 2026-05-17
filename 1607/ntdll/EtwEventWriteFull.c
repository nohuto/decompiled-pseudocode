/*
 * XREFs of EtwEventWriteFull @ 0x180059CB0
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800598DC (EvtIntReportEventWorker.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AFA4 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWriteFull(int a1, int a2, __int16 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, a3, a4, a5, a6, a7);
}
