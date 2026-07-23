/*
 * XREFs of ZwPlugPlayControl @ 0x180094AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  NTSTATUS result; // eax

  result = 285;
  __asm { syscall; Low latency system call }
  return result;
}
