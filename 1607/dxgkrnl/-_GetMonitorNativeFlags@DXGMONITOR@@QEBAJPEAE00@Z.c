/*
 * XREFs of ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C000F90C
 * Callers:
 *     MonitorGetNativeFlags @ 0x1C00EF0CC (MonitorGetNativeFlags.c)
 * Callees:
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C007ACA0 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorNativeFlags(DXGMONITOR *this, unsigned __int8 *a2, bool *a3, bool *a4)
{
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v8 = *((_DWORD *)this + 6);
  *a3 = (v8 & 0x200) != 0;
  *a2 = BYTE1(v8) & 1;
  *a4 = DXGMONITOR::_GetEdidBaseBlockPtr(this) == 0LL;
  return 0LL;
}
