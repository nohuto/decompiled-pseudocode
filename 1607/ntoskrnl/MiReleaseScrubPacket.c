/*
 * XREFs of MiReleaseScrubPacket @ 0x140664D84
 * Callers:
 *     MiInitializeScrubPacket @ 0x140664CDC (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140664DB8 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x140107034 (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x140107058 (MiDereferencePageRuns.c)
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
