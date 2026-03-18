/*
 * XREFs of PopResetActionDefaults @ 0x14050D0B0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_1402DE0AC = 1;
  dword_1402DE0A0 = 0;
  dword_1402DE0A8 = 0;
  byte_1402DE09D = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_1402DE082 = 0;
    qword_1402DE084 = 0LL;
    dword_1402DE090 = 0;
    byte_1402DE09C = 0;
    dword_1402DE094 = 13;
    dword_1402DE08C = 268435459;
  }
}
