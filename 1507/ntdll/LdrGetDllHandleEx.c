/*
 * XREFs of LdrGetDllHandleEx @ 0x1800185D0
 * Callers:
 *     LdrGetDllHandle @ 0x180018950 (LdrGetDllHandle.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDll @ 0x18001870C (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x180020924 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS LoadedDll; // ebx
  PVOID v10; // rdi
  NTSTATUS Count; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13[16]; // [rsp+40h] [rbp-A8h] BYREF

  BaseAddress[0] = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      816,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n",
      DllName);
  LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, v13);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 || !DllHandle && (Flags & 2) == 0 )
  {
    LoadedDll = -1073741811;
    goto LABEL_6;
  }
  LoadedDll = LdrpFindLoadedDll(DllName, v13, BaseAddress);
  if ( LoadedDll >= 0 )
  {
    v10 = BaseAddress[0];
    if ( (Flags & 2) != 0 )
    {
      Count = LdrpPinModule(BaseAddress[0]);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_13;
      Count = LdrpIncrementModuleLoadCount(BaseAddress[0]);
    }
    LoadedDll = Count;
LABEL_13:
    if ( LoadedDll >= 0 && DllHandle )
      *DllHandle = (PVOID)*((_QWORD *)v10 + 6);
    LdrpDereferenceModule((char *)v10);
  }
LABEL_6:
  LdrpReleaseDllPath(v13);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      866,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDll);
  return LoadedDll;
}
