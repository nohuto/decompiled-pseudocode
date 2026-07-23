/*
 * XREFs of VfFastIoSnapState @ 0x1407059A8
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F22C (IopCompleteUnloadOrDelete.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 *     NtUnlockFile @ 0x1404AF9D8 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1404BCC98 (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(196, 194, 0, 0, 0LL);
  return ViIoCallbackSnapState();
}
