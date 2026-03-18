/*
 * XREFs of PspIumInitialize @ 0x1407E8D88
 * Callers:
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 * Callees:
 *     PsIumResumeAfterHibernate @ 0x14015A5EC (PsIumResumeAfterHibernate.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x1405622E0 (MmAllocateMappingAddress.c)
 */

char PspIumInitialize()
{
  PVOID MappingAddress; // rax

  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
  PspIumFreeMapping = MappingAddress;
  if ( MappingAddress )
  {
    PspIumLogBuffer = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x4C6D7549u);
    PsIumResumeAfterHibernate();
    LOBYTE(MappingAddress) = 1;
  }
  return (char)MappingAddress;
}
