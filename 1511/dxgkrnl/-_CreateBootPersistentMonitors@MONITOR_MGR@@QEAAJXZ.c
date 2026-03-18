/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00DEDFC
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ @ 0x1C00DF640 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DmmIsTargetForcable @ 0x1C00987D8 (DmmIsTargetForcable.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00DEC84 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01862BC (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  ULONG v8; // esi
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  char *v16; // r15
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  int IsTargetForcable; // eax
  __int64 v29; // rdx
  MONITOR_MGR *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int SimulatedMonitor; // esi
  __int64 v41; // rax
  NTSTATUS v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  bool v46; // [rsp+38h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-69h] BYREF
  __int64 v49; // [rsp+50h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v53; // [rsp+84h] [rbp-2Dh]
  WCHAR SourceString[32]; // [rsp+98h] [rbp-19h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( (int)MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
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
        v9 = operator new[](0x60uLL, 0x4D677844u, PagedPool);
        if ( !v9 )
        {
          v15 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
          WdLogEvent5_WdLowResource(v15);
          return 3221225495LL;
        }
      }
      *((_DWORD *)v9 + 2) = -1;
      v16 = (char *)v9 + 12;
      v17 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueBasicInformation, (char *)v9 + 12, 0x4Eu, &ResultLength);
      v22 = v17;
      if ( v17 == -2147483622 )
      {
        v37 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        *(_QWORD *)(v37 + 24) = v8;
        *(_QWORD *)(v37 + 32) = this;
        while ( 1 )
        {
          operator delete(v9);
          if ( !v10 )
            break;
          v9 = v10;
          v10 = (_QWORD *)*v10;
          v38 = *((unsigned int *)v9 + 2);
          if ( (_DWORD)v38 == -1 )
          {
            v42 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, (PCWSTR)v9 + 12);
            v44 = v42;
            if ( v42 < 0 )
            {
              v45 = WdLogNewEntry5_WdError(v43);
              *(_QWORD *)(v45 + 24) = v44;
              WdLogEvent5_WdError(v45);
            }
          }
          else
          {
            v49 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v38, 2LL);
            if ( SimulatedMonitor >= 0 && !v49 )
            {
              v41 = WdLogNewEntry5_WdAssertion(v39);
              WdLogEvent5_WdAssertion(v41);
            }
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)this, 1073741825, *((_DWORD *)v9 + 2), SimulatedMonitor, 0LL);
          }
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v17 < 0 )
        goto LABEL_13;
      *(_WORD *)&v16[2 * ((unsigned __int64)*((unsigned int *)v9 + 5) >> 1) + 12] = 0;
      *v9 = v10;
      v10 = v9;
      v9 = 0LL;
      if ( *((_DWORD *)v16 + 1) != 4 )
      {
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v23 + 24) = v8;
        *(_QWORD *)(v23 + 32) = *((unsigned int *)v16 + 1);
        goto LABEL_25;
      }
      v24 = ZwEnumerateValueKey(KeyHandle, v8, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v22 = v24;
      if ( v24 == -2147483622 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v25);
      }
      if ( (int)v22 < 0 )
      {
LABEL_13:
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v23 + 24) = v8;
        *(_QWORD *)(v23 + 32) = v22;
        goto LABEL_25;
      }
      v26 = *((_QWORD *)this + 1);
      v27 = v53;
      v46 = 0;
      IsTargetForcable = DmmIsTargetForcable(*(_QWORD *)(v26 + 16), v53, &v46, 0);
      if ( IsTargetForcable < 0 )
      {
        if ( IsTargetForcable == -1071774971 )
          goto LABEL_24;
      }
      else if ( v46 )
      {
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(v30, v27, SourceString) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v16 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v23 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
            goto LABEL_25;
          }
          *((_DWORD *)v10 + 2) = v27;
        }
      }
      else
      {
LABEL_24:
        v23 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
        *(_QWORD *)(v23 + 24) = v27;
LABEL_25:
        WdLogEvent5_WdWarning(v23);
      }
    }
  }
  return 0LL;
}
