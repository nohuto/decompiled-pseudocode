/*
 * XREFs of LdrpLoadShimEngine @ 0x18007DCD0
 * Callers:
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1E30 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001539C (LdrpLoadDll.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     LdrpInitializeNode @ 0x180072374 (LdrpInitializeNode.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x18007DED8 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF68 (LdrpInitializeShimDllDependencies.c)
 *     LdrpPinModule @ 0x18007E408 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800D23B0 (LdrpInitializationFailure.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int Dll; // ecx
  char v8; // al
  _QWORD *v9; // rcx
  NTSTATUS v10; // ebx
  char v11; // al
  __int64 *i; // rax
  __int64 v13; // [rsp+30h] [rbp-89h]
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  const WCHAR *v16[16]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 1;
  LdrpInitializeDllPath(0LL, (const WCHAR *)0x4001, v16);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll((__int64)&DestinationString, (__int64)v16, 0, 0LL, (__int64)&BaseAddress);
    if ( Dll >= 0 )
    {
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      LdrpPinModule(BaseAddress);
      v9 = BaseAddress;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) == 7 )
      {
        v10 = LdrpInitializeNode(*((_QWORD *)BaseAddress + 19));
        if ( v10 < 0 )
        {
          v11 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LODWORD(v13) = v10;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2077,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              (__int64)"Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v13);
            v11 = LdrpDebugFlags;
          }
          if ( (v11 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v10);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v10);
          break;
        }
        v9 = BaseAddress;
      }
      v3(v9[6]);
      LdrpDereferenceModule((char *)BaseAddress);
    }
    else
    {
      v8 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v13) = Dll;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2051,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          (__int64)"Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v13);
        v8 = LdrpDebugFlags;
      }
      if ( (v8 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  LdrpReleaseDllPath((__int64)v16);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = (__int64 *)qword_1801523D0; i != &qword_1801523D0; i = (__int64 *)*i )
    {
      BaseAddress = i;
      *((_BYTE *)i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_1801523D0;
  if ( LdrInitState >= 2 )
    goto LABEL_8;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_8:
    if ( v5 == &qword_1801523D0 )
      break;
    BaseAddress = v5;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
