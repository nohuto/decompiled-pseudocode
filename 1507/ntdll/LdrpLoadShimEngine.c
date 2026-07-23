/*
 * XREFs of LdrpLoadShimEngine @ 0x180079920
 * Callers:
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800BDB20 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     LdrpLoadDll @ 0x1800207D8 (LdrpLoadDll.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpInitializeNode @ 0x180044DE4 (LdrpInitializeNode.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x180079B14 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x180079BA4 (LdrpInitializeShimDllDependencies.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800BE0A4 (LdrpInitializationFailure.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // rsi
  void (__fastcall *v4)(_QWORD); // rcx
  __int64 v5; // rdi
  __int64 *v6; // rbx
  int Dll; // ecx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  char v11; // al
  NTSTATUS v12; // ebx
  char v13; // al
  __int64 *i; // rax
  __int64 v15; // [rsp+30h] [rbp-89h]
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  __int64 v18[16]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 1;
  LdrpInitializeDllPath(0LL, 0LL, v18);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                          g_pfnSE_ShimDllLoaded,
                                                                          64
                                                                        - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll((__int64)&DestinationString, (__int64)v18, 0, 0LL, (__int64)&BaseAddress);
    if ( Dll < 0 )
    {
      v11 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v15) = Dll;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2029,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          (__int64)"Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v15);
        v11 = LdrpDebugFlags;
      }
      if ( (v11 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      LdrpPinModule(BaseAddress);
      v9 = BaseAddress;
      v10 = *((_QWORD *)BaseAddress + 19);
      if ( *(_DWORD *)(v10 + 56) == 7 )
      {
        v12 = LdrpInitializeNode(v10);
        if ( v12 < 0 )
        {
          v13 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LODWORD(v15) = v12;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2055,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              (__int64)"Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v15);
            v13 = LdrpDebugFlags;
          }
          if ( (v13 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v12);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v12);
          break;
        }
        v9 = BaseAddress;
      }
      v3(v9[6]);
      LdrpDereferenceModule((char *)BaseAddress);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  LdrpReleaseDllPath((__int64)v18);
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
    for ( i = (__int64 *)qword_1801461D0; i != &qword_1801461D0; i = (__int64 *)*i )
    {
      BaseAddress = i;
      *((_BYTE *)i + 105) &= ~8u;
    }
  }
  v6 = (__int64 *)qword_1801461D0;
  if ( LdrInitState >= 2 )
    goto LABEL_8;
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
LABEL_8:
    if ( v6 == &qword_1801461D0 )
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
