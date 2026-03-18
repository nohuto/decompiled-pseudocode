/*
 * XREFs of GetWindowNCMetrics @ 0x1C0011420
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     GetResizeBorderWidth @ 0x1C000E7E4 (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C000E7FC (GetWindowFrameMetric.c)
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GetWindowNCMetrics(_DWORD *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  __int64 DPIServerInfo; // rax
  __int64 DPIMetrics; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !(unsigned int)IsDPIAbsoluteSysMet(31LL) )
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v2)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1) )
    {
      goto LABEL_4;
    }
LABEL_29:
    v3 = (_DWORD *)(gpsi + 2392LL);
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
  {
    goto LABEL_29;
  }
LABEL_4:
  v3 = (_DWORD *)(gpsi + 2004LL);
LABEL_5:
  a1[5] = *v3;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
  {
    v4 = (_DWORD *)(gpsi + 2100LL);
  }
  else
  {
    v4 = (_DWORD *)(gpsi + 2488LL);
  }
  a1[55] = *v4;
  a1[1] = GetResizeBorderWidth();
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
  {
    v5 = (_DWORD *)(gpsi + 1888LL);
  }
  else
  {
    v5 = (_DWORD *)(gpsi + 2276LL);
  }
  a1[2] = *v5;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
  {
    v6 = (_DWORD *)(gpsi + 1960LL);
  }
  else
  {
    v6 = (_DWORD *)(gpsi + 2348LL);
  }
  a1[3] = *v6;
  if ( !(unsigned int)IsDPIAbsoluteSysMet(30LL) )
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v7)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
    {
      goto LABEL_17;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1) )
    {
      goto LABEL_17;
    }
LABEL_33:
    v8 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
  {
    goto LABEL_33;
  }
LABEL_17:
  v8 = (_DWORD *)(gpsi + 2000LL);
LABEL_18:
  a1[4] = *v8;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
  {
    v9 = (_DWORD *)(gpsi + 2088LL);
  }
  else
  {
    v9 = (_DWORD *)(gpsi + 2476LL);
  }
  a1[29] = *v9;
  if ( !(unsigned int)IsDPIAbsoluteSysMet(53LL) )
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v10)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
    {
      goto LABEL_24;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1) )
    {
      goto LABEL_24;
    }
LABEL_35:
    v11 = (_DWORD *)(gpsi + 2480LL);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
  {
    goto LABEL_35;
  }
LABEL_24:
  v11 = (_DWORD *)(gpsi + 2092LL);
LABEL_25:
  a1[30] = *v11;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
  {
    v12 = (_DWORD *)(gpsi + 2096LL);
  }
  else
  {
    v12 = (_DWORD *)(gpsi + 2484LL);
  }
  a1[54] = *v12;
  a1[125] = GetWindowFrameMetric();
  DPIServerInfo = GetDPIServerInfo();
  GreExtGetObjectW(*(HSURF *)(DPIServerInfo + 8));
  DPIMetrics = GetDPIMetrics();
  GreExtGetObjectW(*(HSURF *)(DPIMetrics + 40));
  v15 = GetDPIMetrics();
  GreExtGetObjectW(*(HSURF *)(v15 + 8));
  v16 = GetDPIMetrics();
  GreExtGetObjectW(*(HSURF *)(v16 + 24));
  v17 = GetDPIServerInfo();
  return GreExtGetObjectW(*(HSURF *)(v17 + 16));
}
