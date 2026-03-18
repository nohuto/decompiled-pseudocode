/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007D1B8
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00BE7E4 (BmlDoesTargetModeObeyConstraint.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00D32D0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     MonitorIsSupportedMode @ 0x1C007CC14 (MonitorIsSupportedMode.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  char v6; // bp
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // rsi
  struct HDXGMONITOR__ *v11; // rdi
  int IsSupportedMode; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int8 v22; // [rsp+60h] [rbp+8h] BYREF
  enum _D3DKMDT_MODE_PRUNING_REASON v23; // [rsp+70h] [rbp+18h] BYREF

  v6 = a2;
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a4 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  v8 = *((_QWORD *)this + 5) == 0LL;
  *a3 = 0;
  if ( v8 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = *((_QWORD *)this + 5);
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = this;
LABEL_14:
    WdLogEvent5_WdError(v19);
    return 3223192337LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = v9;
    goto LABEL_14;
  }
  v11 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(v10 + 96) + 96LL);
  if ( v11 )
  {
    v23 = D3DKMDT_MPR_UNINITIALIZED;
    v22 = 0;
    IsSupportedMode = MonitorIsSupportedMode(
                        v11,
                        (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)this + 72),
                        v6,
                        &v22,
                        &v23);
    v14 = IsSupportedMode;
    if ( IsSupportedMode < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v21[3] = this;
      v21[4] = v11;
      v21[5] = v14;
      WdLogEvent5_WdError(v21);
      return (unsigned int)v14;
    }
    else
    {
      *a3 = v22;
      *a4 = v23;
      return 0LL;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = *(unsigned int *)(v10 + 24);
    *(_QWORD *)(v20 + 32) = this;
    WdLogEvent5_WdWarning(v20);
    return 3223192376LL;
  }
}
