/*
 * XREFs of ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C00F122C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C00F12D0 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

void __fastcall DXGMONITOR::_PrepareDefaultMonitorConfiguration(DXGMONITOR *this)
{
  int v1; // eax
  int v3; // ecx
  unsigned int *v4; // rsi
  int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // [rsp+38h] [rbp-79h] BYREF
  int v10; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v11; // [rsp+48h] [rbp-69h] BYREF
  int v12; // [rsp+50h] [rbp-61h]
  const wchar_t *v13; // [rsp+58h] [rbp-59h]
  char *v14; // [rsp+60h] [rbp-51h]
  int v15; // [rsp+68h] [rbp-49h]
  unsigned int *v16; // [rsp+70h] [rbp-41h]
  int v17; // [rsp+78h] [rbp-39h]
  __int64 v18; // [rsp+80h] [rbp-31h]
  int v19; // [rsp+88h] [rbp-29h]
  const wchar_t *v20; // [rsp+90h] [rbp-21h]
  char *v21; // [rsp+98h] [rbp-19h]
  int v22; // [rsp+A0h] [rbp-11h]
  int *v23; // [rsp+A8h] [rbp-9h]
  int v24; // [rsp+B0h] [rbp-1h]
  __int64 v25; // [rsp+B8h] [rbp+7h]
  int v26; // [rsp+C0h] [rbp+Fh]
  _BYTE v27[40]; // [rsp+C8h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 6);
  v9 = 0;
  v3 = *((_DWORD *)this + 8);
  v10 = (v1 & 0x100) != 0 ? 3 : 0;
  if ( IsInternalVideoOutput(v3) )
  {
    v11 = 0LL;
    v18 = 0LL;
    v4 = (unsigned int *)((char *)this + 392);
    v25 = 0LL;
    v5 = (int *)((char *)this + 400);
    v26 = 0;
    v13 = L"MonitorOrientation";
    v12 = 292;
    v19 = 292;
    v16 = &v9;
    v15 = 67108868;
    v20 = L"DockedOrientation";
    v17 = 4;
    v22 = 67108868;
    v24 = 4;
    v23 = &v10;
    v14 = (char *)this + 392;
    v21 = (char *)this + 400;
    memset(v27, 0, sizeof(v27));
    if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v11, 0LL, 0LL) < 0 )
    {
      *v4 = v9;
      *v5 = v10;
    }
    if ( !DXGMONITOR::_ValidateMonitorOrientation(this, *v4) )
    {
      v7 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v7 + 24) = *v4;
      WdLogEvent5_WdError(v7);
      *v4 = v9;
    }
    if ( (unsigned int)*v5 > 3 )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = (unsigned int)*v5;
      WdLogEvent5_WdError(v8);
      *v5 = v10;
    }
  }
  *((_DWORD *)this + 99) = *((_DWORD *)this + 98);
  *((_DWORD *)this + 101) = *((_DWORD *)this + 100);
}
