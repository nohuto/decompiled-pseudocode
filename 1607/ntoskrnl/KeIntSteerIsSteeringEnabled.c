/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x1400B3DE0
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14057D704 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
