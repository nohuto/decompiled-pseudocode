/*
 * XREFs of PoFxSetComponentLatency @ 0x1401E9700
 * Callers:
 *     VerifierPoFxSetComponentLatency @ 0x1406C0B80 (VerifierPoFxSetComponentLatency.c)
 * Callees:
 *     PopDiagTraceFxComponentLatency @ 0x1401EF910 (PopDiagTraceFxComponentLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
