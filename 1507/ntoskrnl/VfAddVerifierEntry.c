/*
 * XREFs of VfAddVerifierEntry @ 0x14075886C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     MmEnableVerifierForDriver @ 0x140735D38 (MmEnableVerifierForDriver.c)
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversAllocateEntry @ 0x140749ECC (VfSuspectDriversAllocateEntry.c)
 */

__int64 __fastcall VfAddVerifierEntry(const void **String2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct _KTHREAD *Lock; // rbx
  _DWORD *Entry; // rax
  void *v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  if ( VfSafeMode )
  {
    return (unsigned int)-1073740961;
  }
  else
  {
    VfDriverLock();
    VfInitSystemNoRebootNeeded(v3, 0);
    ViDriversLoadLockOwner = 0LL;
    KeReleaseMutex(&ViDriversLoadLock, 0);
    RtlInitUnicodeString(&DestinationString, L"*");
    if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
    {
      Lock = MmAcquireLoadLock();
      v2 = VfDriverEnableVerifierForAll();
      MmReleaseLoadLock((__int64)Lock);
    }
    else
    {
      Entry = VfSuspectDriversAllocateEntry(String2);
      v6 = Entry;
      if ( Entry )
      {
        v2 = MmEnableVerifierForDriver((__int64)Entry, &v9);
        if ( !v9 )
          ExFreePoolWithTag(v6, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v2;
}
