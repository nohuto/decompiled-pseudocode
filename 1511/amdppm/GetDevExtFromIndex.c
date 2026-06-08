/*
 * XREFs of GetDevExtFromIndex @ 0x1C0004770
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C0016630 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0016960 (DeregisterKernelIdleDomains.c)
 *     GetLpIndex @ 0x1C001AC70 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
