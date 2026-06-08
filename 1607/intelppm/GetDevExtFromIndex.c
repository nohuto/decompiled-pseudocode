/*
 * XREFs of GetDevExtFromIndex @ 0x1C0003004
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C0014ACC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0015008 (DeregisterKernelIdleDomains.c)
 *     GetLpIndex @ 0x1C001D290 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
