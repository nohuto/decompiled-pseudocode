/*
 * XREFs of MiLookupDataTableEntry @ 0x140035B30
 * Callers:
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 *     MiSplitDriverPage @ 0x1401CEF98 (MiSplitDriverPage.c)
 *     MmReplaceImportEntry @ 0x1401CF09C (MmReplaceImportEntry.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401CF300 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmMarkImageForHiberPhase @ 0x14039FC14 (MmMarkImageForHiberPhase.c)
 *     MmPageEntireDriver @ 0x1403CF37C (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x1403CF474 (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MmIsDriverVerifyingByAddress @ 0x14050C124 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x140522E38 (MmBackSystemImageWithPagefile.c)
 *     MmGetSectionRange @ 0x140621B80 (MmGetSectionRange.c)
 *     MmAddVerifierSpecialThunks @ 0x140623168 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140623260 (MmAddVerifierThunks.c)
 *     MmDiscardDriverSection @ 0x14074E43C (MmDiscardDriverSection.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x1400EF804 (MiAcquireResourceSharedLite.c)
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
    MiReleaseResourceLite((__int64)CurrentThread);
  return v2;
}
