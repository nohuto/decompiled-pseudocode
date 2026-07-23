/*
 * XREFs of LdrLoadDll @ 0x180010B30
 * Callers:
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x18004ED50 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800CC3C0 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x1800F5D60 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18001190C (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  ULONG v9; // ebx
  NTSTATUS Dll; // ebx
  int v11; // r9d
  PVOID v12; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v14[128]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      143,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n");
  if ( LdrpAppPackagesPath.Buffer && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( !DllCharacteristics )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v9 = *DllCharacteristics;
  if ( (v9 & 4) == 0 || LdrpAppPackagesPath.Buffer )
  {
LABEL_15:
    LdrpInitializeDllPath(DllName->Buffer, DllPath, v14);
    LOBYTE(v11) = 1;
    Dll = LdrpLoadDll((_DWORD)DllName, (unsigned int)v14, v9, v11, (__int64)BaseAddress);
    LdrpReleaseDllPath(v14);
    if ( Dll >= 0 )
    {
      v12 = BaseAddress[0];
      *DllHandle = (PVOID)*((_QWORD *)BaseAddress[0] + 6);
      LdrpDereferenceModule(v12);
    }
    goto LABEL_17;
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
LABEL_17:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      194,
      (unsigned int)"LdrLoadDll",
      4,
      (__int64)"Status: 0x%08lx\n");
  return Dll;
}
