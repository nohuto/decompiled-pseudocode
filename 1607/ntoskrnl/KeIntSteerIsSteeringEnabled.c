/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x1400B5FB8
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14057D258 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
