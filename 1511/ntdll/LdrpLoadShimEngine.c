/*
 * XREFs of LdrpLoadShimEngine @ 0x180080BEC
 * Callers:
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800CA7C0 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18001190C (LdrpLoadDll.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpInitializeNode @ 0x180071F68 (LdrpInitializeNode.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x180080DE0 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x180080E70 (LdrpInitializeShimDllDependencies.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800CAD44 (LdrpInitializationFailure.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // rsi
  void (__fastcall *v4)(_QWORD); // rcx
  __int64 v5; // rdi
  __int64 *v6; // rbx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  char v10; // al
  NTSTATUS v11; // ebx
  char v12; // al
  __int64 *i; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v16[16]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 1;
  LdrpInitializeDllPath(0LL, 0LL, v16);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                          g_pfnSE_ShimDllLoaded,
                                                                          64
                                                                        - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)LdrpLoadDll((__int64)&DestinationString, (__int64)v16, 0, 0LL, (__int64)&BaseAddress) < 0 )
    {
      v10 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2028,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          (__int64)"Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n");
        v10 = LdrpDebugFlags;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      LdrpPinModule((__int64)BaseAddress);
      v8 = BaseAddress;
      v9 = *((_QWORD *)BaseAddress + 19);
      if ( *(_DWORD *)(v9 + 56) == 7 )
      {
        v11 = LdrpInitializeNode(v9);
        if ( v11 < 0 )
        {
          v12 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2054,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              (__int64)"Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n");
            v12 = LdrpDebugFlags;
          }
          if ( (v12 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v11);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
          break;
        }
        v8 = BaseAddress;
      }
      v3(v8[6]);
      LdrpDereferenceModule((char *)BaseAddress);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  LdrpReleaseDllPath((__int64)v16);
  v4 = (void (__fastcall *)(_QWORD))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                          g_pfnSE_InstallBeforeInit,
                                                                          64
                                                                        - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)));
  v4(v4);
  v5 = (unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(
                                            g_pfnSE_DllLoaded,
                                            64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = (__int64 *)qword_180145210; i != &qword_180145210; i = (__int64 *)*i )
    {
      BaseAddress = i;
      *((_BYTE *)i + 105) &= ~8u;
    }
  }
  v6 = (__int64 *)qword_180145210;
  if ( LdrInitState >= 2 )
    goto LABEL_8;
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
LABEL_8:
    if ( v6 == &qword_180145210 )
      break;
    BaseAddress = v6;
    LdrpSendShimEngineInitialNotifications(v6[19], v5);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
