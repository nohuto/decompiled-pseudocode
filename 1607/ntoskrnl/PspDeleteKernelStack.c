/*
 * XREFs of PspDeleteKernelStack @ 0x1400EEA74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDeleteKernelStack(__int64 a1, _QWORD *a2)
{
  return MmDeleteKernelStack(*a2, 4LL);
}
