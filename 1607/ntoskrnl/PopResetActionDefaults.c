/*
 * XREFs of PopResetActionDefaults @ 0x140548C14
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_1403033CC = 1;
  dword_1403033C0 = 0;
  dword_1403033C8 = 0;
  byte_1403033BD = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_1403033A2 = 0;
    qword_1403033A4 = 0LL;
    dword_1403033B0 = 0;
    byte_1403033BC = 0;
    dword_1403033B4 = 15;
    dword_1403033AC = 268435459;
  }
}
