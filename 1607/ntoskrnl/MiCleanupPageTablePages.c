/*
 * XREFs of MiCleanupPageTablePages @ 0x1401004E0
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     MmCreateShadowMapping @ 0x14065BD7C (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 */

void __fastcall MiCleanupPageTablePages(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  while ( *(_QWORD *)a1 != 0xFFFFFFFFFLL )
  {
    v2 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    MiReleaseFreshPage((__int64)v2);
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 != v3 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v3 - v4;
      *(_QWORD *)(a1 + 16) = v6;
      MiReturnCommit(v5, v6);
      v7 = *(_QWORD *)(a1 + 8);
      if ( (int *)v7 == MiSystemPartition )
        MiReturnResidentAvailable(*(_QWORD *)(a1 + 16));
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 6528), *(_QWORD *)(a1 + 16));
      if ( (*(_DWORD *)(a1 + 36) & 0x40) == 0 && *(_DWORD *)(a1 + 32) == 2 )
        _InterlockedExchangeAdd64(&qword_140327930, -*(_QWORD *)(a1 + 16));
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
