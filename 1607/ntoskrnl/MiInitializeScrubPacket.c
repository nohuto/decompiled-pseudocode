/*
 * XREFs of MiInitializeScrubPacket @ 0x140664DC0
 * Callers:
 *     MiScrubMemoryWorker @ 0x140664E9C (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiReleaseScrubPacket @ 0x140664E68 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  PVOID PoolWithTag; // rax

  v4 = 0;
  *(_DWORD *)(a4 + 56) = a2;
  *(_QWORD *)(a4 + 32) = a3;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  MiCreatePteCopyList(0x100uLL, 0x100uLL, a4);
  if ( !*(_DWORD *)(a4 + 4) )
    return 3221225626LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6363454Du);
  *(_QWORD *)(a4 + 24) = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( a2 != -1 )
      *(_QWORD *)(a4 + 48) = MiReferencePageRuns(a1, 1u);
  }
  else
  {
    v4 = -1073741670;
    MiReleaseScrubPacket(a4);
  }
  return v4;
}
