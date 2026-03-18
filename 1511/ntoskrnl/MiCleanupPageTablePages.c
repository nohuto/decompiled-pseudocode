/*
 * XREFs of MiCleanupPageTablePages @ 0x140017C64
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MmCreateShadowMapping @ 0x1406264D0 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  while ( *(_QWORD *)a1 != 0xFFFFFFFFFLL )
  {
    v4 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    MiReleaseFreshPage((__int64)v4);
  }
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 != v2 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v2 - v3;
      *(_QWORD *)(a1 + 16) = v6;
      MiReturnCommit(v5, v6);
      v7 = *(_QWORD *)(a1 + 8);
      if ( (int *)v7 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(*(_QWORD *)(a1 + 16));
        _InterlockedExchangeAdd64(&qword_1402FF3E8, *(_QWORD *)(a1 + 16));
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 5952), *(_QWORD *)(a1 + 16));
      }
      if ( (*(_DWORD *)(a1 + 36) & 0x40) == 0 && *(_DWORD *)(a1 + 32) == 2 )
        _InterlockedExchangeAdd64(&qword_1402FF828, -*(_QWORD *)(a1 + 16));
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
