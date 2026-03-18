/*
 * XREFs of KiInitializeDpcList @ 0x1400F44B4
 * Callers:
 *     KiInitializeProcessor @ 0x1403A7538 (KiInitializeProcessor.c)
 *     KiInitPrcb @ 0x1403A7C1C (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
