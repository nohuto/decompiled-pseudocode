/*
 * XREFs of GetWindowNCMetrics @ 0x1C0067650
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GetResizeBorderWidth @ 0x1C00678DC (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C0067910 (GetWindowFrameMetric.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetWindowNCMetrics(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  __int64 DPIServerInfo; // rax
  __int64 DPIMetrics; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r9
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // r9

  if ( (unsigned int)IsDPIAbsoluteSysMet(31LL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v3, v2, v4) & 0xF) != 0 )
    {
LABEL_3:
      v7 = (_DWORD *)(gpsi + 2004LL);
      goto LABEL_4;
    }
  }
  else
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v3) || (W32GetCurrentThreadDpiAwarenessContext(v36, v5, v6) & 0xF) != 0 )
      goto LABEL_3;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v37) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v38) + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_3;
    }
  }
  v7 = (_DWORD *)(gpsi + 2392LL);
LABEL_4:
  *(_DWORD *)(a1 + 20) = *v7;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v5, v6) & 0xF) != 0 )
    v8 = (_DWORD *)(gpsi + 2100LL);
  else
    v8 = (_DWORD *)(gpsi + 2488LL);
  *(_DWORD *)(a1 + 220) = *v8;
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidth();
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11) & 0xF) != 0 )
    v14 = (_DWORD *)(gpsi + 1888LL);
  else
    v14 = (_DWORD *)(gpsi + 2276LL);
  *(_DWORD *)(a1 + 8) = *v14;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v12, v13) & 0xF) != 0 )
    v15 = (_DWORD *)(gpsi + 1960LL);
  else
    v15 = (_DWORD *)(gpsi + 2348LL);
  *(_DWORD *)(a1 + 12) = *v15;
  if ( (unsigned int)IsDPIAbsoluteSysMet(30LL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18) & 0xF) != 0 )
    {
LABEL_12:
      v21 = (_DWORD *)(gpsi + 2000LL);
      goto LABEL_13;
    }
  }
  else
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v17) || (W32GetCurrentThreadDpiAwarenessContext(v40, v19, v20) & 0xF) != 0 )
      goto LABEL_12;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v41) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v42)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_12;
    }
  }
  v21 = (_DWORD *)(gpsi + 2388LL);
LABEL_13:
  *(_DWORD *)(a1 + 16) = *v21;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v19, v20) & 0xF) != 0 )
    v22 = (_DWORD *)(gpsi + 2088LL);
  else
    v22 = (_DWORD *)(gpsi + 2476LL);
  *(_DWORD *)(a1 + 116) = *v22;
  if ( (unsigned int)IsDPIAbsoluteSysMet(53LL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25) & 0xF) != 0 )
    {
LABEL_17:
      v28 = (_DWORD *)(gpsi + 2092LL);
      goto LABEL_18;
    }
  }
  else
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v24) || (W32GetCurrentThreadDpiAwarenessContext(v44, v26, v27) & 0xF) != 0 )
      goto LABEL_17;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v45) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v46)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_17;
    }
  }
  v28 = (_DWORD *)(gpsi + 2480LL);
LABEL_18:
  *(_DWORD *)(a1 + 120) = *v28;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v26, v27) & 0xF) != 0 )
    v29 = (_DWORD *)(gpsi + 2096LL);
  else
    v29 = (_DWORD *)(gpsi + 2484LL);
  *(_DWORD *)(a1 + 216) = *v29;
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetric();
  DPIServerInfo = GetDPIServerInfo();
  GreExtGetObjectW(*(struct HLFONT__ **)(DPIServerInfo + 8), 92, (unsigned __int16 *)(a1 + 24));
  DPIMetrics = GetDPIMetrics();
  GreExtGetObjectW(*(struct HLFONT__ **)(DPIMetrics + 40), 92, (unsigned __int16 *)(a1 + 124));
  v32 = GetDPIMetrics();
  GreExtGetObjectW(*(struct HLFONT__ **)(v32 + 8), 92, (unsigned __int16 *)(a1 + 224));
  v33 = GetDPIMetrics();
  GreExtGetObjectW(*(struct HLFONT__ **)(v33 + 24), 92, (unsigned __int16 *)(a1 + 316));
  v34 = GetDPIServerInfo();
  return GreExtGetObjectW(*(struct HLFONT__ **)(v34 + 16), 92, (unsigned __int16 *)(a1 + 408));
}
