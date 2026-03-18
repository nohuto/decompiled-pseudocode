/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x140195E60
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x14073C92C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
