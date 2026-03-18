/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x140166FF4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14039F020 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1406BBF48 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
