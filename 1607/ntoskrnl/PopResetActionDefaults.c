/*
 * XREFs of PopResetActionDefaults @ 0x1405486D4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_14030348C = 1;
  dword_140303480 = 0;
  dword_140303488 = 0;
  byte_14030347D = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_140303462 = 0;
    qword_140303464 = 0LL;
    dword_140303470 = 0;
    byte_14030347C = 0;
    dword_140303474 = 15;
    dword_14030346C = 268435459;
  }
}
