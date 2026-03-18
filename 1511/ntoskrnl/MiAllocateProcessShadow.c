/*
 * XREFs of MiAllocateProcessShadow @ 0x140626044
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140548C5C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x1401CBC30 (KeMakeUserDirectoryTableBase.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  int *ProcessPartition; // rsi
  unsigned __int64 v3; // r8
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx
  __int64 TopLevelPage; // rax
  __int64 UserDirectoryTableBase; // rax

  if ( (MiFlags & 0x600000) != 0 )
  {
    ProcessPartition = MiGetProcessPartition(a1);
    if ( !(unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL) )
      return 3221225626LL;
    v5 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v3);
    v6 = v5;
    if ( !v5 )
    {
      MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
      return 3221225626LL;
    }
    TopLevelPage = MiAllocateTopLevelPage(a1, v5);
    UserDirectoryTableBase = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
    *(_QWORD *)(a1 + 1528) = (__int64)(v6 << 25) >> 16;
    *(_QWORD *)(a1 + 632) = UserDirectoryTableBase;
  }
  return 0LL;
}
