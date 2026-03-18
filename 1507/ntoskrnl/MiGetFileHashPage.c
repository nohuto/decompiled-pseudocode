/*
 * XREFs of MiGetFileHashPage @ 0x140231DB8
 * Callers:
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  __int64 Page; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  void *v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 216);
  if ( !(unsigned int)MiChargeCommit(v2, 1uLL, 1) )
    return -1LL;
  if ( !(unsigned int)MiChargeResident((__int16 *)v2, 1uLL, 128LL, v4) )
  {
    MiReturnCommit(v2, 1LL);
    return -1LL;
  }
  if ( (__int16 *)v2 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14034F8E0, 1uLL);
  Page = MiGetPage(v2, a2, 0x80u);
  v7 = Page;
  if ( Page == -1 )
  {
    if ( (__int16 *)v2 == MiSystemPartition )
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_14034F8E8, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 5568), 1uLL);
    }
    MiReturnCommit(v2, 1LL);
  }
  else
  {
    v8 = MiMapPageInHyperSpaceWorker(Page, &v11);
    v9 = (void *)v8;
    v10 = 1024LL;
    if ( (v8 & 4) != 0 )
    {
      *(_DWORD *)v8 = 0;
      v9 = (void *)(v8 + 4);
      v10 = 1023LL;
    }
    memset(v9, 0, 8 * (v10 >> 1));
    if ( (v10 & 1) != 0 )
      *((_DWORD *)v9 + v10 - 1) = 0;
    MiUnmapPageInHyperSpaceWorker(v8, v11);
    _InterlockedAdd64(&qword_140350050, 1uLL);
  }
  return v7;
}
