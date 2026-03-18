/*
 * XREFs of AcpiDeviceResetReference @ 0x1C00252F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiDeviceResetReference(volatile signed __int32 *a1)
{
  _InterlockedIncrement(a1);
}
