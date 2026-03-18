/*
 * XREFs of PopSystemStateString @ 0x1404032B4
 * Callers:
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

const char *__fastcall PopSystemStateString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "Unspecified";
  v1 = a1 - 1;
  if ( !v1 )
    return "Working";
  v2 = v1 - 1;
  if ( !v2 )
    return "Sleeping1";
  v3 = v2 - 1;
  if ( !v3 )
    return "Sleeping2";
  v4 = v3 - 1;
  if ( !v4 )
    return "Sleeping3";
  v5 = v4 - 1;
  if ( !v5 )
    return "Hibernate";
  if ( v5 == 1 )
    return "Shutdown";
  return "?";
}
