/*
 * XREFs of RtlpQueryRegistryValues @ 0x1404DAFA4
 * Callers:
 *     WmipGetGuidSecurityDescriptor @ 0x140472FF0 (WmipGetGuidSecurityDescriptor.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140494D2C (RtlpQueryTimeZoneInformationWorker.c)
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     RtlQueryRegistryValuesEx @ 0x1404D9E08 (RtlQueryRegistryValuesEx.c)
 *     RtlQueryRegistryValues @ 0x1404DAEA8 (RtlQueryRegistryValues.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14055F670 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x14055F894 (RtlSetActiveTimeBias.c)
 *     PspQueryForwardersEnabled @ 0x14055FBE8 (PspQueryForwardersEnabled.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140563D20 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14056413C (EtwpGetAutoLoggerProviderFilter.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x14057AD5C (IopQueryPassiveInterruptRegistryOptions.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14057E008 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     ExIsMultiSessionSku @ 0x14057F828 (ExIsMultiSessionSku.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632F6C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BE34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     PpmRegisterSpmSettings @ 0x140675F94 (PpmRegisterSpmSettings.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x14067ED2C (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x14067EDB8 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     SmKmRegParamsLoad @ 0x14069894C (SmKmRegParamsLoad.c)
 *     ExpPcwDisabledStatus @ 0x1406B6B54 (ExpPcwDisabledStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404DB3C4 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1404DB43C (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x1404DDD78 (RtlpGetRegistryHandle.c)
 */

