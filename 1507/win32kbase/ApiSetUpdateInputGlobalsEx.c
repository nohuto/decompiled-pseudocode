/*
 * XREFs of ApiSetUpdateInputGlobalsEx @ 0x1C00CD618
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     IsUpdateInputGlobalsExSupported_0 @ 0x1C0002C90 (IsUpdateInputGlobalsExSupported_0.c)
 *     UpdateInputGlobalsEx_0 @ 0x1C0002C98 (UpdateInputGlobalsEx_0.c)
 */

__int64 ApiSetUpdateInputGlobalsEx()
{
  __int64 result; // rax

  result = IsUpdateInputGlobalsExSupported_0();
  if ( (int)result >= 0 )
    return UpdateInputGlobalsEx_0();
  return result;
}
