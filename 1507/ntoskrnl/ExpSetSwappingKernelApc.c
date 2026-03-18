/*
 * XREFs of ExpSetSwappingKernelApc @ 0x1403EF998
 * Callers:
 *     <none>
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x14006FE90 (KeSetKernelStackSwapEnable.c)
 */

LONG __fastcall ExpSetSwappingKernelApc(__int64 a1, __int64 a2, BOOLEAN *a3, struct _KEVENT **a4)
{
  struct _KEVENT *v4; // rbx

  v4 = *a4;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 1) != 0 )
    KeSetKernelStackSwapEnable(*a3);
  return KeSetEvent(v4, 0, 0);
}
