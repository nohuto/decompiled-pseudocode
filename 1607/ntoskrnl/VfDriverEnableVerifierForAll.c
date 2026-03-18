/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140704C44
 * Callers:
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140013C40 (MmIsSessionAddress.c)
 *     RtlImageNtHeaderEx @ 0x140014260 (RtlImageNtHeaderEx.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x140702E74 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140704AC8 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x140715E70 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v2; // rbp
  __int64 Entry; // rax
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(i + 11)) )
    {
      v2 = i[6];
      if ( MmIsSessionAddress((unsigned __int64)v2) || RtlImageNtHeaderEx(1u, v2, 0LL, &NtHeader) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v4 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v6 = 0;
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v6);
        if ( !v6 )
          ExFreePoolWithTag(v4, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
