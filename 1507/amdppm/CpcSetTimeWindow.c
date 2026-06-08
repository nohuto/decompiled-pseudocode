/*
 * XREFs of CpcSetTimeWindow @ 0x1C0002DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetTimeWindow(__int64 a1, unsigned int a2)
{
  return WriteGenAddr(*(_QWORD *)(a1 + 96) + 116LL, a2);
}
