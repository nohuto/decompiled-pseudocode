/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x1406B8BB8
 * Callers:
 *     VfAddVerifierEntry @ 0x1406D4C98 (VfAddVerifierEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140037D00 (RtlImageNtHeaderEx.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1406B26C0 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1406B767C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x1406B8A3C (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x1406C74C8 (VfSuspectDriversAllocateEntry.c)
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
      if ( MmIsSessionAddress((__int64)v2) || RtlImageNtHeaderEx(1u, v2, 0LL, &NtHeader) >= 0 )
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
