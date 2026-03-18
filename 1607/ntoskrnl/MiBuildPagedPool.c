/*
 * XREFs of MiBuildPagedPool @ 0x14078E258
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x1401E7418 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x1407A517C (MiInitializeDynamicRegion.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v2; // r8
  ULONG_PTR v3; // rdx
  __int64 result; // rax

  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
  {
    dword_1403264D0 = 0;
  }
  else if ( qword_140324DD0 < 0x80000 )
  {
    if ( qword_140324DD0 < 0x40000 )
      dword_1403264D0 = 8;
    else
      dword_1403264D0 *= 2;
  }
  else
  {
    dword_1403264D0 *= 8;
  }
  v0 = qword_140327F30;
  if ( !(unsigned int)MiInitializeDynamicRegion(6LL, qword_140327F30, 0xF8000000000LL) )
    return 0LL;
  qword_140327840 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  qword_140327868 = 4160749568LL;
  MmSizeOfPagedPoolInBytes = 0xF8000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(
                        (__int64)MiSystemPartition,
                        (__int64)AnyMultiplexedVm,
                        3,
                        0x100000000uLL) )
    return 0LL;
  v3 = MiReservePtes((__int64)&qword_140327870, 0x1F000uLL, v2);
  if ( !v3 )
    MiIssueNoPtesBugcheck(0x1F000uLL);
  MiInitializeDynamicBitmap(&qword_140327830, (__int64)(v3 << 25) >> 16, qword_140327868, 19);
  qword_140327830 = 0LL;
  qword_140327828 = 0LL;
  qword_140327848 = qword_140327868;
  InitializePagedPool();
  result = 1LL;
  qword_1403264C0 = 7680LL;
  qword_1403264C8 = 15360LL;
  return result;
}
