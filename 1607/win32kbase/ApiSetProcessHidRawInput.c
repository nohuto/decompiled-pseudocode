/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C00DE880
 * Callers:
 *     rimProcessHidInput @ 0x1C00D84F0 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00DB5A8 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     IsProcessHidRawInputSupported_0 @ 0x1C0002E20 (IsProcessHidRawInputSupported_0.c)
 *     ProcessHidRawInput_0 @ 0x1C0002E28 (ProcessHidRawInput_0.c)
 */

__int64 ApiSetProcessHidRawInput()
{
  __int64 result; // rax

  result = IsProcessHidRawInputSupported_0();
  if ( (int)result >= 0 )
    return ProcessHidRawInput_0();
  return result;
}
