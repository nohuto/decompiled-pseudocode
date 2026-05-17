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

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v9; // ebx
  int Dll; // ebx
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v14[128]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      143,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n");
  if ( LdrpAppPackagesPath.Buffer && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( !a2 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v9 = *a2;
  if ( (v9 & 4) == 0 || LdrpAppPackagesPath.Buffer )
  {
LABEL_15:
    LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a1, v14);
    LOBYTE(v11) = 1;
    Dll = LdrpLoadDll(a3, (unsigned int)v14, v9, v11, (__int64)&v13);
    LdrpReleaseDllPath(v14);
    if ( Dll >= 0 )
    {
      v12 = v13;
      *a4 = *(_QWORD *)(v13 + 48);
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
  return (unsigned int)Dll;
}
