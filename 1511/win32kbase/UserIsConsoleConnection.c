/*
 * XREFs of UserIsConsoleConnection @ 0x1C004CEC0
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00892C0 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
