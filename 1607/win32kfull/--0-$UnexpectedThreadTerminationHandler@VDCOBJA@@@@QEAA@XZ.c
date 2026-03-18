/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025CEBC
 * Callers:
 *     GreHintDCWnd @ 0x1C00452A0 (GreHintDCWnd.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C0049680 (GreSelectRedirectionBitmap.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0050EE0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C0291324 (--0DCOBJA@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
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
