/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x1400088EC
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14000882C (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F2B90 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 14, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x31706E50u);
}
