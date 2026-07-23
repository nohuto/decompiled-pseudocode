/*
 * XREFs of ZwPowerInformation @ 0x14015ADD0
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x14066A264 (PoGetLightestSystemStateForEject.c)
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
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}
