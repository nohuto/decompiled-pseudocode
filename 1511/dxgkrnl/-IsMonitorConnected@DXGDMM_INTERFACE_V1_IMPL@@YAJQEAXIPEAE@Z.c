/*
 * XREFs of ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C00E9F40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     MonitorIsMonitorConnected @ 0x1C00ABCE0 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsMonitorConnected(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        _BYTE *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int IsMonitorConnected; // ebx
  __int64 v13; // rax
  __int64 v14; // rax

  v5 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6057);
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdError(v13);
    IsMonitorConnected = -1073741811;
    goto LABEL_9;
  }
  *a3 = 0;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v14);
    }
    if ( *((_QWORD *)this + 248) )
    {
      IsMonitorConnected = MonitorIsMonitorConnected(this, v5, 0LL, a3);
      goto LABEL_9;
    }
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = this;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v8);
  IsMonitorConnected = -1071775742;
LABEL_9:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6057);
  return IsMonitorConnected;
}
