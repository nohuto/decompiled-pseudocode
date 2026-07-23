/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x140171E14
 * Callers:
 *     PopSqmBatteryUpdate @ 0x140676878 (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
