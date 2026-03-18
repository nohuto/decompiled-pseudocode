/*
 * XREFs of KiFatalFilter @ 0x1401D2BB8
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400F0FE0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
