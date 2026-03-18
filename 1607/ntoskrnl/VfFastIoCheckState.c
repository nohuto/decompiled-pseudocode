/*
 * XREFs of VfFastIoCheckState @ 0x1407058C8
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1404D9694 (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfFastIoCheckState(_DWORD *Entry, int a2)
{
  int v4; // edx

  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(196, 195, v4, 0, 0LL);
  if ( *(_BYTE *)Entry != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(201, 17, a2, *(unsigned __int8 *)Entry, KeGetCurrentIrql());
  if ( Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(196, 198, a2, KeGetCurrentThread()->WaitBlock[3].SpareLong, (unsigned int)Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
