/*
 * XREFs of PopFastS4Check @ 0x140534800
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140126920 (PopActionRetrieveInitialState.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_1403033C0 != 4 )
    return 0;
  if ( byte_140303D5C )
    return 0;
  result = 1;
  if ( byte_140303471 != 1 || byte_140303468 != 1 || byte_140303476 != 2 )
    return 0;
  return result;
}
