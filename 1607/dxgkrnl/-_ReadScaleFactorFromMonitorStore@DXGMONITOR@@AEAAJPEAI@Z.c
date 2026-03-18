/*
 * XREFs of ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0F34
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00F1704 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadScaleFactorFromMonitorStore(DXGMONITOR *this, unsigned int *a2)
{
  int result; // eax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-24h]
  int v17; // [rsp+58h] [rbp-20h]
  unsigned int v18; // [rsp+5Ch] [rbp-1Ch]

  *a2 = 0;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    v5 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (_DWORD)v5 == -1073741772 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = this;
      return -1073741772;
    }
    if ( (int)v5 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v10 + 24) = this;
      *(_QWORD *)(v10 + 32) = v5;
      WdLogEvent5_WdError(v10);
LABEL_8:
      *a2 = v18;
      return 0;
    }
    if ( v16 == 4 && v17 == 4 )
      goto LABEL_8;
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = v16;
    WdLogEvent5_WdError(v11);
    return -1073741823;
  }
  return result;
}
