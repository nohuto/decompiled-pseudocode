/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CA2D8
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00D6350 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C00C8E90 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00C8FFC (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C91D4 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C9458 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C0184604 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rcx
  unsigned __int16 v14; // ax
  PVOID v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this + 29) )
  {
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this, v6, v8, v9) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, 0LL, v11, v12);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this, v10, v11, v12);
  }
  v13 = (void *)*((_QWORD *)this + 12);
  if ( v13 )
  {
    operator delete(v13);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_WORD *)this + 44) = 0;
  v14 = SourceString->Length + 2;
  *((_WORD *)this + 45) = v14;
  v15 = operator new[](v14, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 12) = v15;
  if ( v15 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 88), SourceString);
    DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, v17, v18, v19);
    v20 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v27);
    if ( (int)(v20 + 0x80000000) < 0 || v20 == -1073741772 )
    {
      if ( (v21 = v27, v20 == -1073741772) && *((_DWORD *)this + 122) || v20 >= 0 && *((_DWORD *)this + 122) != v27 )
      {
        *((_DWORD *)this + 122) = v27;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v21);
        MONITOR_MGR::_IssueMonitorEvent(
          *((_QWORD *)this + 2),
          *((unsigned int *)this + 7),
          9LL,
          *((unsigned int *)this + 122),
          *((_DWORD *)this + 94));
      }
    }
    return 0LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v16);
    WdLogEvent5_WdError(v26);
    return 3221225495LL;
  }
}
