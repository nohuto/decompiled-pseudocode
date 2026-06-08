/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00043D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcSetAutonomousMode(__int64 a1, int a2)
{
  WriteGenAddr((_BYTE *)(*(_QWORD *)(a1 + 96) + 188LL), a2 != 0);
}
