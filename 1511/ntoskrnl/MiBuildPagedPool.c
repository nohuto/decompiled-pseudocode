/*
 * XREFs of MiBuildPagedPool @ 0x140749564
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x1401D5B0C (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     InitializePagedPool @ 0x140749B74 (InitializePagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x14074A95C (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // r8
  ULONG_PTR v1; // rax
  __int64 result; // rax

  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
  {
    dword_1402FE210 = 0;
  }
  else if ( qword_140301390 < 0x80000 )
  {
    if ( qword_140301390 < 0x40000 )
      dword_1402FE210 = 8;
    else
      dword_1402FE210 *= 2;
  }
  else
  {
    dword_1402FE210 *= 8;
  }
  if ( !(unsigned int)MiInitializeDynamicRegion(6LL, 0xFFFFC00000000000uLL, 0xF8000000000LL) )
    return 0LL;
  qword_1402FF780 = 0xFFFFF6E000000000uLL;
  qword_1402FF7A8 = 4160749568LL;
  MmSizeOfPagedPoolInBytes = 0xF8000000000LL;
  byte_1402FFA58 = byte_1402FFA58 & 0xF8 | 3;
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&dword_1402FF980, 0x100000000LL) )
    return 0LL;
  v1 = MiReservePtes((__int64)&qword_1402FF7B0, 0x1F000u, v0);
  if ( !v1 )
    MiIssueNoPtesBugcheck(0x1F000uLL);
  MiInitializeDynamicBitmap(&qword_1402FF770, (__int64)(v1 << 25) >> 16, qword_1402FF7A8, 19);
  qword_1402FF770 = 0LL;
  qword_1402FF768 = 0LL;
  qword_1402FF788 = qword_1402FF7A8;
  InitializePagedPool();
  result = 1LL;
  qword_1402FE200 = 7680LL;
  qword_1402FE208 = 15360LL;
  return result;
}
