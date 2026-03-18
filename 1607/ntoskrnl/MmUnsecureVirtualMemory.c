/*
 * XREFs of MmUnsecureVirtualMemory @ 0x14042A5DC
 * Callers:
 *     RtlFileMapFree @ 0x140084CFC (RtlFileMapFree.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040B998 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     AlpcViewDestroyProcedure @ 0x14042B168 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x14050BB10 (AlpcpRestoreWriteAccess.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054C698 (AlpcpForceUnlinkSecureView.c)
 *     AslpFilePartialViewFree @ 0x1406C9C28 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x140014390 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x14002BDA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedSecureVad @ 0x14002C4F0 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  ULONG_PTR v2; // rax
  char *v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiObtainReferencedSecureVad((ULONG_PTR)SecureHandle, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, (__int64 *)SecureHandle);
    MiUnlockAndDereferenceVad(v3);
  }
}
