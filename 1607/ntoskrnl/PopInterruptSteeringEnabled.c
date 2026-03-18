/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140143E58
 * Callers:
 *     PpmCheckReInit @ 0x14056A1B4 (PpmCheckReInit.c)
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
