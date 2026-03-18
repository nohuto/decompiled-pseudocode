/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x1400F25E4
 * Callers:
 *     IovpLogStackTrace @ 0x1406B585C (IovpLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14002C3A0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((void (__fastcall *)(__int64))Callout, (__int64)Parameter, Size, 2, 0LL);
}
