/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C00075D4
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C0006CFC (ACPIGpeClearEventMasks.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0008D18 (ACPIGpeBuildEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C001AF70 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C003BF10 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C003CA70 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C003D060 (ACPIInterruptServiceRoutine.c)
 *     ACPIVectorConnect @ 0x1C00414C0 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C0041620 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C00416B0 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C0041780 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C0085C08 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0007624 (ACPIWriteGpeEnableRegister.c)
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
