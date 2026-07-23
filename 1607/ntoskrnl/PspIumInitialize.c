/*
 * XREFs of PspIumInitialize @ 0x1407AA3D0
 * Callers:
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 * Callees:
 *     PsIumResumeAfterHibernate @ 0x140132248 (PsIumResumeAfterHibernate.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
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
    if ( (VslGetNestedPageProtectionFlags() & 0x40) != 0 )
      PspSystemMitigationOptions = PspSystemMitigationOptions & 0xFFFFFF8FFFFFFFFFuLL | 0x5000000000LL;
    LOBYTE(MappingAddress) = 1;
  }
  return (char)MappingAddress;
}
