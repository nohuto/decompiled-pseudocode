/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1401E677C
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x14070569C (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x140718C6C (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140718D44 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  return ((unsigned __int64)VirtualAddress < qword_140327F70
       || (unsigned __int64)VirtualAddress >= qword_140327F70 + 0xF8000000000LL)
      && (!qword_140326C70
       || (unsigned __int64)VirtualAddress < qword_140326C70
       || (unsigned __int64)VirtualAddress >= qword_140326C70 + (qword_140326C50 << 21)
       || (*(_BYTE *)(48
                    * ((*(_QWORD *)((((unsigned __int64)VirtualAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFDALL) & 0xF0) != 0x70)
      && ((unsigned int)MmIsSpecialPoolAddress((unsigned __int64)VirtualAddress)
       || (unsigned __int64)VirtualAddress < qword_140326950
       || (unsigned __int64)VirtualAddress >= qword_140326950 + 0x8000000000LL);
}
