/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C0006DB0
 * Callers:
 *     ACPIVectorDisable @ 0x1C0003D40 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0003E00 (ACPIVectorEnable.c)
 *     ACPIGpeClearEventMasks @ 0x1C00068FC (ACPIGpeClearEventMasks.c)
 *     ACPIGpeBuildEventMasks @ 0x1C000DA68 (ACPIGpeBuildEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C0022E20 (ACPIEnableInitializeACPI.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B530 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C002B920 (ACPIInterruptServiceRoutine.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C004F210 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIVectorConnect @ 0x1C0057AB0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0057C50 (ACPIVectorDisconnect.c)
 *     ACPILoadProcessFADT @ 0x1C00A65F4 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0006E00 (ACPIWriteGpeEnableRegister.c)
 */

void *__fastcall ACPIGpeEnableDisableEvents(char a1, __int64 a2)
{
  void *result; // rax
  char v3; // di
  __int64 i; // rbx

  result = AcpiInformation;
  v3 = -(a1 != 0);
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    LOBYTE(a2) = v3 & *((_BYTE *)GpeCurEnable + i);
    ACPIWriteGpeEnableRegister((unsigned int)i, a2);
    result = AcpiInformation;
  }
  return result;
}
