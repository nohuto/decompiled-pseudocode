/*
 * XREFs of ObKillProcess @ 0x14044A8F4
 * Callers:
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x1404AE2B0 (ExDestroyHandleTable.c)
 */

void __fastcall ObKillProcess(PRKPROCESS PROCESS)
{
  void *v1; // rsi
  BOOLEAN v3; // bl

  v1 = (void *)PROCESS[1].ActiveProcessors.Bitmap[5];
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(PROCESS);
    IoSetThreadHardErrorMode(v3);
    PROCESS[1].ActiveProcessors.Bitmap[5] = 0LL;
    ExDestroyHandleTable(v1);
  }
}
