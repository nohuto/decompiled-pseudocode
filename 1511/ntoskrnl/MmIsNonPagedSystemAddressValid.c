/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1401D5650
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1406B95E0 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1406CA25C (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1406CA334 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  __int64 v1; // r10

  if ( (unsigned __int64)VirtualAddress + 0x400000000000LL <= 0xF7FFFFFFFFFLL
    || qword_1402FE8F0
    && (unsigned __int64)VirtualAddress >= qword_1402FE8F0
    && (unsigned __int64)VirtualAddress < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
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
