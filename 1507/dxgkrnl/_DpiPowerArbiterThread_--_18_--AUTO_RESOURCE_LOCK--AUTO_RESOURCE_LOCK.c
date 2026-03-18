/*
 * XREFs of _DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::AUTO_RESOURCE_LOCK @ 0x1C000CDA0
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00DE0A0 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE **__fastcall DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::AUTO_RESOURCE_LOCK(
        struct _ERESOURCE **a1,
        struct _ERESOURCE *a2)
{
  *a1 = a2;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(a2, 1u);
  return a1;
}
