/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00E3E40 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C00E04E0 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E06A8 (-_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E076C (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C00E0944 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0BFC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0E80 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C0188CB4 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C0188D4C (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  void *v7; // rcx
  unsigned __int16 v8; // ax
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // esi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !*((_DWORD *)this + 29) )
  {
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf((PDEVICE_OBJECT *)this);
  }
  v7 = (void *)*((_QWORD *)this + 12);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_WORD *)this + 44) = 0;
  v8 = SourceString->Length + 2;
  *((_WORD *)this + 45) = v8;
  v9 = operator new[](v8, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 12) = v9;
  if ( v9 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 88), SourceString);
    DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, v11, v12, v13);
    v14 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v23);
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -1073741772 )
    {
      if ( (v15 = v23, v14 == -1073741772) && *((_DWORD *)this + 126) || v14 >= 0 && *((_DWORD *)this + 126) != v23 )
      {
        *((_DWORD *)this + 126) = v23;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v15);
        MONITOR_MGR::_IssueMonitorEvent(
          *((struct _FAST_MUTEX **)this + 2),
          *((_DWORD *)this + 7),
          9,
          *((unsigned int *)this + 126),
          *((_DWORD *)this + 94));
      }
    }
    if ( (int)DXGMONITOR::_ReadHMDPresenceFromRegistry(this, &v23) >= 0 )
    {
      v16 = v23;
      if ( (v23 == 1) != *((_BYTE *)this + 508) )
      {
        v22 = v23;
        *((_BYTE *)this + 508) = v23 == 1;
        DXGMONITOR::_SaveHMDPresenceToMonitorStore(this, v22);
        if ( v16 == 1 )
          MONITOR_MGR::_IssueMonitorEvent(
            *((struct _FAST_MUTEX **)this + 2),
            *((_DWORD *)this + 7),
            10,
            2LL,
            *((_DWORD *)this + 94));
      }
    }
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v10);
    WdLogEvent5_WdError(v21);
    return 3221225495LL;
  }
}