__int64 RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r15
  int v7; // r12d
  __int64 result; // rax
  ULONG v9; // r14d
  int v10; // r12d
  const WCHAR *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  NTSTATUS v16; // ebx
  ULONG Length; // r13d
  int v18; // eax
  int v19; // eax
  const WCHAR *v20; // rdx
  int v21; // eax
  char v22; // al
  ULONG v23; // ebx
  __int64 v24; // rax
  int v25; // r15d
  ULONG v26; // ebx
  __int64 v27; // rax
  int v28; // eax
  int ResultLength; // [rsp+30h] [rbp-61h]
  int ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG v31; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  __int64 v33; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+108h] [rbp+77h] BYREF
  va_list va; // [rsp+108h] [rbp+77h]
  __int64 v41; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v39 = va_arg(va1, _QWORD);
  v41 = va_arg(va1, _QWORD);
  v4 = a4;
  v7 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v9 = 0;
  LODWORD(v39) = result;
  if ( (int)result >= 0 )
  {
    v10 = v7 & 0x40000000;
    if ( v10 )
      v11 = 0LL;
    else
      v11 = a2;
    RtlInitUnicodeString(&DestinationString, v11);
    v33 = 136LL;
    v13 = RtlpAllocDeallocQueryBuffer(&v33, 0LL, v12, (__int64 *)va);
    v15 = v13;
    if ( v13 )
    {
      v16 = v39;
      Length = 134;
      *(_DWORD *)(v13 + 8) = 0;
      KeyHandle = Handle;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_DWORD *)(a3 + 8) & 0x21) != 0 )
      {
        v18 = *(_DWORD *)(a3 + 8);
        if ( (v18 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (v18 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (v18 & 3) != 0 && KeyHandle != Handle )
          {
            ZwClose(KeyHandle);
            KeyHandle = Handle;
          }
          v19 = *(_DWORD *)(a3 + 8);
          v20 = *(const WCHAR **)(a3 + 16);
          if ( (v19 & 1) == 0 )
          {
            if ( v20 )
            {
              RtlInitUnicodeString(&ValueName, v20);
              while ( 1 )
              {
                v21 = v9++;
                if ( v21 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1275);
                  goto LABEL_30;
                }
                v16 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v15, Length, &v31);
                if ( v16 == -2147483643 )
                  v16 = -1073741789;
                LODWORD(v39) = v16;
                if ( v16 < 0 )
                {
                  if ( v16 == -1073741772 )
                  {
                    v22 = v41;
                    *(_DWORD *)(v15 + 4) = 0;
                    *(_DWORD *)(v15 + 12) = 0;
                    v31 = Length;
                    v16 = RtlpCallQueryRegistryRoutine(
                            (_DWORD)KeyHandle,
                            a3,
                            v15,
                            (unsigned int)&v31,
                            v4,
                            ResultLength,
                            v22);
                    LODWORD(v39) = v16;
                  }
                  if ( v16 != -1073741789 )
                    goto LABEL_41;
                }
                else
                {
                  if ( *(_DWORD *)(v15 + 4) == 7 )
                  {
                    *(_WORD *)(v31 + v15) = 0;
                    *(_DWORD *)(v15 + 12) += 2;
                  }
                  v31 = Length;
                  v16 = RtlpCallQueryRegistryRoutine(
                          (_DWORD)KeyHandle,
                          a3,
                          v15,
                          (unsigned int)&v31,
                          v4,
                          ResultLength,
                          v41);
                  LODWORD(v39) = v16;
                  if ( v16 != -1073741789 )
                  {
                    v9 = 0;
                    if ( v16 < 0 )
                      goto LABEL_30;
                    if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_26:
                    if ( v16 >= 0 )
                    {
LABEL_27:
                      v4 = a4;
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_30;
                  }
                }
                v23 = v31 + 10;
                v33 = v31 + 10LL;
                v24 = RtlpAllocDeallocQueryBuffer(&v33, v15, v14, (__int64 *)va);
                v15 = v24;
                if ( !v24 )
                {
                  v16 = v39;
                  goto LABEL_30;
                }
                Length = v23 - 2;
                *(_DWORD *)(v24 + 8) = 0;
                v16 = v39;
              }
            }
            if ( (v19 & 8) != 0 )
            {
              v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v4,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_26;
            }
            goto LABEL_46;
          }
          if ( v20 )
          {
            RtlInitUnicodeString(&DestinationString, v20);
            ObjectAttributes.RootDirectory = Handle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v16 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
            if ( v16 < 0 )
              goto LABEL_30;
            if ( !*(_QWORD *)a3 )
              goto LABEL_26;
LABEL_46:
            v25 = 0;
            while ( 1 )
            {
              v16 = ZwEnumerateValueKey(KeyHandle, v9, KeyValueFullInformation, (PVOID)v15, Length, &v31);
              if ( v16 == -2147483643 )
                v16 = -1073741789;
              LODWORD(v39) = v16;
              if ( v16 == -2147483622 )
              {
                if ( v9 || (*(_DWORD *)(a3 + 8) & 4) == 0 )
                {
                  v9 = 0;
                  v16 = 0;
                  goto LABEL_27;
                }
                v16 = -1073741772;
                goto LABEL_30;
              }
              if ( v16 >= 0 )
              {
                v31 = Length;
                v16 = RtlpCallQueryRegistryRoutine(
                        (_DWORD)KeyHandle,
                        a3,
                        v15,
                        (unsigned int)&v31,
                        a4,
                        ResultLengtha,
                        v41);
                LODWORD(v39) = v16;
              }
              if ( v16 == -1073741789 )
              {
                v26 = v31 + 10;
                v33 = v31 + 10LL;
                v27 = RtlpAllocDeallocQueryBuffer(&v33, v15, v14, (__int64 *)va);
                v15 = v27;
                if ( !v27 )
                  goto LABEL_73;
                *(_DWORD *)(v27 + 8) = 0;
                Length = v26 - 2;
                v28 = v25;
                --v9;
                ++v25;
                if ( v28 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1456);
LABEL_73:
                  v16 = v39;
LABEL_41:
                  v9 = 0;
                  goto LABEL_26;
                }
              }
              else
              {
                if ( v16 < 0 )
                  goto LABEL_30;
                v25 = 0;
                if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
                {
                  ValueName.Buffer = (wchar_t *)(v15 + 20);
                  ValueName.Length = *(_WORD *)(v15 + 16);
                  ValueName.MaximumLength = *(_WORD *)(v15 + 16);
                  if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
                    --v9;
                }
              }
              ++v9;
            }
          }
        }
        v16 = -1073741811;
      }
LABEL_30:
      if ( Handle && !v10 )
        ZwClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          ZwClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL, v15, v14, 0LL);
      return (unsigned int)v16;
    }
    else
    {
      if ( !v10 )
        ZwClose(Handle);
      return (unsigned int)v39;
    }
  }
  return result;
}
