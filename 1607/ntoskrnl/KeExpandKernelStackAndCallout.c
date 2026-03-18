/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x1400B4CC4
 * Callers:
 *     IovpLogStackTrace @ 0x140701694 (IovpLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400F0FE0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((_DWORD)Callout, (_DWORD)Parameter, Size, 2, 0LL);
}
