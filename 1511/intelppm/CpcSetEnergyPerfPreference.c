/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C00043F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcSetEnergyPerfPreference(__int64 a1, int a2)
{
  WriteGenAddr((_BYTE *)(*(_QWORD *)(a1 + 96) + 212LL), 255 * a2 / 0x64u);
}
