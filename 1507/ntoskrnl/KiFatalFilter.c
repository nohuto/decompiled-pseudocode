/*
 * XREFs of KiFatalFilter @ 0x14020022C
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140021700 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
