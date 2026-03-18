/*
 * XREFs of PoFxSetComponentWake @ 0x1401E9780
 * Callers:
 *     VerifierPoFxSetComponentWake @ 0x1406C0B90 (VerifierPoFxSetComponentWake.c)
 * Callees:
 *     PopDiagTraceFxComponentWake @ 0x1401EFA88 (PopDiagTraceFxComponentWake.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  PopDiagTraceFxComponentWake(*(_QWORD *)(a1 + 48));
  LOBYTE(v6) = a3;
  return PopPepComponentSetWakeHint(*(_QWORD *)(a1 + 56), a2, v6);
}
