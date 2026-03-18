/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x1406B8DD8
 * Callers:
 *     VfDriverInitSuccess @ 0x1406B262C (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1406B26C0 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1406C3328 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x1407856DC (VfSuspectDriversIsLoaded.c)
 */

void __fastcall ViDriverReApplyVerifierForAll(__int64 **a1)
{
  __int64 *i; // rbx

  if ( ViVerifierDriverAddedThunkListHead )
  {
    for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
    {
      if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && (i[13] & 0x2000000) != 0 )
      {
        VfDriverLock();
        if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
          VfThunkApplyDriverAddedThunks(i);
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
      }
    }
  }
}
