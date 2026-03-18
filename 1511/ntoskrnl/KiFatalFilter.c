/*
 * XREFs of KiFatalFilter @ 0x1401C40A0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14002C3A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
