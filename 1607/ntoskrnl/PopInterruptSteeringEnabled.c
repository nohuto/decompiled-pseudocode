/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1401443C8
 * Callers:
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopInterruptSteeringEnabled()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !PpmIntSteerDisabled )
    return KiIntSteerEnabled != 0;
  return result;
}
