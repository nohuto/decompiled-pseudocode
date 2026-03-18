/*
 * XREFs of ObReleaseObjectSecurity @ 0x1404206A8
 * Callers:
 *     ObCheckCreateObjectAccess @ 0x14040412C (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140405810 (ObCheckObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1404068F0 (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140406AA0 (SepAppendAceToTokenObjectAcl.c)
 *     MiAllowImageMap @ 0x14042A544 (MiAllowImageMap.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckTraverseAccess @ 0x140666238 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140680418 (PspCheckJobAccessState.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1404200D0 (ObDereferenceSecurityDescriptor.c)
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
