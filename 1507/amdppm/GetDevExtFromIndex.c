/*
 * XREFs of GetDevExtFromIndex @ 0x1C0004B30
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C0016618 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0016948 (DeregisterKernelIdleDomains.c)
 *     GetLpIndex @ 0x1C001AC90 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
