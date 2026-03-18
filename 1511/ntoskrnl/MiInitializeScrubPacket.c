/*
 * XREFs of MiInitializeScrubPacket @ 0x14062CDC8
 * Callers:
 *     MiScrubMemoryWorker @ 0x14062CEA4 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiReleaseScrubPacket @ 0x14062CE70 (MiReleaseScrubPacket.c)
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
