/*
 * XREFs of ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0E68
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadScaleFactorFromInf(DXGMONITOR *this, unsigned int *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-1Ch]
  int v24; // [rsp+58h] [rbp-18h]
  unsigned int v25; // [rsp+5Ch] [rbp-14h]

  *a2 = 0;
  DeviceRegKey = 0LL;
  if ( (*((_DWORD *)this + 6) & 0x10) == 0 )
    return 3221225635LL;
  v4 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 5), 2u, 0x20019u, &DeviceRegKey);
  v9 = v4;
  if ( v4 < 0 )
  {
    v16 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = v9;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    v10 = ZwQueryValueKey(
            DeviceRegKey,
            &DestinationString,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v9 = v10;
    if ( v10 == -1073741772 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = this;
      return (unsigned int)v9;
    }
    if ( v10 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = v9;
      WdLogEvent5_WdError(v17);
    }
    if ( v23 == 4 || v24 == 4 )
    {
      *a2 = v25;
    }
    else
    {
      LODWORD(v9) = -1073741788;
      v18 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = v23;
      WdLogEvent5_WdError(v18);
    }
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v9;
}
