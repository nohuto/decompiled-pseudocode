/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00F9890 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C00F0720 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C00F0BDC (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0DA4 (-_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0E68 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C00F1040 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F12EC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F1574 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00F2140 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01B2674 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01B270C (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01B33F0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  char v7; // di
  __int64 v8; // rcx
  void *v9; // rcx
  unsigned __int16 v10; // ax
  PVOID v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // esi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // [rsp+60h] [rbp+8h] BYREF

  v7 = 1;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this + 29) )
  {
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf((PDEVICE_OBJECT *)this);
  }
  v9 = (void *)*((_QWORD *)this + 12);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_WORD *)this + 44) = 0;
  v10 = SourceString->Length + 2;
  *((_WORD *)this + 45) = v10;
  v11 = operator new(v10, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 12) = v11;
  if ( v11 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 88), SourceString);
    DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, v13, v14, v15);
    v16 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v28);
    if ( (int)(v16 + 0x80000000) < 0 || v16 == -1073741772 )
    {
      if ( (v17 = v28, v16 == -1073741772) && *((_DWORD *)this + 130) || v16 >= 0 && *((_DWORD *)this + 130) != v28 )
      {
        *((_DWORD *)this + 130) = v28;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v17);
        MONITOR_MGR::_IssueMonitorEvent(
          *((_QWORD *)this + 2),
          *((unsigned int *)this + 7),
          9LL,
          *((unsigned int *)this + 130),
          *((_DWORD *)this + 94),
          a3);
      }
    }
    if ( (int)DXGMONITOR::_ReadHMDPresenceFromRegistry(this, &v28) >= 0 )
    {
      v21 = v28;
      if ( (v28 == 1) != *((_BYTE *)this + 524) )
      {
        v27 = v28;
        *((_BYTE *)this + 524) = v28 == 1;
        DXGMONITOR::_SaveHMDPresenceToMonitorStore(this, v27);
        if ( v21 == 1 )
        {
          DXGMONITOR::_DestroyTtmDevice(this);
          MONITOR_MGR::_IssueMonitorEvent(
            *((_QWORD *)this + 2),
            *((unsigned int *)this + 7),
            10LL,
            2LL,
            *((_DWORD *)this + 94),
            a3);
        }
        else
        {
          v7 = 0;
        }
        DXGMONITOR::_UpdateLinkInfo((D3DDDI_VIDEO_PRESENT_TARGET_ID *)this, v7);
      }
    }
    if ( !*((_BYTE *)this + 524) )
      DXGMONITOR::_CreateTtmDevice(this, v18, v19, v20);
    return 0LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v12);
    WdLogEvent5_WdError(v26);
    return 3221225495LL;
  }
}
