/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1404294AC
 * Callers:
 *     RtlFileMapFree @ 0x14010B304 (RtlFileMapFree.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040A858 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x1404EEAA0 (AlpcpRestoreWriteAccess.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054CBD8 (AlpcpForceUnlinkSecureView.c)
 *     AslpFilePartialViewFree @ 0x1406C9D60 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x140013F10 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedSecureVad @ 0x14002C070 (MiObtainReferencedSecureVad.c)
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
