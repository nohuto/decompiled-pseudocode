/*
 * XREFs of PopResetActionDefaults @ 0x140584484
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_14032E66C = 1;
  dword_14032E660 = 0;
  dword_14032E668 = 0;
  byte_14032E65D = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_14032E642 = 0;
    qword_14032E644 = 0LL;
    dword_14032E650 = 0;
    byte_14032E65C = 0;
    dword_14032E654 = 11;
    dword_14032E64C = 268435459;
  }
}
