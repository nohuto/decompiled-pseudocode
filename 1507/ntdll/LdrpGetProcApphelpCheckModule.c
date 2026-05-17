/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x1800BDE90
 * Callers:
 *     LdrpDynamicShimModule @ 0x1800415EC (LdrpDynamicShimModule.c)
 * Callees:
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     LdrpLoadDll @ 0x1800207D8 (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     LdrpGetShimEngineInterface @ 0x180079D5C (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v3; // rax
  int appended; // ebx
  char v5; // al
  __int64 v6; // r8
  __int128 v8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v10[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v11[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v12[528]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = g_pfnApphelpCheckModuleProc;
  *(_QWORD *)((char *)&v8 + 2) = 0LL;
  LODWORD(v10[0]) = 2883626;
  v10[1] = L"\\system32\\apphelp.dll";
  *((_QWORD *)&v8 + 1) = v12;
  LODWORD(v8) = 34078720;
  if ( g_pfnApphelpCheckModuleProc )
  {
LABEL_18:
    appended = -1073741823;
    v6 = MEMORY[0x7FFE0330] ^ __ROR8__(v1, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v6;
    if ( v6 )
      return 0;
    return (unsigned int)appended;
  }
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(2 * v3 + 0x7FFE0030) );
  if ( (unsigned __int64)(2 * v3 + 44) > 0x208 )
    return (unsigned int)-1073741789;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)&v8, (const void *)0x7FFE0030);
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v8, (__int16 *)v10);
    if ( appended >= 0 )
    {
      LdrpInitializeDllPath(0LL, 0LL, v11);
      appended = LdrpLoadDll((__int64)&v8, (int)v11, 0, 1, (__int64)&v9);
      LdrpReleaseDllPath((__int64)v11);
      if ( appended < 0 )
      {
        v5 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_12;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2665,
          "LdrpGetProcApphelpCheckModule",
          0,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          v12,
          appended);
        goto LABEL_11;
      }
      *(_DWORD *)(v9 + 104) |= 0x100u;
      g_pShimEngineModule = *(_QWORD *)(v9 + 48);
      appended = LdrpGetShimEngineInterface();
      if ( appended < 0 )
      {
        v5 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
        {
LABEL_12:
          if ( (v5 & 0x10) != 0 )
            __debugbreak();
          return (unsigned int)appended;
        }
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2676,
          "LdrpGetProcApphelpCheckModule",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          appended);
LABEL_11:
        v5 = LdrpDebugFlags;
        goto LABEL_12;
      }
      v1 = g_pfnApphelpCheckModuleProc;
      goto LABEL_18;
    }
  }
  return (unsigned int)appended;
}
