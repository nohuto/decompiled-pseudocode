/*
 * XREFs of ?_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007AE78
 * Callers:
 *     MonitorIsSupportedMode @ 0x1C007CC14 (MonitorIsSupportedMode.c)
 * Callees:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007ACC0 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DXGMONITOR::_IsSupportedMode(
        DXGMONITOR *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        char a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a5)
{
  unsigned __int8 *v5; // r14
  enum _D3DKMDT_MODE_PRUNING_REASON *v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // r8d
  char v12; // bl
  __int64 result; // rax
  __int64 v14; // r9
  unsigned __int8 v15; // r15
  __int64 v16; // r12
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned __int8 *v23; // [rsp+20h] [rbp-48h]
  _BYTE v24[4]; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v26[12]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int8 v27; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  if ( !a4 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 )
    return 3221225485LL;
  v10 = *((unsigned int *)this + 8);
  *a5 = D3DKMDT_MPR_UNINITIALIZED;
  *a4 = 0;
  if ( ((unsigned int)(v10 - 1) <= 2 || (_DWORD)v10 == 14) && (*((_DWORD *)this + 6) & 8) != 0 )
  {
    v18 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdDmmEvent(v18);
    v12 = 1;
    *v9 = D3DKMDT_MPR_ALLCAPS;
LABEL_16:
    *v5 = v12;
    return 0LL;
  }
  v11 = *((_DWORD *)this + 26);
  v12 = 1;
  if ( v11 - 1 <= 1 )
  {
    v23 = a4;
    LOBYTE(a4) = a3;
    return DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, v11, (__int64)a4, v23, v9);
  }
  if ( v11 != 3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v19);
  }
  LOBYTE(a4) = a3;
  result = DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, 2u, (__int64)a4, &v27, v26);
  if ( (int)result >= 0 )
  {
    LOBYTE(v14) = a3;
    result = DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, 1u, v14, v24, &v25);
    if ( (int)result >= 0 )
    {
      v15 = v24[0];
      v16 = v26[0];
      if ( v27 != v24[0] )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v20[4] = v27;
        v20[6] = v15;
        v20[7] = v25;
        v20[3] = this;
        v20[5] = v16;
        WdLogEvent5_WdDmmEvent(v20);
        v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v21[3] = a2->ActiveSize.cx;
        v21[4] = a2->ActiveSize.cy;
        v21[5] = a2->VSyncFreq.Numerator;
        v21[6] = a2->VSyncFreq.Denominator;
        v21[7] = (int)(*(_DWORD *)&a2->AdditionalSignalInfo << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v21);
        v22 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v22[3] = a2->HSyncFreq.Numerator;
        v22[4] = a2->HSyncFreq.Denominator;
        v22[5] = a2->PixelRate;
        WdLogEvent5_WdDmmEvent(v22);
      }
      v17 = v15 == 0;
      if ( !v15 )
      {
        if ( !v27 )
          v12 = 0;
        v17 = 1;
      }
      if ( !v17 )
        LODWORD(v16) = v25;
      *v9 = v16;
      goto LABEL_16;
    }
  }
  return result;
}
