/*
 * XREFs of AcpiResetDeviceAlreadyProcessed @ 0x1C004BFDC
 * Callers:
 *     AcpiDeviceResetCompleteResetWorker @ 0x1C004B940 (AcpiDeviceResetCompleteResetWorker.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C004BD64 (AcpiDeviceResetInvokeReset.c)
 *     AcpiPlatformLevelDeviceReset @ 0x1C004BEF0 (AcpiPlatformLevelDeviceReset.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiResetDeviceAlreadyProcessed(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rax

  v2 = a1 + 48;
  for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(i + 8) )
  {
    if ( i == v2 )
      return 0;
    if ( *(_QWORD *)(i - 8) == *(_QWORD *)(a2 + 32) )
      break;
  }
  return 1;
}
