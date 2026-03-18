/*
 * XREFs of ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01B3E20
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C00EE40C (MonitorNotifyDeviceNodeReady.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01AF880 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00F033C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00F0F90 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01B23E4 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01B3D44 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
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
  __int64 i; // rdi
  char *v13; // rax
  void **v14; // rcx
  DXGMONITOR *v15; // rcx
  DXGMONITOR **v16; // r8
  __int64 j; // rdi
  __int64 v18; // rax
  _OWORD *v20; // rax
  DXGMONITOR **v21; // rdx
  DXGMONITOR *v22; // rax
  PVOID v23; // rax
  void *v24; // rcx

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
  for ( i = *((_QWORD *)a2 + 20);
        (const struct DXGMONITOR *)i != (const struct DXGMONITOR *)((char *)a2 + 160);
        i = *(_QWORD *)(i + 96) )
  {
    if ( i )
      i -= 96LL;
    if ( !i )
      break;
    v13 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
    if ( !v13 )
      goto LABEL_21;
    v15 = (DXGMONITOR *)(v13 + 96);
    *(_OWORD *)v13 = *(_OWORD *)i;
    *((_OWORD *)v13 + 1) = *(_OWORD *)(i + 16);
    *((_OWORD *)v13 + 2) = *(_OWORD *)(i + 32);
    *((_OWORD *)v13 + 3) = *(_OWORD *)(i + 48);
    *((_OWORD *)v13 + 4) = *(_OWORD *)(i + 64);
    *((_OWORD *)v13 + 5) = *(_OWORD *)(i + 80);
    *((_OWORD *)v13 + 6) = *(_OWORD *)(i + 96);
    *((_QWORD *)v13 + 14) = *(_QWORD *)(i + 112);
    v16 = (DXGMONITOR **)*((_QWORD *)this + 21);
    if ( *v16 != (DXGMONITOR *)((char *)this + 160) )
      __fastfail(3u);
    *(_QWORD *)v15 = (char *)this + 160;
    *((_QWORD *)v13 + 13) = v16;
    *v16 = v15;
    *((_QWORD *)this + 21) = v15;
    ++*((_DWORD *)this + 38);
    if ( i == *((_QWORD *)a2 + 22) )
      *((_QWORD *)this + 22) = v13;
  }
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  for ( j = *((_QWORD *)a2 + 26);
        (const struct DXGMONITOR *)j != (const struct DXGMONITOR *)((char *)a2 + 208);
        j = *(_QWORD *)(j + 48) )
  {
    if ( j )
      j -= 48LL;
    if ( !j )
      break;
    v20 = operator new(0x40uLL, 0x4D677844u, PagedPool);
    if ( !v20 )
      goto LABEL_21;
    *v20 = *(_OWORD *)j;
    v20[1] = *(_OWORD *)(j + 16);
    v20[2] = *(_OWORD *)(j + 32);
    v20[3] = *(_OWORD *)(j + 48);
    v21 = (DXGMONITOR **)*((_QWORD *)this + 27);
    v22 = (DXGMONITOR *)(v20 + 3);
    if ( *v21 != (DXGMONITOR *)((char *)this + 208) )
      __fastfail(3u);
    *(_QWORD *)v22 = (char *)this + 208;
    *((_QWORD *)v22 + 1) = v21;
    *v21 = v22;
    *((_QWORD *)this + 27) = v22;
    ++*((_DWORD *)this + 50);
  }
  if ( *((_QWORD *)a2 + 16) )
  {
    v23 = operator new(8uLL, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 15) = v23;
    if ( !v23
      || (**((_QWORD **)this + 15) = operator new(0x9FuLL, 0x4D677844u, PagedPool),
          v14 = (void **)*((_QWORD *)this + 15),
          !*v14) )
    {
LABEL_21:
      v18 = WdLogNewEntry5_WdLowResource(v14);
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
    *((_DWORD *)this + 28) = 1;
    v24 = *v14;
    *((_QWORD *)this + 16) = v24;
    memmove(v24, *((const void **)a2 + 16), 0x9FuLL);
  }
  return 0LL;
}
