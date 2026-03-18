/*
 * XREFs of WdipSemLoadScenarioTable @ 0x1405AE61C
 * Callers:
 *     WdipSemCleanStart @ 0x1405ADD3C (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     WdipSemFastAllocate @ 0x1405525E0 (WdipSemFastAllocate.c)
 *     WdipSemLoadNextScenario @ 0x1405AE904 (WdipSemLoadNextScenario.c)
 *     WdipSemQueryValueFromRegistry @ 0x1405AEDDC (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x1405AEEDC (WdipSemOpenRegistryKey.c)
 *     WdipSemFreeScenario @ 0x1405AEF50 (WdipSemFreeScenario.c)
 *     WdipSemUpdateProviderEntriesForScenario @ 0x1405AEFE0 (WdipSemUpdateProviderEntriesForScenario.c)
 *     WdipSemUpdateProviderTableWithScenario @ 0x1405AF090 (WdipSemUpdateProviderTableWithScenario.c)
 *     WdipSemEnableAllProviders @ 0x1405AF1E8 (WdipSemEnableAllProviders.c)
 *     WdipSemAddScenarioToTable @ 0x1405AF2E8 (WdipSemAddScenarioToTable.c)
 *     WdipSemRollBackProviderTable @ 0x1406DF0DC (WdipSemRollBackProviderTable.c)
 *     WdipSemWriteMisconfigEvent @ 0x1406DF2BC (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1406DF3A8 (WdipSemWriteScenarioLimitExceededEvent.c)
 */

__int64 WdipSemLoadScenarioTable()
{
  PSLIST_ENTRY v0; // rbx
  int v1; // edi
  ULONG v2; // r15d
  NTSTATUS v3; // eax
  bool v4; // si
  ULONG v5; // r14d
  PSLIST_ENTRY v6; // rax
  int NextScenario; // eax
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v11; // r10d
  unsigned int v12; // edx
  __int64 v13; // r9
  __int64 v14; // rcx
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h]
  HANDLE v18; // [rsp+58h] [rbp-B0h]
  int v19; // [rsp+60h] [rbp-A8h] BYREF
  int v20; // [rsp+64h] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  GUID Guid; // [rsp+78h] [rbp-90h] BYREF
  _DWORD KeyInformation[38]; // [rsp+88h] [rbp-80h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v0 = 0LL;
  v18 = 0LL;
  ResultLength[0] = 0;
  v20 = 0;
  v1 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Scenarios");
  if ( v1 >= 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            do
            {
              do
              {
LABEL_3:
                if ( Handle )
                {
                  ZwClose(Handle);
                  Handle = 0LL;
                }
                if ( v18 )
                {
                  ZwClose(v18);
                  v18 = 0LL;
                }
                memset(KeyInformation, 0, sizeof(KeyInformation));
                v3 = ZwEnumerateKey(KeyHandle, v2++, KeyBasicInformation, KeyInformation, 0x96u, ResultLength);
                if ( v3 == -2147483622 )
                {
                  v1 = 0;
                  WdipSemEnableAllProviders();
                  goto LABEL_29;
                }
              }
              while ( v3 < 0 );
              if ( KeyInformation[3] >= 0x80u )
              {
                v1 = -2147483643;
                goto LABEL_29;
              }
              *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)&KeyInformation[4]);
            }
            while ( RtlGUIDFromString(&DestinationString, &Guid) < 0 );
            if ( !WdipSemDisabledScenarioTable )
              break;
            v11 = *((_DWORD *)WdipSemDisabledScenarioTable + 256);
            v12 = 0;
            if ( !v11 )
              break;
            while ( 1 )
            {
              v13 = 16LL * v12;
              v14 = *(_QWORD *)&Guid.Data1 - *(_QWORD *)((char *)WdipSemDisabledScenarioTable + v13);
              if ( *(_QWORD *)&Guid.Data1 == *(_QWORD *)((char *)WdipSemDisabledScenarioTable + v13) )
                v14 = *(_QWORD *)Guid.Data4 - *(_QWORD *)((char *)WdipSemDisabledScenarioTable + v13 + 8);
              if ( !v14 )
                break;
              if ( ++v12 >= v11 )
                goto LABEL_12;
            }
          }
LABEL_12:
          ;
        }
        while ( (int)WdipSemOpenRegistryKey((PCWSTR)&KeyInformation[4]) < 0 );
        v19 = 1;
        v4 = 1;
        if ( (int)WdipSemOpenRegistryKey(L"Config") >= 0 )
          break;
LABEL_14:
        if ( (int)WdipSemOpenRegistryKey(L"Instrumentation") >= 0 )
        {
          v5 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v0 )
                WdipSemFreeScenario(v0);
              v6 = WdipSemFastAllocate(1, 0x4A0u);
              v0 = v6;
              if ( !v6 )
              {
                v1 = -1073741670;
                goto LABEL_29;
              }
              memset(v6, 0, 0x4A0uLL);
              *((_BYTE *)&v0[73].Next + 8) = v4;
              NextScenario = WdipSemLoadNextScenario(v18, v5++, (GUID *)v0);
              v8 = NextScenario;
              if ( NextScenario == -2147483622 )
                goto LABEL_3;
              if ( NextScenario >= 0 )
                break;
              if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_MISCONFIG) )
                WdipSemWriteMisconfigEvent(v0, LOWORD(v0[1].Next), v8);
            }
            if ( (unsigned int)dword_14032B1A0 >= 0x40 )
              break;
            v9 = dword_14032AB20;
            if ( (int)WdipSemUpdateProviderTableWithScenario(v0) < 0
              || HIDWORD(v0[3].Next) && (int)WdipSemAddScenarioToTable(v0) < 0 )
            {
              WdipSemRollBackProviderTable(v9);
            }
            else
            {
              WdipSemUpdateProviderEntriesForScenario(v0);
              if ( HIDWORD(v0[3].Next) )
                v0 = 0LL;
            }
          }
          if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_SCENARIO_MAX) )
            WdipSemWriteScenarioLimitExceededEvent(&WDI_SEM_EVENT_INIT_SCENARIO_MAX, v0, LOWORD(v0[1].Next));
        }
      }
      if ( (int)WdipSemQueryValueFromRegistry(0LL, &v20, (__int64)ResultLength) < 0 || v20 )
      {
        if ( (int)WdipSemQueryValueFromRegistry(0LL, &v19, (__int64)ResultLength) >= 0 )
          v4 = v19 != 0;
        goto LABEL_14;
      }
    }
  }
LABEL_29:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( v18 )
    ZwClose(v18);
  if ( v0 )
    WdipSemFreeScenario(v0);
  return (unsigned int)v1;
}
