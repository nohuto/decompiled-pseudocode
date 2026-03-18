/*
 * XREFs of ?_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x1C0181E10
 * Callers:
 *     MonitorSerializeMonitorPresentEvents @ 0x1C0182AD4 (MonitorSerializeMonitorPresentEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_SerializeMonitorPresentEvent(
        MONITOR_MGR *this,
        unsigned __int64 *a2,
        struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned __int64 v11; // rax
  _OWORD *v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // rax

  v4 = 0;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_DWORD *)this + 70);
  v10 = 20;
  if ( v9 > 0x14 || (v10 = *((_DWORD *)this + 70), v9) )
    v11 = 24LL * (v10 - 1) + 32;
  else
    v11 = 32LL;
  if ( v11 <= *a2 && a3 )
  {
    *(_BYTE *)a3 = v10;
    if ( v10 )
    {
      v12 = (_OWORD *)((char *)a3 + 8);
      do
      {
        v13 = v4 + *((_DWORD *)this + 70) - v10;
        ++v4;
        v14 = v13 % 0x14 + 12LL;
        *v12 = *(_OWORD *)((char *)this + 24 * v14);
        v12 = (_OWORD *)((char *)v12 + 24);
        *((_QWORD *)v12 - 1) = *((_QWORD *)this + 3 * v14 + 2);
      }
      while ( v4 < v10 );
    }
    return 0LL;
  }
  else
  {
    *a2 = v11;
    return 3221225507LL;
  }
}
