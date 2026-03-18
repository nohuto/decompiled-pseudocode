/*
 * XREFs of NtFlushInstallUILanguage @ 0x14057F524
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14022FB78 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1404D085C (MUIInitializeResourceLock.c)
 */

__int64 __fastcall NtFlushInstallUILanguage(int a1, int a2)
{
  unsigned int v3; // edi
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned int v6; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return 3221225473LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( PsUILanguageComitted )
    return *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != a1 ? 0xC0000001 : 0;
  if ( !MUIRefreshCachedUILock )
  {
    v6 = MUIInitializeResourceLock((volatile signed __int64 *)&MUIRefreshCachedUILock);
    if ( (v6 & 0xC0000000) == 0xC0000000 )
      return v6;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
  if ( a2 )
    PsUILanguageComitted = 1;
  if ( (_WORD)a1 != *(_WORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    *(_WORD *)((char *)&NlsMbCodePageTag + 3) = a1;
    PsMachineUILanguageId = a1;
    v3 = MigrateOOBELanguageToInstallationLanguage();
  }
  ExReleaseResourceLite(MUIRefreshCachedUILock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  return v3;
}
