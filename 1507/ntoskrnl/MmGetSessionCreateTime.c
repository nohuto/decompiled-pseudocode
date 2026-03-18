/*
 * XREFs of MmGetSessionCreateTime @ 0x140508F04
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
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
