/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1401679BC
 * Callers:
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopInterruptSteeringEnabled()
{
  return PpmIntSteerDisabled == 0;
}
