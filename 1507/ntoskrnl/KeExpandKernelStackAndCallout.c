/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14012F378
 * Callers:
 *     IovpLogStackTrace @ 0x140735B40 (IovpLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140021700 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((void (__fastcall *)(__int64))Callout, (__int64)Parameter, Size, 2, 0LL);
}
