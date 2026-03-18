/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C0007558
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C0007184 (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C001B1E0 (ACPIEnableInitializeACPI.c)
 *     ACPILoadProcessFADT @ 0x1C0085C24 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C00075AC (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0007618 (ACPIReadGpeStatusRegister.c)
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
