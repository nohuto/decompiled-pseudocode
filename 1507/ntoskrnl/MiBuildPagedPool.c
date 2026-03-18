/*
 * XREFs of MiBuildPagedPool @ 0x1407C9C28
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x140217F58 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 *     InitializePagedPool @ 0x1407CA2BC (InitializePagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 *     MiEliminatePageTablesOfOnes @ 0x1407CB738 (MiEliminatePageTablesOfOnes.c)
 *     MiInitializeDynamicRegion @ 0x1407CBDF8 (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildPagedPool()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx

  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
  {
    dword_14034E6C8 = 0;
  }
  else if ( qword_1403551D0 < 0x80000 )
  {
    if ( qword_1403551D0 < 0x40000 )
      dword_14034E6C8 = 8;
    else
      dword_14034E6C8 *= 2;
  }
  else
  {
    dword_14034E6C8 *= 8;
  }
  if ( !(unsigned int)MiInitializeDynamicRegion(6LL, 0xFFFFC00000000000uLL, 0xF8000000000LL) )
    return 0LL;
  qword_14034FC40 = 0xFFFFF6E000000000uLL;
  qword_14034FC68 = 4160749568LL;
  MmSizeOfPagedPoolInBytes = 0xF8000000000LL;
  byte_14034FF18 = byte_14034FF18 & 0xF8 | 3;
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(dword_14034FE40, 0x100000000LL) )
    return 0LL;
  v2 = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, 0x1F000u, v1);
  v3 = v2;
  if ( !v2 )
    MiIssueNoPtesBugcheck(0x1F000uLL);
  MiInitializeDynamicBitmap((unsigned __int64 *)&qword_14034FC30, (__int64)(v2 << 25) >> 16, qword_14034FC68, 3);
  MiEliminatePageTablesOfOnes(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 248LL);
  qword_14034FC30 = 0LL;
  qword_14034FC28 = 0LL;
  qword_14034FC48 = qword_14034FC68;
  InitializePagedPool();
  result = 1LL;
  qword_14034E6B8 = 7680LL;
  qword_14034E6C0 = 15360LL;
  return result;
}
