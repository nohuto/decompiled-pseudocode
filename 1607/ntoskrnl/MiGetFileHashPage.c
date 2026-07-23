/*
 * XREFs of MiGetFileHashPage @ 0x14011525C
 * Callers:
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 Page; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  if ( !(unsigned int)MiChargeCommit(v2, 1uLL, 1) )
    return -1LL;
  if ( !(unsigned int)MiChargeResident((int *)v2, 1uLL, 128LL) )
  {
    MiReturnCommit(v2, 1uLL);
    return -1LL;
  }
  Page = MiGetPage(v2, a2, 0x80u);
  v6 = Page;
  if ( Page == -1 )
  {
    if ( (int *)v2 == MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 6528), 1uLL);
    MiReturnCommit(v2, 1uLL);
  }
  else
  {
    v7 = MiMapPageInHyperSpaceWorker(Page, &v10, 0x80000000);
    v8 = (void *)v7;
    v9 = 1024LL;
    if ( (v7 & 4) != 0 )
    {
      *(_DWORD *)v7 = 0;
      v8 = (void *)(v7 + 4);
      v9 = 1023LL;
    }
    memset(v8, 0, 8 * (v9 >> 1));
    if ( (v9 & 1) != 0 )
      *((_DWORD *)v8 + v9 - 1) = 0;
    LOBYTE(v9) = v10;
    MiUnmapPageInHyperSpaceWorker(v7, v9);
    _InterlockedAdd64(&qword_140327DC8, 1uLL);
  }
  return v6;
}
