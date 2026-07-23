/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x1800D21A0
 * Callers:
 *     LdrpDynamicShimModule @ 0x18002D724 (LdrpDynamicShimModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001539C (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x180018BF8 (LdrpBuildSystem32FileName.c)
 *     LdrpGetShimEngineInterface @ 0x18007E058 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  int Dll; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  __int64 v6; // rdx
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-B0h]
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v12; // [rsp+68h] [rbp-98h]
  _WORD v13[128]; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v14[16]; // [rsp+170h] [rbp+70h] BYREF

  v10 = L"apphelp.dll";
  v9 = 1572886;
  v12 = v13;
  v11 = 0x1000000;
  v13[0] = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    Dll = -1073741823;
    v3 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v3;
    if ( v3 )
      return 0;
    return (unsigned int)Dll;
  }
  Dll = LdrpBuildSystem32FileName(&v11, (__int64)&v9);
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, (const WCHAR *)0x4001, v14);
    LOBYTE(v4) = 1;
    Dll = LdrpLoadDll((__int64)&v11, (__int64)v14, 0, v4, (__int64)&v8);
    LdrpReleaseDllPath((__int64)v14);
    if ( Dll >= 0 )
    {
      *(_DWORD *)(v8 + 104) |= 0x100u;
      g_pShimEngineModule = *(PVOID *)(v8 + 48);
      Dll = LdrpGetShimEngineInterface();
      if ( Dll >= 0 )
      {
        Dll = -1073741823;
        v6 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
        *a1 = v6;
        if ( v6 )
          Dll = 0;
        goto LABEL_17;
      }
      v5 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_10;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2664,
        "LdrpGetProcApphelpCheckModule",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        Dll);
    }
    else
    {
      v5 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_10;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2653,
        "LdrpGetProcApphelpCheckModule",
        0,
        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
        &v11,
        Dll);
    }
    v5 = LdrpDebugFlags;
LABEL_10:
    if ( (v5 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_17:
  if ( v13 != v12 )
    NtdllpFreeStringRoutine(v12);
  return (unsigned int)Dll;
}
