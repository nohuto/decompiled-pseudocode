/*
 * XREFs of GetDevExtFromIndex @ 0x1C0006184
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C0017DF4 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0018124 (DeregisterKernelIdleDomains.c)
 *     GetLpIndex @ 0x1C001D910 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
