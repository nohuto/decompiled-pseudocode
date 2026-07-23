/*
 * XREFs of LdrLoadDll @ 0x180011F20
 * Callers:
 *     LdrpLoadWow64 @ 0x180075DE0 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D4430 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001539C (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  ULONG v8; // ebx
  int v9; // r9d
  NTSTATUS Dll; // ebx
  PVOID v11; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v14[128]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      143,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n",
      DllName);
  if ( (LdrpPolicyBits & 4) == 0 && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( !DllCharacteristics )
  {
    v8 = 0;
    goto LABEL_6;
  }
  v8 = *DllCharacteristics;
  if ( (v8 & 4) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
LABEL_6:
    LdrpInitializeDllPath(DllName->Buffer, DllPath, v14);
    LOBYTE(v9) = 1;
    Dll = LdrpLoadDll((_DWORD)DllName, (unsigned int)v14, v8, v9, (__int64)BaseAddress);
    LdrpReleaseDllPath(v14);
    if ( Dll >= 0 )
    {
      v11 = BaseAddress[0];
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
