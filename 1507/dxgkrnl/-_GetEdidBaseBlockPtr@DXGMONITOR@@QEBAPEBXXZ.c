/*
 * XREFs of ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C0097F90
 * Callers:
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AC358 (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorIsPortraitFirstMonitor @ 0x1C00DDB00 (MonitorIsPortraitFirstMonitor.c)
 *     MonitorIsAudioSupportedInEdid @ 0x1C01825CC (MonitorIsAudioSupportedInEdid.c)
 * Callees:
 *     <none>
 */

const void *__fastcall DXGMONITOR::_GetEdidBaseBlockPtr(DXGMONITOR *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 16);
  if ( v1 && *(_QWORD *)(v1 + 16) >= 0x80uLL )
    return (const void *)(v1 + 24);
  else
    return 0LL;
}
