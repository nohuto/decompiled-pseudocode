/*
 * XREFs of SmpLoadDataFromRegistry @ 0x140005550
 * Callers:
 *     SmpInit @ 0x140001F90 (SmpInit.c)
 * Callees:
 *     SmpReadSafeBootOption @ 0x1400022E0 (SmpReadSafeBootOption.c)
 *     SmpFinalizePathStrings @ 0x140002380 (SmpFinalizePathStrings.c)
 *     SmpGetPlatformBinary @ 0x140002454 (SmpGetPlatformBinary.c)
 *     SmpProcessFileRenames @ 0x140002964 (SmpProcessFileRenames.c)
 *     SmpExecuteCommand @ 0x14000350C (SmpExecuteCommand.c)
 *     SmpEventWrite @ 0x140005B68 (SmpEventWrite.c)
 *     SmpTranslateSystemPartitionInformation @ 0x140006E20 (SmpTranslateSystemPartitionInformation.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140008070 (SmpCreateDynamicEnvironmentVariables.c)
 *     RtlStringCbPrintfW @ 0x1400084FC (RtlStringCbPrintfW.c)
 *     SmpConfigureSharedSessionData @ 0x140008740 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x1400093D0 (SmpInitializeKnownDlls.c)
 *     SmpInitializeSessionManagement @ 0x1400095A0 (SmpInitializeSessionManagement.c)
 *     SmpInitializeDosDevices @ 0x14000A6A0 (SmpInitializeDosDevices.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000A848 (SmpFreeSavedRegistryEntry.c)
 *     SmpCreateProtectedPrefixes @ 0x14000B580 (SmpCreateProtectedPrefixes.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     SmpPlatformBinaryTableExists @ 0x140012928 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140012AA8 (SmpSendPlatformBinaryStatus.c)
 */

