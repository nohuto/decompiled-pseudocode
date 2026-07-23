/*
 * XREFs of KiFatalFilter @ 0x1401D29E4
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400EEE30 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
