/*
 * XREFs of PoFxSetComponentWake @ 0x1402020E0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxComponentWake @ 0x140208558 (PopDiagTraceFxComponentWake.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  PopDiagTraceFxComponentWake(*(_QWORD *)(a1 + 48));
  LOBYTE(v6) = a3;
  return PopPepComponentSetWakeHint(*(_QWORD *)(a1 + 56), a2, v6);
}
