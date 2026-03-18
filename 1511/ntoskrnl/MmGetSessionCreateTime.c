/*
 * XREFs of MmGetSessionCreateTime @ 0x1404A3628
 * Callers:
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140091DCC (PsIsSystemProcess.c)
 */

__int64 __fastcall MmGetSessionCreateTime(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || PsIsSystemProcess(a1) )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 7992);
}
