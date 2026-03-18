/*
 * XREFs of ZwPowerInformation @ 0x14015A860
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x14066A180 (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel, InputBuffer, *(_QWORD *)&InputBufferLength);
}
