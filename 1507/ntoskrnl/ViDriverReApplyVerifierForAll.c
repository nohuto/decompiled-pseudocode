/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x1407392F4
 * Callers:
 *     VfDriverInitSuccess @ 0x1407324D4 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140744BC8 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x1407FC040 (VfSuspectDriversIsLoaded.c)
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
