/*
 * XREFs of ExpSetSwappingKernelApc @ 0x14039D514
 * Callers:
 *     <none>
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x1400DE5E0 (KeSetKernelStackSwapEnable.c)
 */

LONG __fastcall ExpSetSwappingKernelApc(__int64 a1, __int64 a2, BOOLEAN *a3, struct _KEVENT **a4)
{
  struct _KEVENT *v4; // rbx

  v4 = *a4;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 1) != 0 )
    KeSetKernelStackSwapEnable(*a3);
  return KeSetEvent(v4, 0, 0);
}
