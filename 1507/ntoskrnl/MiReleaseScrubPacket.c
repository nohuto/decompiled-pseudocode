/*
 * XREFs of MiReleaseScrubPacket @ 0x1406AA918
 * Callers:
 *     MiInitializeScrubPacket @ 0x1406AA87C (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1406AA94C (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReleasePteCopyList @ 0x140128890 (MiReleasePteCopyList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