int __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle)
{
  int result; // eax
  __int64 v3; // rax
  int PlatformBinary; // esi
  __int64 *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // r8
  BOOL v10; // ebx
  int DynamicEnvironmentVariables; // ebx
  __int64 v12; // r8
  __int64 *v13; // rdi
  __int64 *v14; // rbx
  __int64 (*v15)(void); // rcx
  int v16; // eax
  __int64 *v17; // rbx
  int v18; // ebx
  unsigned int v19; // ebx
  __int64 *v20; // rbx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+78h] [rbp-88h] BYREF
  const wchar_t *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h] BYREF
  const wchar_t *v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h] BYREF
  const wchar_t *v32; // [rsp+B0h] [rbp-50h]
  PWSTR OldEnvironment; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+D8h] [rbp-28h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v37; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t pszDest[256]; // [rsp+160h] [rbp+60h] BYREF

  v29 = 7602290;
  v30 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v31 = 1310738;
  v32 = L"\\Sessions";
  v25 = 10354844;
  v26 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v27 = 9699474;
  v28 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StateSeparation\\Policy";
  qword_140023928 = (__int64)&SmpBootExecuteList;
  qword_140023938 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  qword_140023948 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_140023A48 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = (__int64)&SmpPagingFileList;
  qword_140023958 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = (__int64)&SmpDosDevicesList;
  qword_140023968 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = (__int64)&SmpFileRenameList;
  qword_140023978 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = &SmpKnownDllsList;
  qword_140023988 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = (__int64)&SmpExcludeKnownDllsList;
  qword_140023998 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_1400239A8 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140023A38 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = (__int64)&SmpExistingPageFilesList;
  SmpClearTempFiles = 0;
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", 2147352624LL);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  result = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( result < 0 )
  {
    v15 = (__int64 (*)(void))RtlCreateEnvironment;
    SmpInitProgressByLine = 1935;
    goto LABEL_47;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v29;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    NtClose(KeyHandle);
    SmpMiniNTBoot = 1;
  }
  SmpReadSafeBootOption();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
    RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned int)byte_140023A18);
    v3 = -1LL;
    do
      ++v3;
    while ( pszDest[v3] );
    result = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v3 + 2);
    if ( result >= 0 )
    {
      RtlSetCurrentEnvironment(SmpDefaultEnvironment, &OldEnvironment);
      result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable);
      if ( result < 0 )
      {
        v15 = (__int64 (*)(void))RtlQueryRegistryValuesEx;
        SmpInitProgressByLine = 2049;
      }
      else
      {
        result = SmpFinalizePathStrings();
        if ( result < 0 )
        {
          SmpInitProgressByLine = 2062;
          v15 = SmpFinalizePathStrings;
        }
        else
        {
          result = SmpInitializeSessionManagement();
          if ( result < 0 )
          {
            SmpInitProgressByLine = 2069;
            v15 = SmpInitializeSessionManagement;
          }
          else
          {
            RtlSetCurrentEnvironment(OldEnvironment, &SmpDefaultEnvironment);
            result = SmpInitializeDosDevices();
            if ( result < 0 )
            {
              SmpInitProgressByLine = 2090;
              v15 = SmpInitializeDosDevices;
            }
            else
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
              ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 208;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              result = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, &ObjectAttributes);
              if ( result < 0 )
              {
                v15 = (__int64 (*)(void))NtCreateDirectoryObject;
                SmpInitProgressByLine = 2122;
              }
              else
              {
                result = SmpCreateProtectedPrefixes();
                if ( result < 0 )
                {
                  SmpInitProgressByLine = 2139;
                  v15 = SmpCreateProtectedPrefixes;
                }
                else
                {
                  v24 = 0LL;
                  if ( SmpHostSmss )
                  {
                    if ( SmpMiniNTBoot || SmpSafeBootOption != -1 )
                    {
                      PlatformBinary = -1073741823;
                      if ( (unsigned __int8)SmpPlatformBinaryTableExists() )
                        SmpSendPlatformBinaryStatus(2LL);
                    }
                    else
                    {
                      PlatformBinary = SmpGetPlatformBinary(&Destination, &v24);
                    }
                  }
                  else
                  {
                    PlatformBinary = -1073741823;
                  }
                  v5 = (__int64 *)SmpBootExecuteList;
                  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList
                    && (*(__int64 **)SmpBootExecuteList != &SmpBootExecuteList
                     || !RtlEqualUnicodeString(
                           (PCUNICODE_STRING)(SmpBootExecuteList + 16),
                           &SmpAutoChkDefaultCommand,
                           0))
                    || (__int64 *)SmpSetupExecuteList != &SmpSetupExecuteList
                    || PlatformBinary >= 0 )
                  {
                    v16 = NtSerializeBoot();
                    if ( v16 < 0 )
                    {
                      SmpInitReturnStatus = v16;
                      SmpInitLastCall = (__int64)NtSerializeBoot;
                      SmpInitProgressByLine = 2218;
                    }
                  }
                  SmpEventWrite(&SmssEvt_BootExecuteList_Start);
                  while ( v5 != &SmpBootExecuteList )
                  {
                    v14 = v5;
                    SmpExecuteCommand((__int64)(v5 + 2), 0LL, v6, 0, 0LL);
                    v5 = (__int64 *)*v5;
                    SmpFreeSavedRegistryEntry(v14);
                  }
                  SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
                  SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
                  v8 = (__int64 *)SmpBootExecuteNoPnpSyncList;
                  while ( v8 != &SmpBootExecuteNoPnpSyncList )
                  {
                    v17 = v8;
                    SmpExecuteCommand((__int64)(v8 + 2), 0LL, v7, 0, 0LL);
                    v8 = (__int64 *)*v8;
                    SmpFreeSavedRegistryEntry(v17);
                  }
                  SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
                  if ( EventHandle )
                    NtSetEvent(EventHandle, 0LL);
                  SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
                  NtInitializeRegistry(0);
                  SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
                  if ( PlatformBinary >= 0 )
                  {
                    v18 = SmpExecuteCommand((__int64)&Destination, 0LL, v9, 32, &v37);
                    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
                    if ( v18 < 0 )
                    {
                      v19 = 1;
                    }
                    else
                    {
                      if ( SLOBYTE(v37.ImageInformation.DllCharacteristics) >= 0 )
                      {
                        v19 = 3;
                        NtTerminateProcess(v37.ProcessHandle, -1073740760);
                      }
                      else
                      {
                        v19 = 0;
                        NtResumeThread(v37.ThreadHandle, 0LL);
                        NtWaitForSingleObject(v37.ProcessHandle, 0, 0LL);
                      }
                      NtClose(v37.ProcessHandle);
                      NtClose(v37.ThreadHandle);
                    }
                    SmpSendPlatformBinaryStatus(v19);
                  }
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 64;
                  v10 = 0;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                  {
                    NtClose(Handle);
                    v10 = (int)RtlQueryRegistryValuesEx(
                                 0LL,
                                 L"\\Registry\\Machine\\Xbox\\Session Manager",
                                 &SmpRegistryConfigurationTable2) >= 0;
                  }
                  if ( !SmpMiniNTBoot )
                    SmpProcessFileRenames(v10);
                  v22 = 0LL;
                  result = TpAllocWork(&v22, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
                  if ( result < 0 )
                  {
                    v15 = (__int64 (*)(void))TpAllocWork;
                    SmpInitProgressByLine = 2404;
                  }
                  else
                  {
                    TpPostWork(v22);
                    if ( SmpWaitForPagingFiles )
                      TpWaitForWork(v22, 0LL);
                    TpReleaseWork(v22);
                    DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
                    NtClose(KeyHandle);
                    if ( DynamicEnvironmentVariables < 0 )
                    {
                      SmpInitProgressByLine = 2430;
                      SmpInitLastCall = (__int64)SmpCreateDynamicEnvironmentVariables;
                      result = DynamicEnvironmentVariables;
                      SmpInitReturnStatus = DynamicEnvironmentVariables;
                      return result;
                    }
                    SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
                    v13 = (__int64 *)SmpSetupExecuteList;
                    while ( v13 != &SmpSetupExecuteList )
                    {
                      v20 = v13;
                      SmpExecuteCommand((__int64)(v13 + 2), 0LL, v12, 0, 0LL);
                      v13 = (__int64 *)*v13;
                      SmpFreeSavedRegistryEntry(v20);
                    }
                    SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
                    result = SmpConfigureSharedSessionData();
                    if ( result < 0 )
                    {
                      SmpInitProgressByLine = 2473;
                      v15 = SmpConfigureSharedSessionData;
                    }
                    else
                    {
                      result = SmpInitializeKnownDlls();
                      if ( result >= 0 )
                      {
                        SmpTranslateSystemPartitionInformation();
                        return 0;
                      }
                      SmpInitProgressByLine = 2491;
                      v15 = SmpInitializeKnownDlls;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_47:
      SmpInitReturnStatus = result;
      SmpInitLastCall = (__int64)v15;
    }
  }
  return result;
}
