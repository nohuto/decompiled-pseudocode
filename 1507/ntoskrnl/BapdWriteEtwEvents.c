/*
 * XREFs of BapdWriteEtwEvents @ 0x140157A80
 * Callers:
 *     BapdpProcessEtwEvents @ 0x14016C1C0 (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x140566000 (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     BapdpParseEventParts @ 0x140157D3C (BapdpParseEventParts.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403F68B8 (BapdpWriteEventDataToRegistry.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 *     EtwSetInformation @ 0x14057E7C0 (EtwSetInformation.c)
 */

__int64 __fastcall BapdWriteEtwEvents(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  REGHANDLE v3; // r12
  REGHANDLE v4; // rsi
  NTSTATUS v5; // edi
  REGHANDLE v6; // r13
  int *v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  const WCHAR *v13; // rdx
  const GUID *v14; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // r15
  bool v19; // zf
  char v20; // [rsp+48h] [rbp-49h]
  REGHANDLE v21; // [rsp+50h] [rbp-41h]
  ULONGLONG RegHandle; // [rsp+58h] [rbp-39h] BYREF
  ULONGLONG v23; // [rsp+60h] [rbp-31h] BYREF
  ULONGLONG v24; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-21h]
  GUID *v26; // [rsp+78h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-1h] BYREF

  RegHandle = 0LL;
  v25 = a1 + a2;
  v21 = 0LL;
  v2 = a1;
  v26 = &NullGuid;
  v24 = 0LL;
  v23 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = EtwRegister(&BOOTENV_ETW_PROVIDER, 0LL, 0LL, &RegHandle);
  if ( v5 < 0 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = RegHandle;
    EtwSetInformation(
      RegHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    v20 = 0;
    v5 = EtwRegister(&BOOT_PROVIDER_GUID, 0LL, 0LL, &v24);
    if ( v5 >= 0 )
    {
      v3 = v24;
      v5 = 0;
    }
    if ( v5 >= 0 )
    {
      while ( v2 < v25 )
      {
        if ( *(_DWORD *)(v2 + 8) == 6 )
        {
          v7 = (int *)(v2 + 68);
          BapdpParseEventParts(v2 + 48, v2 + 68, *(_DWORD *)(v2 + 64), (unsigned int)&UserData, (__int64)&RegHandle);
          v8 = (_QWORD *)(v2 + 32);
          v9 = *(_QWORD *)(v2 + 32);
          v10 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 - v9;
          if ( *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 == v9 )
            v10 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4 - *(_QWORD *)(v2 + 40);
          if ( v10 )
          {
            v16 = *(_QWORD *)&BOOT_PROVIDER_GUID.Data1 - v9;
            if ( *(_QWORD *)&BOOT_PROVIDER_GUID.Data1 == v9 )
              v16 = *(_QWORD *)BOOT_PROVIDER_GUID.Data4 - *(_QWORD *)(v2 + 40);
            if ( v16 )
            {
              v17 = *(_QWORD *)&v26->Data1 - v9;
              if ( *(_QWORD *)&v26->Data1 == v9 )
                v17 = *(_QWORD *)v26->Data4 - *(_QWORD *)(v2 + 40);
              if ( v17 )
              {
                if ( v4 )
                {
                  EtwUnregister(v4);
                  v23 = 0LL;
                }
                v18 = *(_BYTE *)(v2 + 51) != 11;
                v5 = EtwRegister((LPCGUID)(v2 + 32), 0LL, 0LL, &v23);
                if ( v5 >= 0 )
                {
                  v4 = v23;
                  if ( v18 )
                    EtwSetInformation(
                      v23,
                      EventProviderSetTraits,
                      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
                      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
                  v5 = 0;
                }
                else
                {
                  v4 = 0LL;
                  v23 = 0LL;
                }
                if ( v5 < 0 )
                  break;
                v19 = *(_BYTE *)(v2 + 51) == 11;
                v26 = (GUID *)(v2 + 32);
                v21 = v4;
                if ( v19 )
                  EtwSetInformation(v4, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
                v7 = (int *)(v2 + 68);
              }
            }
            else
            {
              v21 = v3;
              if ( !v20 && *(_BYTE *)(v2 + 51) == 11 )
              {
                EtwSetInformation(v3, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
                v20 = 1;
              }
            }
          }
          else
          {
            v21 = v6;
          }
          if ( EtwEventEnabled(v21, (PCEVENT_DESCRIPTOR)(v2 + 48)) )
          {
            v14 = *(_BYTE *)(v2 + 15) ? (const GUID *)(v2 + 16) : 0LL;
            v5 = EtwWrite(v21, (PCEVENT_DESCRIPTOR)(v2 + 48), v14, RegHandle, &UserData);
            if ( v5 < 0 )
              break;
          }
          v11 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 - *v8;
          if ( *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 == *v8 )
            v11 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4 - *(_QWORD *)(v2 + 40);
          if ( !v11 )
          {
            v12 = *(unsigned __int16 *)(v2 + 48);
            switch ( v12 )
            {
              case 11:
                v13 = L"POSTTime";
LABEL_24:
                RtlInitUnicodeString(&DestinationString, v13);
                BapdpWriteEventDataToRegistry(v7);
                break;
              case 20:
                if ( !*v7 )
                  ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0, 0LL, 0LL, 0, 0);
                break;
              case 16:
              case 29:
                ExBootAppFailureStatus = *v7;
                break;
              case 32:
                v13 = L"BootmgrUserInputTime";
                goto LABEL_24;
              default:
                break;
            }
          }
        }
        v2 = (*(unsigned int *)(v2 + 4) + v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      }
    }
  }
  if ( v6 )
    EtwUnregister(v6);
  if ( v3 )
    EtwUnregister(v3);
  if ( v4 )
    EtwUnregister(v4);
  return (unsigned int)v5;
}
