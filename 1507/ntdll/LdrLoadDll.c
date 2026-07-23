/*
 * XREFs of LdrLoadDll @ 0x18001B1F0
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180003478 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800C29C0 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x1800F6480 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x1800207D8 (LdrpLoadDll.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  ULONG v8; // ebx
  int v9; // r9d
  NTSTATUS Dll; // ebx
  char *v11; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v14[16]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      143,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n",
      DllName);
  if ( LdrpAppPackagesPath.Buffer && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( !DllCharacteristics )
  {
    v8 = 0;
    goto LABEL_6;
  }
  v8 = *DllCharacteristics;
  if ( (v8 & 4) == 0 || LdrpAppPackagesPath.Buffer )
  {
LABEL_6:
    LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, v14);
    LOBYTE(v9) = 1;
    Dll = LdrpLoadDll((_DWORD)DllName, (unsigned int)v14, v8, v9, (__int64)BaseAddress);
    LdrpReleaseDllPath((__int64)v14);
    if ( Dll >= 0 )
    {
      v11 = (char *)BaseAddress[0];
      *DllHandle = (PVOID)*((_QWORD *)BaseAddress[0] + 6);
      LdrpDereferenceModule(v11);
    }
    goto LABEL_8;
  }
  if ( (LdrpDebugFlags & 3) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      167,
      (unsigned int)"LdrLoadDll",
      0,
      (__int64)"Nonpackaged process attempted to load a packaged DLL.\n");
  if ( (LdrpDebugFlags & 0x10) != 0 )
    __debugbreak();
  Dll = -1073741398;
LABEL_8:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      194,
      (unsigned int)"LdrLoadDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      Dll);
  return Dll;
}
