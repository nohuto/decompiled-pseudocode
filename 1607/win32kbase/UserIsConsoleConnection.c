/*
 * XREFs of UserIsConsoleConnection @ 0x1C004A940
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C008A260 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
