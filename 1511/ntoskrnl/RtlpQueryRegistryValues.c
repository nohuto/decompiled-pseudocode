/*
 * XREFs of RtlpQueryRegistryValues @ 0x1404C87C0
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1404848DC (WmipQueryWmiDataBlock.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1404C7E48 (RtlpQueryTimeZoneInformationWorker.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1404C85C8 (WmipGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValuesEx @ 0x1404C8798 (RtlQueryRegistryValuesEx.c)
 *     RtlQueryRegistryValues @ 0x1404C87AC (RtlQueryRegistryValues.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     PiDevCfgQueryDriverNode @ 0x140510B28 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405113A0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140527730 (EtwpGetAutoLoggerProviderFilter.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14053BBF4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x14053BE18 (RtlSetActiveTimeBias.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x140545F50 (IopQueryPassiveInterruptRegistryOptions.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140548F90 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140607C34 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmRegisterSpmSettings @ 0x14063D71C (PpmRegisterSpmSettings.c)
 *     SmKmRegParamsLoad @ 0x14065AC3C (SmKmRegParamsLoad.c)
 *     ExpPcwDisabledStatus @ 0x1406740DC (ExpPcwDisabledStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140150880 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404C8BEC (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1404C8C64 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
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
  int v23; // r15d
  ULONG v24; // ebx
  __int64 v25; // rax
  ULONG v26; // ebx
  __int64 v27; // rax
  int v28; // eax
  int ResultLength; // [rsp+30h] [rbp-61h]
  int ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG v31; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  __int64 v34; // [rsp+60h] [rbp-31h] BYREF
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
    v34 = 136LL;
    v13 = RtlpAllocDeallocQueryBuffer(&v34, 0LL, v12, (__int64 *)va);
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
                  goto LABEL_28;
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
                    goto LABEL_39;
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
                      goto LABEL_28;
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
                    goto LABEL_28;
                  }
                }
                v24 = v31 + 10;
                v34 = v31 + 10LL;
                v25 = RtlpAllocDeallocQueryBuffer(&v34, v15, v14, (__int64 *)va);
                v15 = v25;
                if ( !v25 )
                {
                  v16 = v39;
                  goto LABEL_28;
                }
                Length = v24 - 2;
                *(_DWORD *)(v25 + 8) = 0;
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
            goto LABEL_42;
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
              goto LABEL_28;
            if ( !*(_QWORD *)a3 )
              goto LABEL_26;
LABEL_42:
            v23 = 0;
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
                goto LABEL_28;
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
                v34 = v31 + 10LL;
                v27 = RtlpAllocDeallocQueryBuffer(&v34, v15, v14, (__int64 *)va);
                v15 = v27;
                if ( !v27 )
                  goto LABEL_73;
                *(_DWORD *)(v27 + 8) = 0;
                Length = v26 - 2;
                v28 = v23;
                --v9;
                ++v23;
                if ( v28 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1456);
LABEL_73:
                  v16 = v39;
LABEL_39:
                  v9 = 0;
                  goto LABEL_26;
                }
              }
              else
              {
                if ( v16 < 0 )
                  goto LABEL_28;
                v23 = 0;
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
LABEL_28:
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
