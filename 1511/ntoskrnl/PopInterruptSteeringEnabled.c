/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140139444
 * Callers:
 *     PpmCheckReInit @ 0x140537328 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopInterruptSteeringEnabled()
{
  return PpmIntSteerDisabled == 0;
}
