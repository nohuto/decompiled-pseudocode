/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C0006E38
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C0006CFC (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C001AF70 (ACPIEnableInitializeACPI.c)
 *     ACPILoadProcessFADT @ 0x1C0085C08 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0006E8C (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0006EF8 (ACPIReadGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  __int64 i; // rbx
  __int64 v2; // rdx

  result = AcpiInformation;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    LOBYTE(v2) = ACPIReadGpeStatusRegister((unsigned int)i) & (*((_BYTE *)GpeEnable + i) | *((_BYTE *)GpeWakeEnable + i));
    ACPIWriteGpeStatusRegister((unsigned int)i, v2);
    result = AcpiInformation;
  }
  return result;
}
