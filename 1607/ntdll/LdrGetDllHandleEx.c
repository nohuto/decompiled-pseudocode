/*
 * XREFs of LdrGetDllHandleEx @ 0x180012210
 * Callers:
 *     LdrGetDllHandle @ 0x180012180 (LdrGetDllHandle.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDll @ 0x180012320 (LdrpFindLoadedDll.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C80 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18007E408 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS LoadedDll; // ebx
  PVOID *v10; // rdi
  NTSTATUS Count; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  const WCHAR *v13[16]; // [rsp+40h] [rbp-A8h] BYREF

  BaseAddress[0] = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      830,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n",
      DllName);
  LdrpInitializeDllPath(DllName->Buffer, DllPath, v13);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 || !DllHandle && (Flags & 2) == 0 )
  {
    LoadedDll = -1073741811;
    goto LABEL_6;
  }
  LoadedDll = LdrpFindLoadedDll(DllName, v13, BaseAddress);
  if ( LoadedDll >= 0 )
  {
    v10 = (PVOID *)BaseAddress[0];
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
      *DllHandle = v10[6];
    LdrpDereferenceModule(v10);
  }
LABEL_6:
  LdrpReleaseDllPath((__int64)v13);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      880,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDll);
  return LoadedDll;
}
