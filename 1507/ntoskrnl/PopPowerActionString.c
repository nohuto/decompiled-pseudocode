/*
 * XREFs of PopPowerActionString @ 0x1406B07B0
 * Callers:
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

const char *__fastcall PopPowerActionString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "None";
  v1 = a1 - 2;
  if ( !v1 )
    return "Sleep";
  v2 = v1 - 1;
  if ( !v2 )
    return "Hibernate";
  v3 = v2 - 1;
  if ( !v3 )
    return "Shutdown";
  v4 = v3 - 1;
  if ( !v4 )
    return "ShutdownReset";
  v5 = v4 - 1;
  if ( !v5 )
    return "ShutdownOff";
  if ( v5 == 1 )
    return "WarmEject";
  return "?";
}
