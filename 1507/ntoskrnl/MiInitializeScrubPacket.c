/*
 * XREFs of MiInitializeScrubPacket @ 0x1406AA87C
 * Callers:
 *     MiScrubMemoryWorker @ 0x1406AA94C (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x1400597DC (MiCreatePteCopyList.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReleaseScrubPacket @ 0x1406AA918 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  PVOID PoolWithTag; // rax

  v3 = 0;
  *(_DWORD *)(a3 + 56) = a1;
  *(_QWORD *)(a3 + 32) = a2;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  MiCreatePteCopyList(0x100uLL, 0x100uLL, a3);
  if ( !*(_DWORD *)(a3 + 4) )
    return 3221225626LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6363454Du);
  *(_QWORD *)(a3 + 24) = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( a1 != -1 )
      *(_QWORD *)(a3 + 48) = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
  }
  else
  {
    v3 = -1073741670;
    MiReleaseScrubPacket(a3);
  }
  return v3;
}
