/*
 * XREFs of NtFlushInstallUILanguage @ 0x1405C1454
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x140265C08 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x14053B410 (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  int v3; // ebx
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax

  v3 = InstallUILanguage;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741823;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741790;
  if ( PsUILanguageComitted )
    return *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != v3 ? 0xC0000001 : 0;
  if ( MUIRefreshCachedUILock
    || (result = MUIInitializeResourceLock((volatile signed __int64 *)&MUIRefreshCachedUILock),
        (result & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
    if ( SetComittedFlag )
      PsUILanguageComitted = 1;
    if ( (_WORD)v3 == *(_WORD *)((char *)&NlsMbCodePageTag + 3) )
    {
      v7 = 0;
    }
    else
    {
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v3;
      PsMachineUILanguageId = v3;
      v7 = MigrateOOBELanguageToInstallationLanguage();
    }
    ExReleaseResourceLite(MUIRefreshCachedUILock);
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v7;
  }
  return result;
}
