/*
 * XREFs of IopInitializeCrashDump @ 0x140569208
 * Callers:
 *     IoConfigureCrashDump @ 0x140142EA0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14056916C (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x1407B24BC (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopLoadCrashdumpDriver @ 0x140131B48 (IopLoadCrashdumpDriver.c)
 *     IopReadDumpRegistry @ 0x140143058 (IopReadDumpRegistry.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1401CB918 (SecureDump_GetSecureDumpSettings.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140546D48 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(unsigned int *Handle, __int128 *a2)
{
  char result; // al
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall *v9)(__int64, _DWORD *, unsigned int); // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v10)(__int64, unsigned __int64, __int64, unsigned __int64, unsigned __int64 *); // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  result = 0;
  LOBYTE(v7) = 0;
  *(_QWORD *)((char *)&v7 + 1) = 0LL;
  *(_WORD *)((char *)&v7 + 9) = 0;
  BYTE11(v7) = 0;
  if ( !ForceDumpDisabled )
  {
    IopReadDumpRegistry(Handle, &Object);
    if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
      return 1;
    if ( !CrashdmpImageEntry && (int)IopLoadCrashdumpDriver() < 0 )
      return 0;
    if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v7) < 0 )
      return 0;
    if ( (_BYTE)v7 )
    {
      if ( !qword_140328A28 )
        return 0;
      v11 = *(_QWORD *)((char *)&v7 + 4);
      v12 = BYTE1(v7);
      v9 = SecureDump_Get_SecureDumpHeader;
      v10 = SecureDump_Encrypt_DmpData;
      v8 = 40;
      if ( (int)qword_140328A28(&v8) < 0 )
        return 0;
    }
    v7 = *a2;
    if ( (int)qword_1403289C8(Handle, &CrashdmpDumpBlock, &v7) < 0 )
    {
      CrashdmpDumpBlock = 0LL;
      return 0;
    }
    CrashdmpInitialized = 1;
    v5 = *(unsigned int **)(CrashdmpDumpBlock + 1352);
    if ( !v5 )
    {
      if ( !Handle )
        return 1;
      v5 = Handle;
    }
    if ( ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
    {
      FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)Object, v6, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
      ObfDereferenceObject(Object);
    }
    return 1;
  }
  return result;
}
