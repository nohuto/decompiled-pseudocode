/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00CADB4
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ @ 0x1C00CB72C (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DmmIsTargetForcable @ 0x1C008D4E4 (DmmIsTargetForcable.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00CAE44 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C0181C84 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rax
  ULONG v11; // esi
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rcx
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
  __int64 v39; // rdx
  __int64 v40; // rcx
  int SimulatedMonitor; // esi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  bool v49; // [rsp+38h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-69h] BYREF
  __int64 v52; // [rsp+50h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v56; // [rsp+84h] [rbp-2Dh]
  WCHAR SourceString[32]; // [rsp+98h] [rbp-19h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = -1;
    v12 = 0LL;
    v13 = 0LL;
    while ( 1 )
    {
      ++v11;
      if ( !v12 )
      {
        v12 = operator new[](0x60uLL, 0x4D677844u, PagedPool);
        if ( !v12 )
        {
          v15 = WdLogNewEntry5_WdLowResource(v14);
          WdLogEvent5_WdLowResource(v15);
          return 3221225495LL;
        }
      }
      *((_DWORD *)v12 + 2) = -1;
      v16 = (char *)v12 + 12;
      v17 = ZwEnumerateValueKey(KeyHandle, v11, KeyValueBasicInformation, (char *)v12 + 12, 0x4Eu, &ResultLength);
      v22 = v17;
      if ( v17 == -2147483622 )
      {
        v37 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        *(_QWORD *)(v37 + 24) = v11;
        *(_QWORD *)(v37 + 32) = this;
        while ( 1 )
        {
          operator delete(v12);
          if ( !v13 )
            break;
          v12 = v13;
          v13 = (_QWORD *)*v13;
          v38 = *((unsigned int *)v12 + 2);
          if ( (_DWORD)v38 == -1 )
          {
            v45 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, (PCWSTR)v12 + 12);
            v47 = v45;
            if ( v45 < 0 )
            {
              v48 = WdLogNewEntry5_WdError(v46);
              *(_QWORD *)(v48 + 24) = v47;
              WdLogEvent5_WdError(v48);
            }
          }
          else
          {
            v52 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v38, 2LL);
            if ( SimulatedMonitor >= 0 && !v52 )
            {
              v44 = WdLogNewEntry5_WdAssertion(v40, v39, v42, v43);
              WdLogEvent5_WdAssertion(v44);
            }
            MONITOR_MGR::_LogMonitorPresentEvent(
              (__int64)this,
              1073741825LL,
              *((unsigned int *)v12 + 2),
              (unsigned int)SimulatedMonitor,
              0LL);
          }
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v17 < 0 )
        goto LABEL_13;
      *(_WORD *)&v16[2 * ((unsigned __int64)*((unsigned int *)v12 + 5) >> 1) + 12] = 0;
      *v12 = v13;
      v13 = v12;
      v12 = 0LL;
      if ( *((_DWORD *)v16 + 1) != 4 )
      {
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v23 + 24) = v11;
        *(_QWORD *)(v23 + 32) = *((unsigned int *)v16 + 1);
        goto LABEL_25;
      }
      v24 = ZwEnumerateValueKey(KeyHandle, v11, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v22 = v24;
      if ( v24 == -2147483622 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v25);
      }
      if ( (int)v22 < 0 )
      {
LABEL_13:
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v23 + 24) = v11;
        *(_QWORD *)(v23 + 32) = v22;
        goto LABEL_25;
      }
      v26 = *((_QWORD *)this + 1);
      v27 = v56;
      v49 = 0;
      IsTargetForcable = DmmIsTargetForcable(*(_QWORD *)(v26 + 16), v56, &v49, 0);
      if ( IsTargetForcable < 0 )
      {
        if ( IsTargetForcable == -1071774971 )
          goto LABEL_24;
      }
      else if ( v49 )
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
          *((_DWORD *)v13 + 2) = v27;
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
