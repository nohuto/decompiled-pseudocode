/*
 * XREFs of MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiUpdatePageTableUseCount @ 0x14001EC38 (MiUpdatePageTableUseCount.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiUpdateForkMaps @ 0x1400FE6FC (MiUpdateForkMaps.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401CEB88 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401DF0D8 (MiCreatePageTablesForPhysicalRange.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     MiWriteLargePde @ 0x1401E2CA4 (MiWriteLargePde.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  bool v6; // cf
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+30h] [rbp-28h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 14))) & 0xFFC000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
  {
    v5 = (__int64)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >> 47;
    v6 = v5 == -1;
    result = v5 + 1;
    if ( v6 || result == 1 )
    {
      v9 = (((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v7) = 4;
      v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v7 = (unsigned int)(v7 - 1);
        result = *(_QWORD *)*(&v9 + v7);
      }
      while ( (result & 1) != 0 && ((unsigned int)v7 > 1 || (result & 0x80u) == 0LL) && (_DWORD)v7 );
    }
  }
  return result;
}
