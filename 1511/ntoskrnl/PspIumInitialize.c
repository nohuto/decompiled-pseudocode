/*
 * XREFs of PspIumInitialize @ 0x1407722B8
 * Callers:
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 * Callees:
 *     PsIumResumeAfterHibernate @ 0x140126F10 (PsIumResumeAfterHibernate.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x1404E8208 (MmAllocateMappingAddress.c)
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
