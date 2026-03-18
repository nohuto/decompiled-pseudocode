/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C01850A4
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002CBC4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00C87BC (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00C9124 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0184384 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C0185148 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0185AA8 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rcx

  if ( *((_DWORD *)this + 106) )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v2[3] = *((unsigned int *)this + 106);
    v2[4] = this;
    v2[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL);
    WdLogEvent5_WdError(v2);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 344), this, 0x20u);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v3, v4, v5);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v6, v7, v8);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this, v9, v10, v11);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v12 = (void *)*((_QWORD *)this + 12);
  if ( v12 )
  {
    operator delete(v12);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXGMONITOR::_CleanupMonitorCCDName(this);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 240));
}
