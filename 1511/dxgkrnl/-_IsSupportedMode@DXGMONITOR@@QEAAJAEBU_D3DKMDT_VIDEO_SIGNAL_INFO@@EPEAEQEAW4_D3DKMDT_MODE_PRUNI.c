/*
 * XREFs of ?_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C009C794
 * Callers:
 *     MonitorIsSupportedMode @ 0x1C00A0120 (MonitorIsSupportedMode.c)
 * Callees:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C009C180 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
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
  __int64 v15; // rcx
  unsigned __int8 v16; // r15
  __int64 v17; // r12
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned __int8 *v26; // [rsp+20h] [rbp-48h]
  _BYTE v27[4]; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v29[12]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int8 v30; // [rsp+88h] [rbp+20h] BYREF

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
    v19 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdDmmEvent(v19);
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
    v26 = a4;
    LOBYTE(a4) = a3;
    return DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, v11, (__int64)a4, v26, v9);
  }
  if ( v11 != 3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v20);
  }
  LOBYTE(a4) = a3;
  result = DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, 2u, (__int64)a4, &v30, v29);
  if ( (int)result >= 0 )
  {
    LOBYTE(v14) = a3;
    result = DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, 1u, v14, v27, &v28);
    if ( (int)result >= 0 )
    {
      v16 = v27[0];
      v17 = v29[0];
      if ( v30 != v27[0] )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v15);
        v21[4] = v30;
        v21[6] = v16;
        v21[7] = v28;
        v21[3] = this;
        v21[5] = v17;
        WdLogEvent5_WdDmmEvent(v21);
        v23 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
        v23[3] = a2->ActiveSize.cx;
        v23[4] = a2->ActiveSize.cy;
        v23[5] = a2->VSyncFreq.Numerator;
        v23[6] = a2->VSyncFreq.Denominator;
        v23[7] = (int)(*(_DWORD *)&a2->AdditionalSignalInfo << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v23);
        v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
        v25[3] = a2->HSyncFreq.Numerator;
        v25[4] = a2->HSyncFreq.Denominator;
        v25[5] = a2->PixelRate;
        WdLogEvent5_WdDmmEvent(v25);
      }
      v18 = v16 == 0;
      if ( !v16 )
      {
        if ( !v30 )
          v12 = 0;
        v18 = 1;
      }
      if ( !v18 )
        LODWORD(v17) = v28;
      *v9 = v17;
      goto LABEL_16;
    }
  }
  return result;
}
