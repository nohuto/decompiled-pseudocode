/*
 * XREFs of AcpiArblibDereferenceArbiter @ 0x1C0023C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiArblibDereferenceArbiter(__int64 a1)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 88));
}
