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
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  int v14; // ebx
  char v15; // al
  __int64 i; // rax
  unsigned __int64 v17; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v19[16]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 1;
  LdrpInitializeDllPath(0LL, 0LL, v19);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)LdrpLoadDll((__int64)&DestinationString, (int)v19, 0, 0, (__int64)&v17) < 0 )
    {
      v13 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2028,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          (__int64)"Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n");
        v13 = LdrpDebugFlags;
      }
      if ( (v13 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(v17 + 104) |= 0x100u;
      LdrpPinModule(v17);
      v8 = v17;
      v9 = *(_QWORD *)(v17 + 152);
      if ( *(_DWORD *)(v9 + 56) == 7 )
      {
        v14 = LdrpInitializeNode(v9);
        if ( v14 < 0 )
        {
          v15 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2054,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              (__int64)"Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n");
            v15 = LdrpDebugFlags;
          }
          if ( (v15 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v14);
          ZwTerminateProcess(-1LL, (unsigned int)v14);
          break;
        }
        v8 = v17;
      }
      v3(*(_QWORD *)(v8 + 48));
      LdrpDereferenceModule(v17, v10, v11, v12);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  LdrpReleaseDllPath((__int64)v19);
  v4 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_InstallBeforeInit,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  v4(v4);
  v5 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_180145210; (__int64 *)i != &qword_180145210; i = *(_QWORD *)i )
    {
      v17 = i;
      *(_BYTE *)(i + 105) &= ~8u;
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
    v17 = (unsigned __int64)v6;
    LdrpSendShimEngineInitialNotifications(v6[19], v5);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
