/*
 * XREFs of IopInitializeCrashDump @ 0x1405B5294
 * Callers:
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405B51F4 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x1407DC720 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopLoadCrashdumpDriver @ 0x1401531A4 (IopLoadCrashdumpDriver.c)
 *     IopReadDumpRegistry @ 0x14016C0B4 (IopReadDumpRegistry.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140583464 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(unsigned int *Handle, __int128 *a2)
{
  unsigned int *v4; // rcx
  __int64 v5; // rdx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(Object) = 0;
  IopReadDumpRegistry(Handle, &Object);
  if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
    return 1;
  if ( CrashdmpImageEntry || (int)IopLoadCrashdumpDriver() >= 0 )
  {
    v7 = *a2;
    if ( (int)qword_140353BB8(Handle, &CrashdmpDumpBlock, &v7) >= 0 )
    {
      CrashdmpInitialized = 1;
      v4 = *(unsigned int **)(CrashdmpDumpBlock + 1352);
      if ( !v4 )
      {
        if ( !Handle )
          return 1;
        v4 = Handle;
      }
      if ( ObReferenceObjectByHandle(v4, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        FsRtlIssueFileNotificationFsctl(
          (PFILE_OBJECT)Object,
          v5,
          (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
        ObfDereferenceObject(Object);
      }
      return 1;
    }
    CrashdmpDumpBlock = 0LL;
  }
  return 0;
}
