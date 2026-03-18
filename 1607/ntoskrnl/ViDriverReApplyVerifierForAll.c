/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140704E64
 * Callers:
 *     VfDriverInitSuccess @ 0x1406FE22C (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x14070F3B8 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x1407D1AC0 (VfSuspectDriversIsLoaded.c)
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
