/*
 * XREFs of ?DxgkEngGetAdapterUniquenessPointer@@YAPECJXZ @ 0x1C0089290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

volatile int *DxgkEngGetAdapterUniquenessPointer(void)
{
  return (volatile int *)((char *)gpGdiSharedMemory + 1573024);
}
