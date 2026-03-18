/*
 * XREFs of MiReleaseScrubPacket @ 0x14062CE70
 * Callers:
 *     MiInitializeScrubPacket @ 0x14062CDC8 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x14062CEA4 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
