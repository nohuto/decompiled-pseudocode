/*
 * XREFs of BapdWriteEtwEvents @ 0x1401324AC
 * Callers:
 *     BapdpProcessEtwEvents @ 0x14013D3D4 (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x140531D9C (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     BapdpParseEventParts @ 0x1401327BC (BapdpParseEventParts.c)
 *     BapdRegisterEtwProvider @ 0x140132850 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403D3384 (BapdpWriteEventDataToRegistry.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     EtwSetInformation @ 0x140549024 (EtwSetInformation.c)
 */

__int64 __fastcall BapdWriteEtwEvents(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  REGHANDLE v3; // r13
  REGHANDLE v4; // rsi
  REGHANDLE v5; // rdi
  NTSTATUS v6; // r15d
  int v7; // eax
  int *v8; // r12
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  const WCHAR *v14; // rdx
  const GUID *v15; // r8
  __int64 v17; // rcx
  GUID *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  bool v21; // zf
  char v22; // [rsp+48h] [rbp-49h]
  ULONG UserDataCount[2]; // [rsp+50h] [rbp-41h] BYREF
  REGHANDLE v24; // [rsp+58h] [rbp-39h] BYREF
  REGHANDLE RegHandle; // [rsp+60h] [rbp-31h] BYREF
  GUID *v26; // [rsp+68h] [rbp-29h]
  unsigned __int64 v27; // [rsp+70h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-9h] BYREF

  RegHandle = 0LL;
  v27 = a1 + (unsigned int)a2;
  *(_QWORD *)UserDataCount = 0LL;
  v2 = a1;
  v26 = &NullGuid;
  LOBYTE(a2) = 1;
  v24 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, a2, &RegHandle);
  if ( v6 >= 0 )
  {
    v22 = 0;
    v7 = BapdRegisterEtwProvider(&BOOT_PROVIDER_GUID, 0LL, UserDataCount);
    v4 = *(_QWORD *)UserDataCount;
    v6 = v7;
    if ( v7 >= 0 )
    {
      while ( v2 < v27 )
      {
        if ( *(_DWORD *)(v2 + 8) == 6 )
        {
          v8 = (int *)(v2 + 68);
          BapdpParseEventParts(v2 + 48, v2 + 68, *(_DWORD *)(v2 + 64), (unsigned int)&UserData, (__int64)UserDataCount);
          v9 = (_QWORD *)(v2 + 32);
          v10 = *(_QWORD *)(v2 + 32);
          v11 = BOOTENV_ETW_PROVIDER - v10;
          if ( BOOTENV_ETW_PROVIDER == v10 )
            v11 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
          if ( v11 )
          {
            v17 = BOOT_PROVIDER_GUID - v10;
            if ( BOOT_PROVIDER_GUID == v10 )
              v17 = 0x6B3FAED6A2C303F9LL - *(_QWORD *)(v2 + 40);
            if ( v17 )
            {
              v18 = v26;
              v19 = *(_QWORD *)&v26->Data1 - v10;
              if ( *(_QWORD *)&v26->Data1 == v10 )
                v19 = *(_QWORD *)v26->Data4 - *(_QWORD *)(v2 + 40);
              if ( v19 )
              {
                if ( v5 )
                {
                  EtwUnregister(v5);
                  v24 = 0LL;
                }
                LOBYTE(v18) = *(_BYTE *)(v2 + 51) != 11;
                v20 = BapdRegisterEtwProvider(v2 + 32, v18, &v24);
                v5 = v24;
                v6 = v20;
                if ( v20 < 0 )
                  break;
                v21 = *(_BYTE *)(v2 + 51) == 11;
                v3 = v24;
                v26 = (GUID *)(v2 + 32);
                if ( v21 )
                  EtwSetInformation(v24, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
              }
            }
            else
            {
              v3 = v4;
              if ( !v22 && *(_BYTE *)(v2 + 51) == 11 )
              {
                EtwSetInformation(v4, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
                v22 = 1;
              }
            }
          }
          else
          {
            v3 = RegHandle;
          }
          if ( EtwEventEnabled(v3, (PCEVENT_DESCRIPTOR)(v2 + 48)) )
          {
            v15 = *(_BYTE *)(v2 + 15) ? (const GUID *)(v2 + 16) : 0LL;
            v6 = EtwWrite(v3, (PCEVENT_DESCRIPTOR)(v2 + 48), v15, UserDataCount[0], &UserData);
            if ( v6 < 0 )
              break;
          }
          v12 = BOOTENV_ETW_PROVIDER - *v9;
          if ( BOOTENV_ETW_PROVIDER == *v9 )
            v12 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
          if ( !v12 )
          {
            v13 = *(unsigned __int16 *)(v2 + 48);
            switch ( v13 )
            {
              case 11:
                v14 = L"POSTTime";
LABEL_20:
                RtlInitUnicodeString(&DestinationString, v14);
                BapdpWriteEventDataToRegistry((PVOID)(v2 + 68));
                break;
              case 20:
                if ( !*v8 )
                  ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0, 0LL, 0LL, 0, 0);
                break;
              case 16:
              case 29:
                ExBootAppFailureStatus = *v8;
                break;
              case 32:
                v14 = L"BootmgrUserInputTime";
                goto LABEL_20;
              default:
                break;
            }
          }
        }
        v2 = (*(unsigned int *)(v2 + 4) + v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      }
    }
  }
  if ( RegHandle )
    EtwUnregister(RegHandle);
  if ( v4 )
    EtwUnregister(v4);
  if ( v5 )
    EtwUnregister(v5);
  return (unsigned int)v6;
}
