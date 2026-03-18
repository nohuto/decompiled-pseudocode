/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C00CE8B0
 * Callers:
 *     rimProcessFrameBasedHidInput @ 0x1C00C8E14 (rimProcessFrameBasedHidInput.c)
 *     rimProcessHidInput @ 0x1C00C8EA0 (rimProcessHidInput.c)
 * Callees:
 *     IsProcessHidRawInputSupported_0 @ 0x1C0002E40 (IsProcessHidRawInputSupported_0.c)
 *     ProcessHidRawInput_0 @ 0x1C0002E48 (ProcessHidRawInput_0.c)
 */

__int64 ApiSetProcessHidRawInput()
{
  __int64 result; // rax

  result = IsProcessHidRawInputSupported_0();
  if ( (int)result >= 0 )
    return ProcessHidRawInput_0();
  return result;
}
