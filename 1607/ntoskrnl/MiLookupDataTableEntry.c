/*
 * XREFs of MiLookupDataTableEntry @ 0x1400145B0
 * Callers:
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401485B0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
 *     MiSplitDriverPage @ 0x1401E184C (MiSplitDriverPage.c)
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x1403CB7C4 (MmMarkImageForHiberPhase.c)
 *     MmPageEntireDriver @ 0x14047C9C8 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14047CAD0 (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x140481DFC (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 *     MmGetSectionRange @ 0x14052FFB0 (MmGetSectionRange.c)
 *     MmIsDriverVerifyingByAddress @ 0x140547980 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x140550FC8 (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x1406586AC (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406587A4 (MmAddVerifierThunks.c)
 *     MmDiscardDriverSection @ 0x1407BC1C8 (MmDiscardDriverSection.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x1400883F0 (MiAcquireResourceSharedLite.c)
 */

PVOID *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  PVOID *v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *v5; // rax
  PVOID v6; // rdx

  v2 = 0LL;
  if ( a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    MiAcquireResourceSharedLite(CurrentThread);
  }
  v5 = (PVOID *)PsLoadedModuleList;
  while ( 1 )
  {
    v6 = v5[6];
    if ( a1 >= (unsigned __int64)v6 && a1 < (unsigned __int64)v6 + *((unsigned int *)v5 + 16) )
      break;
    v5 = (PVOID *)*v5;
    if ( v5 == &PsLoadedModuleList )
      goto LABEL_9;
  }
  v2 = v5;
LABEL_9:
  if ( CurrentThread )
    MiReleaseResourceLite(CurrentThread, v6, &PsLoadedModuleList);
  return v2;
}
