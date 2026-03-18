/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x1400994E8
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140099428 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404573BC (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 14, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x31706E50u);
}
