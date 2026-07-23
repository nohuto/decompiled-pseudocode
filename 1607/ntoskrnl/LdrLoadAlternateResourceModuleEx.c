/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1400F8494
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400F5198 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400F7EA4 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400F80A8 (LdrpKrnGetDataTableEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F8A28 (LdrpGetFromMUIMemCache.c)
 *     DownLevelLangIDToLanguageName @ 0x140132934 (DownLevelLangIDToLanguageName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14014A234 (LdrpMapResourceFile.c)
 *     LdrpGetResourceFileName @ 0x14014B530 (LdrpGetResourceFileName.c)
 *     LdrpVerifyAlternateResourceModule @ 0x14014BB28 (LdrpVerifyAlternateResourceModule.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  unsigned __int64 v9; // rsi
  PVOID *DataTableEntry; // rdi
  __int64 v12; // rdx
  NTSTATUS ResourceFileName; // edi
  ULONG_PTR v14; // rsi
  int v15; // [rsp+20h] [rbp-378h]
  PVOID MappedBase; // [rsp+50h] [rbp-348h] BYREF
  ULONG_PTR v17; // [rsp+58h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-338h] BYREF
  int v19; // [rsp+68h] [rbp-330h]
  int v20; // [rsp+70h] [rbp-328h] BYREF
  char *v21; // [rsp+78h] [rbp-320h]
  _BYTE v22[176]; // [rsp+90h] [rbp-308h] BYREF
  char v23; // [rsp+140h] [rbp-258h] BYREF

  MappedBase = 0LL;
  Handle = 0LL;
  memset(v22, 0, 0xAAuLL);
  v17 = 0LL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v9 = LdrpGetFromMUIMemCache(DllHandle);
  if ( v9 == -1LL )
  {
    *ResourceDllBase = 0LL;
    return -1073020922;
  }
  if ( v9 )
  {
    *ResourceDllBase = (PVOID)v9;
    if ( ResourceOffset )
      *ResourceOffset = v17;
    v19 = 0;
    return 0;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry((unsigned __int64)DllHandle);
  if ( DataTableEntry )
  {
    v21 = &v23;
    v20 = 34078720;
    if ( (int)DownLevelLangIDToLanguageName(LanguageId, v22, 85LL) >= 0 )
    {
      ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v22, &v20);
      if ( ResourceFileName >= 0 )
      {
        ResourceFileName = LdrpMapResourceFile(
                             (_DWORD)DllHandle,
                             (unsigned int)&v20,
                             (unsigned int)&Handle,
                             (unsigned int)&MappedBase,
                             (__int64)&v17);
        if ( ResourceFileName >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)LdrpVerifyAlternateResourceModule(
                                   DllHandle,
                                   (unsigned __int64)MappedBase | 1,
                                   v22,
                                   Flags) )
          {
            MmUnmapViewInSystemSpace(MappedBase);
            ZwClose(Handle);
            Handle = 0LL;
            v9 = 0LL;
            ResourceFileName = -1073020926;
          }
        }
      }
      goto LABEL_15;
    }
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", LanguageId);
  }
  ResourceFileName = -1073020927;
LABEL_15:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v14 = v17;
  LdrpSetAlternateResourceModuleHandle(
    (_DWORD)DllHandle,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v15,
    LanguageId,
    1,
    ResourceFileName,
    v17);
  if ( MappedBase == (PVOID)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    *ResourceDllBase = MappedBase;
    if ( ResourceOffset )
      *ResourceOffset = v14;
    return 0;
  }
  return ResourceFileName;
}
