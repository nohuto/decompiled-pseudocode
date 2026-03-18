/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1402175B8
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x140739BF4 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x14074D1B8 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14074D3D8 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  __int64 v1; // r10

  if ( (unsigned __int64)VirtualAddress + 0x400000000000LL <= 0xF7FFFFFFFFFLL
    || qword_14034EDB0
    && (unsigned __int64)VirtualAddress >= qword_14034EDB0
    && (unsigned __int64)VirtualAddress < qword_14034EDB0 + (qword_14034ED90 << 21)
    && (*(_BYTE *)(48
                 * ((*(_QWORD *)((((unsigned __int64)VirtualAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
  {
    return 0;
  }
  if ( (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)VirtualAddress) )
    return 1;
  return (unsigned __int64)(v1 + 0x70000000000LL) > 0x7FFFFFFFFFLL;
}
