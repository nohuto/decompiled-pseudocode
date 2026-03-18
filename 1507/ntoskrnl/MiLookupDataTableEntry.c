/*
 * XREFs of MiLookupDataTableEntry @ 0x140010760
 * Callers:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 *     MiSplitDriverPage @ 0x14020E560 (MiSplitDriverPage.c)
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x1403F2770 (MmMarkImageForHiberPhase.c)
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MmPageEntireDriver @ 0x1404F5378 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x1404F5C58 (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140582A34 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x14058FE4C (MmBackSystemImageWithPagefile.c)
 *     MmVerifyCallbackFunction @ 0x1405A72EC (MmVerifyCallbackFunction.c)
 *     MmGetSectionRange @ 0x1406A1240 (MmGetSectionRange.c)
 *     MmAddVerifierSpecialThunks @ 0x1406A2348 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406A2440 (MmAddVerifierThunks.c)
 *     MmDiscardDriverSection @ 0x1407E7104 (MmDiscardDriverSection.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

PVOID *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  PVOID *v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *v5; // rax
  PVOID v6; // rdx
  __int16 v8; // cx

  v2 = 0LL;
  if ( a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
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
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    v8 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v2;
}
