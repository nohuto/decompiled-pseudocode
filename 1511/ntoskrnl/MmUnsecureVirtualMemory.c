/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1403F636C
 * Callers:
 *     RtlFileMapFree @ 0x140002870 (RtlFileMapFree.c)
 *     AlpcViewDestroyProcedure @ 0x1403F4818 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047BDF0 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     AlpcpRestoreWriteAccess @ 0x1404AAD84 (AlpcpRestoreWriteAccess.c)
 *     AlpcpForceUnlinkSecureView @ 0x14051A418 (AlpcpForceUnlinkSecureView.c)
 *     VerifierMmUnsecureVirtualMemory @ 0x1406C0B10 (VerifierMmUnsecureVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     MiRemoveSecureEntry @ 0x1400383F0 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 v2; // rax
  void *v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiObtainReferencedSecureVad((__int64)SecureHandle, &v4);
  v3 = (void *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, (__int64 *)SecureHandle);
    MiUnlockAndDereferenceVad(v3);
  }
}
