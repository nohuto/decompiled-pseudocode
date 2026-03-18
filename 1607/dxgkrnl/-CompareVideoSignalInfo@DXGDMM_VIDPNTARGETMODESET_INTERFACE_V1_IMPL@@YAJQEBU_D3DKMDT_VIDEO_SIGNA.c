/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x1C01A5F20
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        __int64 this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a3,
        unsigned __int8 *const a4)
{
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  char VideoStandard; // al
  bool v12; // zf

  v6 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)this;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, (__int64)a3, 6014);
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
        this = (unsigned int)a2->ScanLineOrdering;
        v10 = *((_DWORD *)v6 + 12);
        if ( (((unsigned __int8)v10 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0 )
        {
          VideoStandard = a3->VideoStandard;
          v12 = (((unsigned __int16)v10 ^ (unsigned __int16)this) & 0x1F8) == 0;
          this = 1LL;
          if ( v12 )
            VideoStandard = 1;
          LOBYTE(a3->VideoStandard) = VideoStandard;
        }
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
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerExit, (__int64)a3, 6014);
  return v7;
}
