/*
 * XREFs of MmGetSessionCreateTime @ 0x1404B1ED8
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x14054C744 (EtwpWriteProcessStarted.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140072328 (PsIsSystemProcess.c)
 */

__int64 __fastcall MmGetSessionCreateTime(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || PsIsSystemProcess(a1) )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 8128);
}
