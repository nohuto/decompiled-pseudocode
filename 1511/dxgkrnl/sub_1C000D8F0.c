/*
 * XREFs of sub_1C000D8F0 @ 0x1C000D8F0
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE **__fastcall sub_1C000D8F0(struct _ERESOURCE **a1, struct _ERESOURCE *a2)
{
  *a1 = a2;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(a2, 1u);
  return a1;
}
