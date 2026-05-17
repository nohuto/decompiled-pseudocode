/*
 * XREFs of LdrpLoadShimEngine @ 0x18007DCE0
 * Callers:
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1D70 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     LdrpInitializeNode @ 0x180072384 (LdrpInitializeNode.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x18007DEE8 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF78 (LdrpInitializeShimDllDependencies.c)
 *     LdrpPinModule @ 0x18007E418 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800D22F0 (LdrpInitializationFailure.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int Dll; // ecx
  char v8; // al
  __int64 v9; // rcx
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  char v14; // al
  __int64 i; // rax
  __int64 v16; // [rsp+30h] [rbp-89h]
  __int64 v17; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  __int64 v19[16]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, v19);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll((__int64)&DestinationString, (int)v19, 0, 0, (__int64)&v17);
    if ( Dll >= 0 )
    {
      *(_DWORD *)(v17 + 104) |= 0x100u;
      LdrpPinModule(v17);
      v9 = v17;
      if ( *(_DWORD *)(*(_QWORD *)(v17 + 152) + 56LL) == 7 )
      {
        v13 = LdrpInitializeNode(*(_QWORD *)(v17 + 152));
        if ( v13 < 0 )
        {
          v14 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LODWORD(v16) = v13;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2077,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              (__int64)"Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v16);
            v14 = LdrpDebugFlags;
          }
          if ( (v14 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v13);
          ZwTerminateProcess(-1LL, (unsigned int)v13);
          break;
        }
        v9 = v17;
      }
      v3(*(_QWORD *)(v9 + 48));
      LdrpDereferenceModule(v17, v10, v11, v12);
    }
    else
    {
      v8 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v16) = Dll;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2051,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          (__int64)"Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v16);
        v8 = LdrpDebugFlags;
      }
      if ( (v8 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  LdrpReleaseDllPath((__int64)v19);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_1801523D0; (__int64 *)i != &qword_1801523D0; i = *(_QWORD *)i )
    {
      v17 = i;
      *(_BYTE *)(i + 105) &= ~8u;
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
    v17 = (__int64)v5;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
