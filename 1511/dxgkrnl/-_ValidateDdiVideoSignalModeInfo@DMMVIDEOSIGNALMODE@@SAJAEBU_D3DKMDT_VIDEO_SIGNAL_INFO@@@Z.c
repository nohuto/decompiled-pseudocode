/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00081F8
 * Callers:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000819C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00E11FC (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     sub_1C00E21C4 @ 0x1C00E21C4 (sub_1C00E21C4.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C000C4A0 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  D3DDDI_RATIONAL *p_VSyncFreq; // rsi
  D3DDDI_RATIONAL *p_HSyncFreq; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  p_VSyncFreq = &a1->VSyncFreq;
  if ( a1->VSyncFreq.Numerator != -2 || a1->VSyncFreq.Denominator != -2 )
  {
    if ( !a1->VSyncFreq.Denominator
      || p_VSyncFreq->Numerator < 5 * (unsigned __int64)a1->VSyncFreq.Denominator
      || (v11 = 500, v12 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(p_VSyncFreq, &v11)) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError();
      v10[3] = p_VSyncFreq->Numerator;
      v10[4] = a1->VSyncFreq.Denominator;
      v10[5] = a1;
      v10[6] = a1->ActiveSize.cx;
      v10[7] = a1->ActiveSize.cy;
      v6 = v10;
      goto LABEL_27;
    }
  }
  p_HSyncFreq = &a1->HSyncFreq;
  if ( a1->HSyncFreq.Numerator != -2 || a1->HSyncFreq.Denominator != -2 )
  {
    if ( !a1->HSyncFreq.Denominator
      || p_HSyncFreq->Numerator < 1000 * (unsigned __int64)a1->HSyncFreq.Denominator
      || (v11 = 1000000, v12 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(&a1->HSyncFreq, &v11)) )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdError();
      v5[3] = p_HSyncFreq->Numerator;
      v5[4] = a1->HSyncFreq.Denominator;
      v5[5] = a1->ActiveSize.cx;
      v5[6] = a1->ActiveSize.cy;
      v5[7] = DmmMapVSyncFromRationalToInteger(
                p_VSyncFreq,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
                0LL);
      goto LABEL_22;
    }
  }
  if ( a1->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError();
    v5[3] = a1->PixelRate;
    v5[4] = a1->ActiveSize.cx;
    v5[5] = a1->ActiveSize.cy;
    v5[6] = DmmMapVSyncFromRationalToInteger(
              p_VSyncFreq,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
              0LL);
LABEL_22:
    v6 = v5;
LABEL_27:
    WdLogEvent5_WdError(v6);
    return 3223192330LL;
  }
  if ( a1->ActiveSize.cx < 0x64 || a1->ActiveSize.cy < 0x64 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError();
    v9[3] = a1->ActiveSize.cx;
    v9[4] = a1->ActiveSize.cy;
    v9[5] = a1;
    WdLogEvent5_WdError(v9);
    return 3223192331LL;
  }
  else if ( a1->TotalSize.cx < 0x64 || a1->TotalSize.cy < 0x64 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError();
    v8[3] = a1->TotalSize.cx;
    v8[4] = a1->TotalSize.cy;
    v8[5] = a1;
    WdLogEvent5_WdError(v8);
    return 3223192332LL;
  }
  else if ( (unsigned int)(((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29) - 1) > 2 )
  {
    v7 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v7 + 24) = (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29;
    *(_QWORD *)(v7 + 32) = a1;
    WdLogEvent5_WdError(v7);
    return 3223192402LL;
  }
  else
  {
    return 0LL;
  }
}
