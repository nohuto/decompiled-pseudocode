/*
 * XREFs of PoFxSetComponentResidency @ 0x1401E9740
 * Callers:
 *     VerifierPoFxSetComponentResidency @ 0x1406C0B88 (VerifierPoFxSetComponentResidency.c)
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x1401EF9CC (PopDiagTraceFxComponentResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
