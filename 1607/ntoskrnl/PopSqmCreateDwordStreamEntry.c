/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x140171918
 * Callers:
 *     PopSqmBatteryUpdate @ 0x140676794 (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
