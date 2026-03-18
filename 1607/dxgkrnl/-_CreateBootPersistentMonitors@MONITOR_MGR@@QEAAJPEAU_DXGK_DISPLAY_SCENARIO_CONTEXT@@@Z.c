/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3120
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3A30 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0089224 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DmmIsTargetForcable @ 0x1C0089AD0 (DmmIsTargetForcable.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00F31A8 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF18C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01AFAE0 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  ULONG v8; // esi
  _DWORD *v9; // rdi
  WCHAR *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // r15
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rax
  __int64 v23; // r14
  int IsTargetForcable; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  WCHAR *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  int SimulatedMonitor; // esi
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rax
  bool v42; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v45; // [rsp+48h] [rbp-71h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v49; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = -1;
    v9 = 0LL;
    v10 = 0LL;
    while ( 1 )
    {
      ++v8;
      if ( !v9 )
      {
        v9 = operator new(0x60uLL, 0x4D677844u, PagedPool);
        if ( !v9 )
        {
          v12 = WdLogNewEntry5_WdLowResource(v11);
          WdLogEvent5_WdLowResource(v12);
          return 3221225495LL;
        }
      }
      v9[2] = -1;
      v13 = v9 + 3;
      v14 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueBasicInformation, v9 + 3, 0x4Eu, &ResultLength);
      v19 = v14;
      if ( v14 == -2147483622 )
      {
        v32 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
        *(_QWORD *)(v32 + 24) = v8;
        *(_QWORD *)(v32 + 32) = this;
        operator delete(v9);
        while ( v10 )
        {
          v33 = v10;
          v10 = *(WCHAR **)v10;
          v34 = *((unsigned int *)v33 + 2);
          if ( (_DWORD)v34 == -1 )
          {
            v38 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v33 + 12);
            v40 = v38;
            if ( v38 < 0 )
            {
              v41 = WdLogNewEntry5_WdError(v39);
              *(_QWORD *)(v41 + 24) = v40;
              WdLogEvent5_WdError(v41);
            }
          }
          else
          {
            v45 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v34, 2LL);
            if ( SimulatedMonitor >= 0 && !v45 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v35);
              WdLogEvent5_WdAssertion(v37);
            }
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)this, 1073741825, *((_DWORD *)v33 + 2), SimulatedMonitor, 0LL);
          }
          operator delete(v33);
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v14 < 0 )
        goto LABEL_13;
      *((_WORD *)v13 + ((unsigned __int64)(unsigned int)v9[5] >> 1) + 6) = 0;
      *(_QWORD *)v9 = v10;
      v10 = (WCHAR *)v9;
      v9 = 0LL;
      if ( v13[1] != 4 )
      {
        v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        *(_QWORD *)(v20 + 24) = v8;
        *(_QWORD *)(v20 + 32) = (unsigned int)v13[1];
        goto LABEL_15;
      }
      v21 = ZwEnumerateValueKey(KeyHandle, v8, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v19 = v21;
      if ( v21 == -2147483622 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v22);
      }
      if ( (int)v19 < 0 )
      {
LABEL_13:
        v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        *(_QWORD *)(v20 + 24) = v8;
        *(_QWORD *)(v20 + 32) = v19;
        goto LABEL_15;
      }
      v23 = v49;
      v42 = 0;
      IsTargetForcable = DmmIsTargetForcable(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v49, &v42, 0);
      if ( IsTargetForcable < 0 )
      {
        if ( IsTargetForcable == -1071774971 )
          goto LABEL_25;
      }
      else if ( v42 )
      {
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v23, SourceString) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v13 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v20 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
            goto LABEL_15;
          }
          *((_DWORD *)v10 + 2) = v23;
        }
      }
      else
      {
LABEL_25:
        v20 = WdLogNewEntry5_WdWarning(0LL, v25, v26, v27);
        *(_QWORD *)(v20 + 24) = v23;
LABEL_15:
        WdLogEvent5_WdWarning(v20);
      }
    }
  }
  return 0LL;
}
