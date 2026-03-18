/*
 * XREFs of GetWindowNCMetrics @ 0x1C007396C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetWindowFrameMetric @ 0x1C00CC204 (GetWindowFrameMetric.c)
 *     GetResizeBorderWidth @ 0x1C0101F40 (GetResizeBorderWidth.c)
 */

__int64 __fastcall GetWindowNCMetrics(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  __int64 DPIServerInfo; // rax
  __int64 DPIMetrics; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx

  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
  {
    if ( !IsDPIDWMSysMet(v2)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_4;
    }
LABEL_29:
    v4 = (_DWORD *)(gpsi + 2392LL);
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x4000) == 0 )
  {
    goto LABEL_29;
  }
LABEL_4:
  v4 = (_DWORD *)(gpsi + 2004LL);
LABEL_5:
  *(_DWORD *)(a1 + 20) = *v4;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
  {
    v6 = (_DWORD *)(gpsi + 2100LL);
  }
  else
  {
    v6 = (_DWORD *)(gpsi + 2488LL);
  }
  *(_DWORD *)(a1 + 220) = *v6;
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidth();
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0 )
  {
    v9 = (_DWORD *)(gpsi + 1888LL);
  }
  else
  {
    v9 = (_DWORD *)(gpsi + 2276LL);
  }
  *(_DWORD *)(a1 + 8) = *v9;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
  {
    v11 = (_DWORD *)(gpsi + 1960LL);
  }
  else
  {
    v11 = (_DWORD *)(gpsi + 2348LL);
  }
  *(_DWORD *)(a1 + 12) = *v11;
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
  {
    if ( !IsDPIDWMSysMet(v12)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
    {
      goto LABEL_17;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_17;
    }
LABEL_33:
    v14 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
  {
    goto LABEL_33;
  }
LABEL_17:
  v14 = (_DWORD *)(gpsi + 2000LL);
LABEL_18:
  *(_DWORD *)(a1 + 16) = *v14;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
  {
    v16 = (_DWORD *)(gpsi + 2088LL);
  }
  else
  {
    v16 = (_DWORD *)(gpsi + 2476LL);
  }
  *(_DWORD *)(a1 + 116) = *v16;
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x35uLL) )
  {
    if ( !IsDPIDWMSysMet(v17)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
    {
      goto LABEL_24;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_24;
    }
LABEL_35:
    v19 = (_DWORD *)(gpsi + 2480LL);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) == 0 )
  {
    goto LABEL_35;
  }
LABEL_24:
  v19 = (_DWORD *)(gpsi + 2092LL);
LABEL_25:
  *(_DWORD *)(a1 + 120) = *v19;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0 )
  {
    v21 = (_DWORD *)(gpsi + 2096LL);
  }
  else
  {
    v21 = (_DWORD *)(gpsi + 2484LL);
  }
  *(_DWORD *)(a1 + 216) = *v21;
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetric();
  DPIServerInfo = GetDPIServerInfo();
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (unsigned __int16 *)(a1 + 24));
  DPIMetrics = GetDPIMetrics();
  GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 40), 92LL, (unsigned __int16 *)(a1 + 124));
  v24 = GetDPIMetrics();
  GreExtGetObjectW(*(HBRUSH *)(v24 + 8), 92LL, (unsigned __int16 *)(a1 + 224));
  v25 = GetDPIMetrics();
  GreExtGetObjectW(*(HBRUSH *)(v25 + 24), 92LL, (unsigned __int16 *)(a1 + 316));
  v26 = GetDPIServerInfo();
  return GreExtGetObjectW(*(HBRUSH *)(v26 + 16), 92LL, (unsigned __int16 *)(a1 + 408));
}
