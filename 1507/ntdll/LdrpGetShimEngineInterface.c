/*
 * XREFs of LdrpGetShimEngineInterface @ 0x180079D5C
 * Callers:
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800BDB20 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800BDE90 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     RtlInitAnsiString @ 0x18006A7B0 (RtlInitAnsiString.c)
 *     LdrGetProcedureAddressEx @ 0x18007A0E0 (LdrGetProcedureAddressEx.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  int ProcedureAddress; // ebx
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char v5; // al
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+38h] BYREF

  RtlInitAnsiString(&DestinationString, "SE_InitializeEngine");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v14,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_ShimDllLoaded");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v15,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_InstallBeforeInit");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v16,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_InstallAfterInit");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v17,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_DllLoaded");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v6,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_DllUnloaded");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v7,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_LdrEntryRemoved");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v8,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_ProcessDying");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v9,
                       0);
  if ( ProcedureAddress < 0
    || (RtlInitAnsiString(&DestinationString, "SE_LdrResolveDllName"),
        ProcedureAddress = LdrGetProcedureAddressEx(
                             g_pShimEngineModule,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v11,
                             0),
        ProcedureAddress < 0)
    || (RtlInitAnsiString(&DestinationString, "SE_GetProcAddressForCaller"),
        ProcedureAddress = LdrGetProcedureAddressEx(
                             g_pShimEngineModule,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v10,
                             0),
        ProcedureAddress < 0)
    || (RtlInitAnsiString(&DestinationString, "ApphelpCheckModule"),
        ProcedureAddress = LdrGetProcedureAddressEx(
                             g_pShimEngineModule,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v12,
                             0),
        ProcedureAddress < 0) )
  {
LABEL_14:
    v5 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        1959,
        (unsigned int)"LdrpGetShimEngineInterface",
        0,
        "Could not locate procedure \"%s\" in the shim engine DLL\n",
        DestinationString.Buffer);
      v5 = LdrpDebugFlags;
    }
    if ( (v5 & 0x10) != 0 )
      __debugbreak();
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  else
  {
    LdrProtectMrdata(0, v1, v2, v3);
    g_pfnSE_InitializeEngine = __ROR8__(v14 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ShimDllLoaded = __ROR8__(v15 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallBeforeInit = __ROR8__(v16 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallAfterInit = __ROR8__(v17 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllLoaded = __ROR8__(v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllUnloaded = __ROR8__(v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrEntryRemoved = __ROR8__(v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ProcessDying = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_GetProcAddressForCaller = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrResolveDllName = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpCheckModuleProc = __ROR8__(v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    LdrProtectMrdata(1, (char *)g_pfnApphelpCheckModuleProc, MEMORY[0x7FFE0330], 63LL);
  }
  return (unsigned int)ProcedureAddress;
}
