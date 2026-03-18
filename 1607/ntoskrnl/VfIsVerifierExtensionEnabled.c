/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x140171964
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140707FBC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
