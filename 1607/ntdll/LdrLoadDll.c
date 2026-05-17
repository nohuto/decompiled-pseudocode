/*
 * XREFs of LdrLoadDll @ 0x180011F30
 * Callers:
 *     LdrpLoadWow64 @ 0x180075DF0 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D4370 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v8; // ebx
  int v9; // r9d
  int Dll; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v14[128]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      143,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n",
      a3);
  if ( (LdrpPolicyBits & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( !a2 )
  {
    v8 = 0;
    goto LABEL_6;
  }
  v8 = *a2;
  if ( (v8 & 4) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
LABEL_6:
    LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a1, v14);
    LOBYTE(v9) = 1;
    Dll = LdrpLoadDll(a3, (unsigned int)v14, v8, v9, (__int64)&v13);
    LdrpReleaseDllPath(v14);
    if ( Dll >= 0 )
    {
      v11 = v13;
      *a4 = *(_QWORD *)(v13 + 48);
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
  return (unsigned int)Dll;
}
