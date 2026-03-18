/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x140166FBC
 * Callers:
 *     PopSqmBatteryUpdate @ 0x14063E020 (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
