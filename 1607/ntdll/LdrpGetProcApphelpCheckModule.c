/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x1800D20E0
 * Callers:
 *     LdrpDynamicShimModule @ 0x18002D734 (LdrpDynamicShimModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x180018C08 (LdrpBuildSystem32FileName.c)
 *     LdrpGetShimEngineInterface @ 0x18007E068 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  int Dll; // ebx
  __int64 v3; // r8
  char v4; // al
  __int64 v5; // rdx
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-B0h]
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v11; // [rsp+68h] [rbp-98h]
  _WORD v12[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13[16]; // [rsp+170h] [rbp+70h] BYREF

  v9 = L"apphelp.dll";
  v8 = 1572886;
  v11 = v12;
  v10 = 0x1000000;
  v12[0] = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    Dll = -1073741823;
    v3 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v3;
    if ( v3 )
      return 0;
    return (unsigned int)Dll;
  }
  Dll = LdrpBuildSystem32FileName(&v10, (__int64)&v8);
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, 16385LL, v13);
    Dll = LdrpLoadDll((__int64)&v10, (int)v13, 0, 1, (__int64)&v7);
    LdrpReleaseDllPath((__int64)v13);
    if ( Dll >= 0 )
    {
      *(_DWORD *)(v7 + 104) |= 0x100u;
      g_pShimEngineModule = *(_QWORD *)(v7 + 48);
      Dll = LdrpGetShimEngineInterface();
      if ( Dll >= 0 )
      {
        Dll = -1073741823;
        v5 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
        *a1 = v5;
        if ( v5 )
          Dll = 0;
        goto LABEL_17;
      }
      v4 = LdrpDebugFlags;
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
      v4 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_10;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2653,
        "LdrpGetProcApphelpCheckModule",
        0,
        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
        &v10,
        Dll);
    }
    v4 = LdrpDebugFlags;
LABEL_10:
    if ( (v4 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_17:
  if ( v12 != v11 )
    NtdllpFreeStringRoutine((__int64)v11);
  return (unsigned int)Dll;
}
