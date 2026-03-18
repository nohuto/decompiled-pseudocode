/*
 * XREFs of MiAllocateProcessShadow @ 0x1406A7DDC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1405BFD3C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140123878 (MiAcquireNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14020ACD0 (KeMakeUserDirectoryTableBase.c)
 *     MiAllocateTopLevelPage @ 0x1406A13F8 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  __int16 *ProcessPartition; // rsi
  unsigned __int64 v3; // r8
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 TopLevelPage; // rax
  __int64 UserDirectoryTableBase; // rax

  if ( (MiFlags & 0x600000) != 0 )
  {
    ProcessPartition = MiGetProcessPartition(a1);
    if ( !(unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL) )
      return 3221225626LL;
    v5 = MiReservePtes((__int64)&qword_14034FC70, 1u, v3);
    v6 = v5;
    if ( !v5 )
    {
      MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
      return 3221225626LL;
    }
    TopLevelPage = MiAllocateTopLevelPage(a1, (unsigned __int64)v5);
    UserDirectoryTableBase = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
    *(_QWORD *)(a1 + 1520) = (__int64)((_QWORD)v6 << 25) >> 16;
    *(_QWORD *)(a1 + 632) = UserDirectoryTableBase;
  }
  return 0LL;
}
