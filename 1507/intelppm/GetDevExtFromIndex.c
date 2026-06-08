/*
 * XREFs of GetDevExtFromIndex @ 0x1C0002760
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C00159B0 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0015E04 (DeregisterKernelIdleDomains.c)
 *     GetLpIndex @ 0x1C001BDC0 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
