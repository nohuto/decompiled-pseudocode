/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C01898B8
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002C5D4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00DFD8C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00E0894 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0188A34 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C018995C (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C018A2B8 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx

  if ( *((_DWORD *)this + 110) )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v2[3] = *((unsigned int *)this + 110);
    v2[4] = this;
    v2[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL);
    WdLogEvent5_WdError(v2);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 344), this, 0x20u);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v3, v4, v5);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v6 = (void *)*((_QWORD *)this + 12);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXGMONITOR::_CleanupMonitorCCDName(this);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 240));
}
