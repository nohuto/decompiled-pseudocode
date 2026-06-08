/*
 * XREFs of CpcSetAutonomousMode @ 0x1C0002DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetAutonomousMode(__int64 a1, int a2)
{
  return WriteGenAddr(*(_QWORD *)(a1 + 96) + 188LL, a2 != 0);
}
