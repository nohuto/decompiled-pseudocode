/*
 * XREFs of MiCleanupPageTablePages @ 0x14021EA6C
 * Callers:
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MmCreateShadowMapping @ 0x1406A833C (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 */

void __fastcall MiCleanupPageTablePages(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
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
      if ( (__int16 *)v7 == MiSystemPartition )
      {
        MiReturnResidentAvailable(*(_QWORD *)(a1 + 16));
        _InterlockedExchangeAdd64(&qword_14034F868, *(_QWORD *)(a1 + 16));
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 5568), *(_QWORD *)(a1 + 16));
      }
      if ( (*(_DWORD *)(a1 + 36) & 0x40) == 0 && *(_DWORD *)(a1 + 32) == 2 )
        _InterlockedExchangeAdd64(&qword_14034FCE8, -*(_QWORD *)(a1 + 16));
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
