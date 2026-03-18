/*
 * XREFs of _DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::_AUTO_RESOURCE_LOCK @ 0x1C000CDD4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00DE0A0 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::_AUTO_RESOURCE_LOCK(PERESOURCE *a1)
{
  ExReleaseResourceLite(*a1);
  KeLeaveCriticalRegion();
}
