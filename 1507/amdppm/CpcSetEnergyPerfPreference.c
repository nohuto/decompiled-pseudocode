/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C0002D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetEnergyPerfPreference(__int64 a1, int a2)
{
  return WriteGenAddr(*(_QWORD *)(a1 + 96) + 212LL, 255 * a2 / 0x64u);
}
