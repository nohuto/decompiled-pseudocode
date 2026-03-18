/*
 * XREFs of ApiSetUpdateInputGlobalsEx @ 0x1C00CE954
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     IsUpdateInputGlobalsExSupported_0 @ 0x1C0002CC0 (IsUpdateInputGlobalsExSupported_0.c)
 *     UpdateInputGlobalsEx_0 @ 0x1C0002CC8 (UpdateInputGlobalsEx_0.c)
 */

__int64 ApiSetUpdateInputGlobalsEx()
{
  __int64 result; // rax

  result = IsUpdateInputGlobalsExSupported_0();
  if ( (int)result >= 0 )
    return UpdateInputGlobalsEx_0();
  return result;
}
