/*
 * XREFs of PopFastS4Check @ 0x1404F71A8
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140119F98 (PopActionRetrieveInitialState.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_1402DE0A0 != 4 )
    return 0;
  if ( byte_1402DE29C )
    return 0;
  result = 1;
  if ( byte_1402DE151 != 1 || byte_1402DE148 != 1 || byte_1402DE156 != 2 )
    return 0;
  return result;
}
