/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1400DD8F4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14009B520 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DD514 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x1400DD718 (LdrpKrnGetDataTableEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DDE90 (LdrpGetFromMUIMemCache.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140127874 (DownLevelLangIDToLanguageName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14013FDE8 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x140140BCC (LdrpMapResourceFile.c)
 *     LdrpGetResourceFileName @ 0x140141A88 (LdrpGetResourceFileName.c)
 *     LdrpVerifyAlternateResourceModule @ 0x140141F60 (LdrpVerifyAlternateResourceModule.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        unsigned __int64 a1,
        unsigned __int16 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rsi
  PVOID *DataTableEntry; // rdi
  __int64 v12; // rdx
  int ResourceFileName; // edi
  __int64 v14; // rsi
  int v15; // [rsp+20h] [rbp-378h]
  PVOID MappedBase; // [rsp+50h] [rbp-348h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-340h] BYREF
  __int64 v18; // [rsp+60h] [rbp-338h] BYREF
  int v19; // [rsp+68h] [rbp-330h]
  int v20; // [rsp+70h] [rbp-328h] BYREF
  char *v21; // [rsp+78h] [rbp-320h]
  _WORD v22[88]; // [rsp+90h] [rbp-308h] BYREF
  char v23; // [rsp+140h] [rbp-258h] BYREF

  MappedBase = 0LL;
  Handle = 0LL;
  memset(v22, 0, 170);
  v18 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v9 = LdrpGetFromMUIMemCache(a1, a2, &v18, 4LL);
  if ( v9 == -1LL )
  {
    *a3 = 0LL;
    return 3221946374LL;
  }
  if ( v9 )
  {
    *a3 = v9;
    if ( a4 )
      *a4 = v18;
    v19 = 0;
    return 0LL;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  if ( DataTableEntry )
  {
    v21 = &v23;
    v20 = 34078720;
    if ( (int)DownLevelLangIDToLanguageName(a2, v22, 85LL) >= 0 )
    {
      ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v22, &v20);
      if ( ResourceFileName >= 0 )
      {
        ResourceFileName = LdrpMapResourceFile(
                             a1,
                             (unsigned int)&v20,
                             (unsigned int)&Handle,
                             (unsigned int)&MappedBase,
                             (__int64)&v18);
        if ( ResourceFileName >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)LdrpVerifyAlternateResourceModule(a1, (unsigned __int64)MappedBase | 1, v22, a5) )
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
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", a2);
  }
  ResourceFileName = -1073020927;
LABEL_15:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v14 = v18;
  LdrpSetAlternateResourceModuleHandle(
    a1,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v15,
    a2,
    1,
    ResourceFileName,
    v18);
  if ( MappedBase == (PVOID)-1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = MappedBase;
    if ( a4 )
      *a4 = v14;
    return 0;
  }
  return (unsigned int)ResourceFileName;
}
