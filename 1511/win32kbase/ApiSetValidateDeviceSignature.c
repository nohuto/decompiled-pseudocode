/*
 * XREFs of ApiSetValidateDeviceSignature @ 0x1C000A12C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     IsValidateDeviceSignatureSupported_0 @ 0x1C0002DB0 (IsValidateDeviceSignatureSupported_0.c)
 *     ValidateDeviceSignature_0 @ 0x1C0002DB8 (ValidateDeviceSignature_0.c)
 */

__int64 ApiSetValidateDeviceSignature()
{
  if ( (int)IsValidateDeviceSignatureSupported_0() < 0 )
    return 3221225659LL;
  else
    return ValidateDeviceSignature_0();
}
