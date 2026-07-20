/*
 * XREFs of SmpLoadDataFromRegistry @ 0x14000614C
 * Callers:
 *     SmpInit @ 0x14000A460 (SmpInit.c)
 * Callees:
 *     SmpExecuteCommand @ 0x140001FB4 (SmpExecuteCommand.c)
 *     RtlStringCbPrintfW @ 0x140004D08 (RtlStringCbPrintfW.c)
 *     SmpInitializeKnownDlls @ 0x1400050A0 (SmpInitializeKnownDlls.c)
 *     SmpTranslateSystemPartitionInformation @ 0x140005400 (SmpTranslateSystemPartitionInformation.c)
 *     SmpEventWrite @ 0x14000677C (SmpEventWrite.c)
 *     SmpNtSerializeBoot @ 0x140006964 (SmpNtSerializeBoot.c)
 *     SmpConfigureSharedSessionData @ 0x14000699C (SmpConfigureSharedSessionData.c)
 *     SmpProcessFileRenames @ 0x140007624 (SmpProcessFileRenames.c)
 *     SmpInitializeSessionManagement @ 0x140007AF4 (SmpInitializeSessionManagement.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140007EDC (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpInitializeDosDevices @ 0x1400091AC (SmpInitializeDosDevices.c)
 *     SmpFreeSavedRegistryEntry @ 0x140009354 (SmpFreeSavedRegistryEntry.c)
 *     SmpCreateProtectedPrefixes @ 0x14000B778 (SmpCreateProtectedPrefixes.c)
 *     SmpFinalizePathStrings @ 0x14000C564 (SmpFinalizePathStrings.c)
 *     SmpGetPlatformBinary @ 0x14000C638 (SmpGetPlatformBinary.c)
 *     SmpReadSafeBootOption @ 0x14000C6C0 (SmpReadSafeBootOption.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     SmpPlatformBinaryTableExists @ 0x140012D38 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140012EB8 (SmpSendPlatformBinaryStatus.c)
 */

