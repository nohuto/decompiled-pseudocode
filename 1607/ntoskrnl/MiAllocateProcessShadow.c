/*
 * XREFs of MiAllocateProcessShadow @ 0x14065B8D0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14057D0BC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiReleaseNonPagedResources @ 0x14013EB1C (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x1401DBB9C (KeMakeUserDirectoryTableBase.c)
 *     MiAcquireNonPagedResources @ 0x1401E1B24 (MiAcquireNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x140656D60 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  int *ProcessPartition; // rsi
  unsigned __int64 v3; // r8
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx
  __int64 TopLevelPage; // rax

  if ( (MiFlags & 0xC00000) != 0 )
  {
    ProcessPartition = MiGetProcessPartition(a1);
    if ( !(unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL) )
      return 3221225626LL;
    v5 = MiReservePtes((__int64)&qword_140327870, 1uLL, v3);
    v6 = v5;
    if ( !v5 )
    {
      MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
      return 3221225626LL;
    }
    TopLevelPage = MiAllocateTopLevelPage(a1, v5);
    *(_QWORD *)(a1 + 704) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
    *(_QWORD *)(a1 + 1536) = (__int64)(v6 << 25) >> 16;
  }
  return 0LL;
}
