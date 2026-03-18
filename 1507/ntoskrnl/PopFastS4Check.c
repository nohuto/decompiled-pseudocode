/*
 * XREFs of PopFastS4Check @ 0x140565990
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14014800C (PopActionRetrieveInitialState.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_14032E660 != 4 )
    return 0;
  if ( byte_14032E85C )
    return 0;
  result = 1;
  if ( byte_14032E709 != 1 || byte_14032E700 != 1 || byte_14032E70E != 2 )
    return 0;
  return result;
}
