/*
 * XREFs of VfFastIoSnapState @ 0x1406B9904
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtUnlockFile @ 0x1404911DC (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1404B4614 (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(196, 194, 0, 0, 0LL);
  return ViIoCallbackSnapState();
}
