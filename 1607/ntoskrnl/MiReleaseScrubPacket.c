/*
 * XREFs of MiReleaseScrubPacket @ 0x140664E68
 * Callers:
 *     MiInitializeScrubPacket @ 0x140664DC0 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140664E9C (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  MiReleasePteCopyList(a1);
  v2 = *(void **)(a1 + 24);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    MiDereferencePageRuns(v3);
}
