/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C00080FC
 * Callers:
 *     ACPIVectorDisable @ 0x1C0004740 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C00047C0 (ACPIVectorEnable.c)
 *     ACPIGpeClearEventMasks @ 0x1C0007184 (ACPIGpeClearEventMasks.c)
 *     ACPIGpeBuildEventMasks @ 0x1C00089F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C001B1E0 (ACPIEnableInitializeACPI.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0024420 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C0024840 (ACPIInterruptServiceRoutine.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C003C2A0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIVectorConnect @ 0x1C0041000 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0041170 (ACPIVectorDisconnect.c)
 *     ACPILoadProcessFADT @ 0x1C0085C24 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C000814C (ACPIWriteGpeEnableRegister.c)
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
