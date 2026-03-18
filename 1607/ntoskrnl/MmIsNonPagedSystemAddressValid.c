/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1401E6950
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703048 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x14070566C (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x140718C6C (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140718D44 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x1400EB24C (MmIsSpecialPoolAddress.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  return ((unsigned __int64)VirtualAddress < qword_140327F30
       || (unsigned __int64)VirtualAddress >= qword_140327F30 + 0xF8000000000LL)
      && (!qword_140326C30
       || (unsigned __int64)VirtualAddress < qword_140326C30
       || (unsigned __int64)VirtualAddress >= qword_140326C30 + (qword_140326C10 << 21)
       || (*(_BYTE *)(48
                    * ((*(_QWORD *)((((unsigned __int64)VirtualAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFDALL) & 0xF0) != 0x70)
      && ((unsigned int)MmIsSpecialPoolAddress((unsigned __int64)VirtualAddress)
       || (unsigned __int64)VirtualAddress < qword_140326910
       || (unsigned __int64)VirtualAddress >= qword_140326910 + 0x8000000000LL);
}
