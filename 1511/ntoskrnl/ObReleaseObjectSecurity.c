/*
 * XREFs of ObReleaseObjectSecurity @ 0x140420AB8
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     ObCheckCreateObjectAccess @ 0x14046E3E0 (ObCheckCreateObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckObjectAccess @ 0x140470650 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404707E4 (ObpCheckObjectReference.c)
 *     ObpCheckTraverseAccess @ 0x14062E1F0 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140641FD4 (PspCheckJobAccessState.c)
 *     SeQueryObjectMandatoryLabel @ 0x14064DC70 (SeQueryObjectMandatoryLabel.c)
 *     VerifierObReleaseObjectSecurity @ 0x1406D0CE4 (VerifierObReleaseObjectSecurity.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
  }
}
