/*
 * XREFs of ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C01B4368
 * Callers:
 *     MonitorGetEdidFromMonitor @ 0x1C01B04B0 (MonitorGetEdidFromMonitor.c)
 *     MonitorIsAudioSupportedInEdid @ 0x1C01B061C (MonitorIsAudioSupportedInEdid.c)
 * Callees:
 *     <none>
 */

const void *__fastcall DXGMONITOR::_GetEdidBlockPtr(DXGMONITOR *this, unsigned int a2)
{
  __int64 v2; // rax

  if ( !a2 )
    return DXGMONITOR::_GetEdidBaseBlockPtr(this);
  if ( a2 < *((_DWORD *)this + 28) )
  {
    if ( *((_QWORD *)this + 15) )
    {
      _mm_lfence();
      v2 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * a2);
      if ( *(_QWORD *)(v2 + 16) >= 0x80uLL )
        return (const void *)(v2 + 24);
    }
  }
  return 0LL;
}
