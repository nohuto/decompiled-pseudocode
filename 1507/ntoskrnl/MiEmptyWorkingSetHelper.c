/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x14007BAE0
 * Callers:
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1402138D0 (MiEmptyWsPrivatePagesCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021B8BC (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 PteShadow; // rax
  __int64 v9; // rdx
  __int64 v11; // rdx

  PteShadow = *a2;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *a2);
  v9 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( *(_WORD *)(v9 + 32) > 1u && (*(_BYTE *)(a1 + 216) & 7) != 0 )
    return 0LL;
  v11 = *(_QWORD *)(v9 + 8);
  if ( v11 >= 0 )
    MiDemoteCombinedPte(a2, v11 | 0x8000000000000000uLL);
  if ( dword_14034F248
    && (*(_BYTE *)a2 & 0x20) != 0
    && (*(_DWORD *)(a3 * *(unsigned int *)(*(_QWORD *)(a1 + 184) + 64LL) + *(_QWORD *)(*(_QWORD *)(a1 + 184) + 496LL)) & 0xE00LL) != 0xE00 )
  {
    MiLogPageAccess(a1, a2);
  }
  *(_QWORD *)&a4[2 * (*a4)++ + 2] = a3;
  if ( *a4 == 19 )
  {
    MiFreeWsleList(a1, a4, 0LL);
    *a4 = 0;
  }
  return 1LL;
}
