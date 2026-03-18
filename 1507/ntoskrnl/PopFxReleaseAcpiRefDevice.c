/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x140238CC4
 * Callers:
 *     PoFxAbandonDevice @ 0x140538568 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseAcpiRefDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
