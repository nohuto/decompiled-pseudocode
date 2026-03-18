/*
 * XREFs of PopFastS4Check @ 0x1405342C0
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1401263B0 (PopActionRetrieveInitialState.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140303480 != 4 )
    return 0;
  if ( byte_140303E1C )
    return 0;
  result = 1;
  if ( byte_140303531 != 1 || byte_140303528 != 1 || byte_140303536 != 2 )
    return 0;
  return result;
}
