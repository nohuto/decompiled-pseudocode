/*
 * XREFs of LdrGetDllHandleByName @ 0x18007AEE0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x18001A3CC (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C80 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFatalExceptionFilter @ 0x1800D2D5C (LdrpFatalExceptionFilter.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByName(PUNICODE_STRING BaseDllName, PUNICODE_STRING FullDllName, PVOID *DllHandle)
{
  NTSTATUS LoadedDllByName; // ebx
  PVOID v5; // rdi
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(BaseDllName, FullDllName, 0, (__int64)BaseAddress, &v8);
  if ( LoadedDllByName >= 0 )
  {
    if ( v8 < 7 )
    {
      LoadedDllByName = -1073741515;
      v5 = BaseAddress[0];
    }
    else
    {
      v5 = BaseAddress[0];
      LoadedDllByName = LdrpIncrementModuleLoadCount((__int64)BaseAddress[0]);
      if ( LoadedDllByName >= 0 )
        *DllHandle = (PVOID)*((_QWORD *)v5 + 6);
    }
    LdrpDereferenceModule((char *)v5);
  }
  return LoadedDllByName;
}
