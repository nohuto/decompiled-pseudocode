/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C00CD574
 * Callers:
 *     rimProcessFrameBasedHidInput @ 0x1C00C7F10 (rimProcessFrameBasedHidInput.c)
 *     rimProcessHidInput @ 0x1C00C7FA0 (rimProcessHidInput.c)
 * Callees:
 *     IsProcessHidRawInputSupported_0 @ 0x1C0002E10 (IsProcessHidRawInputSupported_0.c)
 *     ProcessHidRawInput_0 @ 0x1C0002E18 (ProcessHidRawInput_0.c)
 */

__int64 ApiSetProcessHidRawInput()
{
  __int64 result; // rax

  result = IsProcessHidRawInputSupported_0();
  if ( (int)result >= 0 )
    return ProcessHidRawInput_0();
  return result;
}
