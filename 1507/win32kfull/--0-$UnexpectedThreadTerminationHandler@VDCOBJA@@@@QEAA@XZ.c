/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025FF4C
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C00168E0 (GreSelectRedirectionBitmap.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0016C48 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreHintDCWnd @ 0x1C0016C90 (GreHintDCWnd.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C0292808 (--0DCOBJA@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

char *__fastcall UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(char *a1)
{
  char *v2; // rdx

  memset(a1, 0, 0x20uLL);
  v2 = 0LL;
  if ( a1 )
    v2 = a1 - 16;
  PushThreadGuardedObject(a1, v2, UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
