/*
 * XREFs of VfFastIoCheckState @ 0x140739E88
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     IopGetBasicInformationFile @ 0x1404A7FB8 (IopGetBasicInformationFile.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
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
