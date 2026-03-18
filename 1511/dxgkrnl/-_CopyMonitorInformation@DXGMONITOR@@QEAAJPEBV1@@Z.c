/*
 * XREFs of ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C018A394
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00E372C (MonitorNotifyDeviceNodeReady.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0186058 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00DFD8C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00E0894 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0188A34 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C018A2B8 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CopyMonitorInformation(DXGMONITOR *this, const struct DXGMONITOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  const struct DXGMONITOR *i; // rsi
  _OWORD *v13; // rax
  __int64 v14; // rdx
  void **v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGMONITOR *v18; // rcx
  DXGMONITOR **v19; // r8
  char *v20; // rsi
  const struct DXGMONITOR *j; // rsi
  __int64 v22; // rax
  _OWORD *v24; // rax
  DXGMONITOR **v25; // rdx
  DXGMONITOR *v26; // rax
  char *v27; // rsi
  PVOID v28; // rax
  void *v29; // rcx

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 94) == 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  DXGMONITOR::_CleanupMonitorDescriptors((void **)this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v6, v7, v8);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this);
  if ( *((_DWORD *)this + 38) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 50) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v11);
  }
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ *((_DWORD *)a2 + 6)) & 8;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  for ( i = (const struct DXGMONITOR *)*((_QWORD *)a2 + 20);
        i != (const struct DXGMONITOR *)((char *)a2 + 160);
        i = (const struct DXGMONITOR *)*((_QWORD *)v20 + 12) )
  {
    v20 = (char *)i - 96;
    if ( !v20 )
      break;
    v13 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
    if ( !v13 )
      goto LABEL_19;
    v18 = (DXGMONITOR *)(v13 + 6);
    *v13 = *(_OWORD *)v20;
    v13[1] = *((_OWORD *)v20 + 1);
    v13[2] = *((_OWORD *)v20 + 2);
    v13[3] = *((_OWORD *)v20 + 3);
    v13[4] = *((_OWORD *)v20 + 4);
    v13[5] = *((_OWORD *)v20 + 5);
    v13[6] = *((_OWORD *)v20 + 6);
    *((_QWORD *)v13 + 14) = *((_QWORD *)v20 + 14);
    v19 = (DXGMONITOR **)*((_QWORD *)this + 21);
    *((_QWORD *)v13 + 12) = (char *)this + 160;
    *((_QWORD *)v13 + 13) = v19;
    if ( *v19 != (DXGMONITOR *)((char *)this + 160) )
      __fastfail(3u);
    *v19 = v18;
    *((_QWORD *)this + 21) = v18;
    ++*((_DWORD *)this + 38);
    if ( v20 == *((char **)a2 + 22) )
      *((_QWORD *)this + 22) = v13;
  }
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  for ( j = (const struct DXGMONITOR *)*((_QWORD *)a2 + 26);
        j != (const struct DXGMONITOR *)((char *)a2 + 208);
        j = (const struct DXGMONITOR *)*((_QWORD *)v27 + 6) )
  {
    v27 = (char *)j - 48;
    if ( !v27 )
      break;
    v24 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
    if ( !v24 )
      goto LABEL_19;
    *v24 = *(_OWORD *)v27;
    v24[1] = *((_OWORD *)v27 + 1);
    v24[2] = *((_OWORD *)v27 + 2);
    v24[3] = *((_OWORD *)v27 + 3);
    v25 = (DXGMONITOR **)*((_QWORD *)this + 27);
    v26 = (DXGMONITOR *)(v24 + 3);
    *(_QWORD *)v26 = (char *)this + 208;
    *((_QWORD *)v26 + 1) = v25;
    if ( *v25 != (DXGMONITOR *)((char *)this + 208) )
      __fastfail(3u);
    *v25 = v26;
    *((_QWORD *)this + 27) = v26;
    ++*((_DWORD *)this + 50);
  }
  if ( *((_QWORD *)a2 + 16) )
  {
    v28 = operator new[](8uLL, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 15) = v28;
    if ( !v28
      || (**((_QWORD **)this + 15) = operator new[](0x9FuLL, 0x4D677844u, PagedPool),
          v15 = (void **)*((_QWORD *)this + 15),
          !*v15) )
    {
LABEL_19:
      v22 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
    *((_DWORD *)this + 28) = 1;
    v29 = *v15;
    *((_QWORD *)this + 16) = v29;
    memmove(v29, *((const void **)a2 + 16), 0x9FuLL);
  }
  return 0LL;
}
