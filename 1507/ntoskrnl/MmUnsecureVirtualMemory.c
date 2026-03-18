/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1404B5984
 * Callers:
 *     RtlFileMapFree @ 0x14016C7F8 (RtlFileMapFree.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     AlpcViewDestroyProcedure @ 0x140476810 (AlpcViewDestroyProcedure.c)
 *     AlpcpPrepareViewForDelivery @ 0x140477090 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpRestoreWriteAccess @ 0x140477450 (AlpcpRestoreWriteAccess.c)
 *     AlpcpForceUnlinkSecureView @ 0x14069F1C4 (AlpcpForceUnlinkSecureView.c)
 *     VerifierMmUnsecureVirtualMemory @ 0x140742350 (VerifierMmUnsecureVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140089350 (MiObtainReferencedSecureVad.c)
 *     MiRemoveSecureEntry @ 0x1400899A0 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v4; // rax
  char *v5; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainReferencedSecureVad((__int64)SecureHandle, &v6, v1, v2);
  v5 = (char *)v4;
  if ( v4 )
  {
    MiRemoveSecureEntry(v4, (__int64 *)SecureHandle);
    MiUnlockAndDereferenceVad(v5);
  }
}
