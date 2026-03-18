/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x1C0178530
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a3,
        unsigned __int8 *const a4)
{
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  char VideoStandard; // al

  v6 = this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6014);
  v7 = 0;
  if ( a3 )
  {
    LOBYTE(a3->VideoStandard) = 0;
    if ( v6 && a2 )
    {
      if ( *((_DWORD *)v6 + 3) == a2->ActiveSize.cx
        && *((_DWORD *)v6 + 4) == a2->ActiveSize.cy
        && *((_DWORD *)v6 + 5) == a2->VSyncFreq.Numerator
        && *((_DWORD *)v6 + 6) == a2->VSyncFreq.Denominator )
      {
        VideoStandard = a3->VideoStandard;
        LOBYTE(this) = (*(_BYTE *)&a2->AdditionalSignalInfo ^ *((_BYTE *)v6 + 48)) & 7;
        if ( !(_BYTE)this )
          VideoStandard = 1;
        LOBYTE(a3->VideoStandard) = VideoStandard;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v9 + 24) = 0LL;
      WdLogEvent5_WdError(v9);
      v7 = -1071774959;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    v7 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerExit, (__int64)a3, 6014);
  return v7;
}
