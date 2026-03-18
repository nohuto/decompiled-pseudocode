/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C017D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6039);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  v7 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v7 )
  {
    v14 = *(_QWORD *)(v7 + 48);
    if ( a2 )
    {
      if ( !*(_QWORD *)(v14 + 8) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v16);
      }
      v13 = MonitorReleaseMonitorHandle(
              *(DXGADAPTER **)(*(_QWORD *)(v14 + 8) + 16LL),
              (struct HDXGMONITOR__ *)a2,
              (PVOID)0x4E506456,
              v9);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v15 + 24) = 0LL;
      WdLogEvent5_WdError(v15);
      v13 = -1071774943;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    v13 = -1071774973;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 6039);
  return v13;
}
