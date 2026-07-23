/*
 * XREFs of ZwPowerInformation @ 0x14017FBD0
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x1406B04DC (PoGetLightestSystemStateForEject.c)
 *     VfZwPowerInformation @ 0x140756BFC (VfZwPowerInformation.c)
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
