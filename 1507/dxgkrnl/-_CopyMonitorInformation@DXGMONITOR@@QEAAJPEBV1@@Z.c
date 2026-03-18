/*
 * XREFs of ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00D7524 (MonitorNotifyDeviceNodeReady.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181B48 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00C87BC (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00C9124 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0184384 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0185AA8 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CopyMonitorInformation(
        DXGMONITOR *this,
        const struct DXGMONITOR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  const struct DXGMONITOR *i; // rsi
  _OWORD *v24; // rax
  void **v25; // rcx
  DXGMONITOR *v26; // rcx
  DXGMONITOR **v27; // r8
  char *v28; // rsi
  const struct DXGMONITOR *j; // rsi
  __int64 v30; // rax
  _OWORD *v32; // rax
  DXGMONITOR **v33; // rdx
  DXGMONITOR *v34; // rax
  char *v35; // rsi
  PVOID v36; // rax
  void *v37; // rcx

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 94) == 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  DXGMONITOR::_CleanupMonitorDescriptors((void **)this, (__int64)a2, a3, a4);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v8, v9, v10);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v11, v12, v13);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this, v14, v15, v16);
  if ( *((_DWORD *)this + 38) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_DWORD *)this + 50) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v22);
  }
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ *((_DWORD *)a2 + 6)) & 8;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  for ( i = (const struct DXGMONITOR *)*((_QWORD *)a2 + 20);
        i != (const struct DXGMONITOR *)((char *)a2 + 160);
        i = (const struct DXGMONITOR *)*((_QWORD *)v28 + 12) )
  {
    v28 = (char *)i - 96;
    if ( !v28 )
      break;
    v24 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
    if ( !v24 )
      goto LABEL_19;
    v26 = (DXGMONITOR *)(v24 + 6);
    *v24 = *(_OWORD *)v28;
    v24[1] = *((_OWORD *)v28 + 1);
    v24[2] = *((_OWORD *)v28 + 2);
    v24[3] = *((_OWORD *)v28 + 3);
    v24[4] = *((_OWORD *)v28 + 4);
    v24[5] = *((_OWORD *)v28 + 5);
    v24[6] = *((_OWORD *)v28 + 6);
    *((_QWORD *)v24 + 14) = *((_QWORD *)v28 + 14);
    v27 = (DXGMONITOR **)*((_QWORD *)this + 21);
    *((_QWORD *)v24 + 12) = (char *)this + 160;
    *((_QWORD *)v24 + 13) = v27;
    if ( *v27 != (DXGMONITOR *)((char *)this + 160) )
      __fastfail(3u);
    *v27 = v26;
    *((_QWORD *)this + 21) = v26;
    ++*((_DWORD *)this + 38);
    if ( v28 == *((char **)a2 + 22) )
      *((_QWORD *)this + 22) = v24;
  }
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  for ( j = (const struct DXGMONITOR *)*((_QWORD *)a2 + 26);
        j != (const struct DXGMONITOR *)((char *)a2 + 208);
        j = (const struct DXGMONITOR *)*((_QWORD *)v35 + 6) )
  {
    v35 = (char *)j - 48;
    if ( !v35 )
      break;
    v32 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
    if ( !v32 )
      goto LABEL_19;
    *v32 = *(_OWORD *)v35;
    v32[1] = *((_OWORD *)v35 + 1);
    v32[2] = *((_OWORD *)v35 + 2);
    v32[3] = *((_OWORD *)v35 + 3);
    v33 = (DXGMONITOR **)*((_QWORD *)this + 27);
    v34 = (DXGMONITOR *)(v32 + 3);
    *(_QWORD *)v34 = (char *)this + 208;
    *((_QWORD *)v34 + 1) = v33;
    if ( *v33 != (DXGMONITOR *)((char *)this + 208) )
      __fastfail(3u);
    *v33 = v34;
    *((_QWORD *)this + 27) = v34;
    ++*((_DWORD *)this + 50);
  }
  if ( *((_QWORD *)a2 + 16) )
  {
    v36 = operator new[](8uLL, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 15) = v36;
    if ( !v36
      || (**((_QWORD **)this + 15) = operator new[](0x9FuLL, 0x4D677844u, PagedPool),
          v25 = (void **)*((_QWORD *)this + 15),
          !*v25) )
    {
LABEL_19:
      v30 = WdLogNewEntry5_WdLowResource(v25);
      WdLogEvent5_WdLowResource(v30);
      return 3221225495LL;
    }
    *((_DWORD *)this + 28) = 1;
    v37 = *v25;
    *((_QWORD *)this + 16) = v37;
    memmove(v37, *((const void **)a2 + 16), 0x9FuLL);
  }
  return 0LL;
}
