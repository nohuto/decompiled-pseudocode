/*
 * XREFs of ObReleaseObjectSecurity @ 0x14041F568
 * Callers:
 *     ObCheckCreateObjectAccess @ 0x140402FEC (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404046D0 (ObCheckObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1404057B0 (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     MiAllowImageMap @ 0x140429414 (MiAllowImageMap.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckTraverseAccess @ 0x14066631C (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1406804FC (PspCheckJobAccessState.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor((__int64)SecurityDescriptor, 1u);
  }
}
