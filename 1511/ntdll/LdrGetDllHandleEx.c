/*
 * XREFs of LdrGetDllHandleEx @ 0x180011130
 * Callers:
 *     LdrGetDllHandle @ 0x1800110A0 (LdrGetDllHandle.c)
 * Callees:
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDll @ 0x1800112C4 (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x180011798 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS LoadedDll; // ebx
  PVOID *v9; // rdi
  NTSTATUS Count; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[16]; // [rsp+40h] [rbp-A8h] BYREF

  BaseAddress[0] = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      830,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n");
  LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, v13);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 || !DllHandle && (Flags & 2) == 0 )
  {
    LoadedDll = -1073741811;
    goto LABEL_18;
  }
  LoadedDll = LdrpFindLoadedDll(DllName, v13, BaseAddress);
  if ( LoadedDll >= 0 )
  {
    v9 = (PVOID *)BaseAddress[0];
    if ( (Flags & 2) != 0 )
    {
      Count = LdrpPinModule((__int64)BaseAddress[0]);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_14;
      Count = LdrpIncrementModuleLoadCount(BaseAddress[0]);
    }
    LoadedDll = Count;
LABEL_14:
    if ( LoadedDll >= 0 && DllHandle )
      *DllHandle = v9[6];
    LdrpDereferenceModule(v9);
  }
LABEL_18:
  LdrpReleaseDllPath(v13);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      880,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n");
  return LoadedDll;
}
