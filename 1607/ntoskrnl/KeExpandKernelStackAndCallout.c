/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x1400B2AFC
 * Callers:
 *     IovpLogStackTrace @ 0x1407016C4 (IovpLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400EEE30 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((_DWORD)Callout, (_DWORD)Parameter, Size, 2, 0LL);
}
