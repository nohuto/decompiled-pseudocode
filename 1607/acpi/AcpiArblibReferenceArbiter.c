/*
 * XREFs of AcpiArblibReferenceArbiter @ 0x1C002C2D0
 * Callers:
 *     AcpiArblibEjectInterface @ 0x1C00998A8 (AcpiArblibEjectInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiArblibReferenceArbiter(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 88));
}