int __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle)
{
  __int64 v2; // r12
  int result; // eax
  __int64 v4; // rax
  __int64 v5; // r14
  int PlatformBinary; // eax
  int v7; // esi
  __int64 *v8; // rdi
  __int64 v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // r8
  __int64 *v12; // rdi
  BOOL v13; // ebx
  int DynamicEnvironmentVariables; // ebx
  __int64 v15; // r8
  __int64 *v16; // rdi
  __int64 *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // r8
  __int64 *v24; // rbx
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h]
  PWSTR OldEnvironment; // [rsp+88h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-68h] BYREF
  int v34; // [rsp+A8h] [rbp-60h] BYREF
  const wchar_t *v35; // [rsp+B0h] [rbp-58h]
  int v36; // [rsp+B8h] [rbp-50h] BYREF
  const wchar_t *v37; // [rsp+C0h] [rbp-48h]
  struct _UNICODE_STRING ValueName; // [rsp+C8h] [rbp-40h] BYREF
  int v39; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v40; // [rsp+E0h] [rbp-28h]
  struct _UNICODE_STRING Destination; // [rsp+E8h] [rbp-20h] BYREF
  int v42; // [rsp+F8h] [rbp-10h] BYREF
  const wchar_t *v43; // [rsp+100h] [rbp-8h]
  struct _RTL_USER_PROCESS_INFORMATION v44; // [rsp+108h] [rbp+0h] BYREF
  wchar_t pszDest[256]; // [rsp+178h] [rbp+70h] BYREF

  v34 = 7602290;
  v35 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v39 = 1310738;
  v40 = L"\\Sessions";
  v36 = 10354844;
  v37 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v42 = 9699474;
  v43 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StateSeparation\\Policy";
  qword_1400259C8 = (__int64)&SmpBootExecuteList;
  qword_1400259D8 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  qword_1400259E8 = (__int64)&SmpSetupExecuteList;
  v2 = 0LL;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_140025AE8 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = (__int64)&SmpPagingFileList;
  qword_1400259F8 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = (__int64)&SmpDosDevicesList;
  qword_140025A08 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = (__int64)&SmpFileRenameList;
  qword_140025A18 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = &SmpKnownDllsList;
  qword_140025A28 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = (__int64)&SmpExcludeKnownDllsList;
  qword_140025A38 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_140025A48 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140025AD8 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = (__int64)&SmpExistingPageFilesList;
  SmpClearTempFiles = 0;
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", 2147352624LL);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  result = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v34;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      NtClose(KeyHandle);
      SmpMiniNTBoot = 1;
    }
    SmpReadSafeBootOption();
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v36;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
      RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned int)byte_140025AB8);
      v4 = -1LL;
      do
        ++v4;
      while ( pszDest[v4] );
      result = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v4 + 2);
      if ( result >= 0 )
      {
        RtlSetCurrentEnvironment(SmpDefaultEnvironment, &OldEnvironment);
        result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable);
        if ( result >= 0 )
        {
          result = SmpFinalizePathStrings();
          if ( result >= 0 )
          {
            result = SmpInitializeSessionManagement();
            if ( result >= 0 )
            {
              RtlSetCurrentEnvironment(OldEnvironment, &SmpDefaultEnvironment);
              result = SmpInitializeDosDevices();
              if ( result >= 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&v39;
                ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 208;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                result = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, &ObjectAttributes);
                if ( result >= 0 )
                {
                  result = SmpCreateProtectedPrefixes();
                  if ( result >= 0 )
                  {
                    v5 = 0LL;
                    v29 = 0LL;
                    if ( SmpHostSmss )
                    {
                      if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
                      {
                        v7 = -1073741823;
                        if ( (unsigned __int8)SmpPlatformBinaryTableExists() )
                          SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
                      }
                      else
                      {
                        PlatformBinary = SmpGetPlatformBinary(&Destination);
                        v5 = v29;
                        v7 = PlatformBinary;
                      }
                    }
                    else
                    {
                      v7 = -1073741823;
                    }
                    v8 = (__int64 *)SmpBootExecuteList;
                    if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList
                      && (*(__int64 **)SmpBootExecuteList != &SmpBootExecuteList
                       || !RtlEqualUnicodeString(
                             (PCUNICODE_STRING)(SmpBootExecuteList + 16),
                             &SmpAutoChkDefaultCommand,
                             0))
                      || (__int64 *)SmpSetupExecuteList != &SmpSetupExecuteList
                      || v7 >= 0 )
                    {
                      SmpNtSerializeBoot();
                    }
                    SmpEventWrite(&SmssEvt_BootExecuteList_Start);
                    if ( v8 != &SmpBootExecuteList )
                    {
                      do
                      {
                        v10 = v8;
                        SmpExecuteCommand((__int64)(v8 + 2), 0, v9, 0, 0LL);
                        v8 = (__int64 *)*v8;
                        SmpFreeSavedRegistryEntry(v10);
                      }
                      while ( v8 != &SmpBootExecuteList );
                      v2 = 0LL;
                    }
                    SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
                    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
                    v12 = (__int64 *)SmpBootExecuteNoPnpSyncList;
                    if ( (__int64 *)SmpBootExecuteNoPnpSyncList != &SmpBootExecuteNoPnpSyncList )
                    {
                      do
                      {
                        v17 = v12;
                        SmpExecuteCommand((__int64)(v12 + 2), 0, v11, 0, 0LL);
                        v12 = (__int64 *)*v12;
                        SmpFreeSavedRegistryEntry(v17);
                      }
                      while ( v12 != &SmpBootExecuteNoPnpSyncList );
                      v5 = v29;
                    }
                    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
                    if ( EventHandle )
                      NtSetEvent(EventHandle, 0LL);
                    SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
                    NtInitializeRegistry(0);
                    SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
                    if ( v7 >= 0 )
                    {
                      v18 = RtlQueryPerformanceFrequency(&v25);
                      v25 &= -(__int64)(v18 != 0);
                      v19 = RtlQueryPerformanceCounter(&v32);
                      v25 &= -(__int64)(v19 != 0);
                      if ( (int)SmpExecuteCommand((__int64)&Destination, 0, v20, 32, &v44) < 0 )
                      {
                        v21 = 1;
                      }
                      else
                      {
                        if ( SLOBYTE(v44.ImageInformation.DllCharacteristics) >= 0 )
                        {
                          v21 = 3;
                          NtTerminateProcess(v44.ProcessHandle, -1073740760);
                        }
                        else
                        {
                          v21 = 0;
                          NtResumeThread(v44.ThreadHandle, 0LL);
                          NtWaitForSingleObject(v44.ProcessHandle, 0, 0LL);
                        }
                        NtClose(v44.ProcessHandle);
                        NtClose(v44.ThreadHandle);
                      }
                      v22 = RtlQueryPerformanceCounter(&v31);
                      v23 = v25 & -(__int64)(v22 != 0);
                      v25 = v23;
                      if ( v23 > 0 )
                        v2 = 1000 * (v31 - v32) / v23;
                      SmpSendPlatformBinaryStatus(v21, v5, v2, &Destination);
                      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
                    }
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v42;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 64;
                    v13 = 0;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      NtClose(Handle);
                      v13 = (int)RtlQueryRegistryValuesEx(
                                   0LL,
                                   L"\\Registry\\Machine\\Xbox\\Session Manager",
                                   &SmpRegistryConfigurationTable2) >= 0;
                    }
                    if ( !SmpMiniNTBoot )
                      SmpProcessFileRenames(v13);
                    v27 = 0LL;
                    result = TpAllocWork(&v27, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
                    if ( result >= 0 )
                    {
                      TpPostWork(v27);
                      if ( SmpWaitForPagingFiles )
                        TpWaitForWork(v27, 0LL);
                      TpReleaseWork(v27);
                      DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
                      NtClose(KeyHandle);
                      if ( DynamicEnvironmentVariables < 0 )
                      {
                        return DynamicEnvironmentVariables;
                      }
                      else
                      {
                        SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
                        v16 = (__int64 *)SmpSetupExecuteList;
                        while ( v16 != &SmpSetupExecuteList )
                        {
                          v24 = v16;
                          SmpExecuteCommand((__int64)(v16 + 2), 0, v15, 0, 0LL);
                          v16 = (__int64 *)*v16;
                          SmpFreeSavedRegistryEntry(v24);
                        }
                        SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
                        result = SmpConfigureSharedSessionData();
                        if ( result >= 0 )
                        {
                          result = SmpInitializeKnownDlls();
                          if ( result >= 0 )
                          {
                            SmpTranslateSystemPartitionInformation();
                            return 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
