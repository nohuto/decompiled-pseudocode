/*
 * XREFs of UserIsConsoleConnection @ 0x1C001F550
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C0086040 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
