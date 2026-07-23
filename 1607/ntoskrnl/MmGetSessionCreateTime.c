/*
 * XREFs of MmGetSessionCreateTime @ 0x14049C2B8
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x14054CC84 (EtwpWriteProcessStarted.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
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
