/*
 * XREFs of ZwPowerInformation @ 0x140151200
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x140631FD0 (PoGetLightestSystemStateForEject.c)
 *     VfZwPowerInformation @ 0x1406D3034 (VfZwPowerInformation.c)
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
