/*
 * XREFs of ?_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E06A8
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadHMDPresenceFromRegistry(DXGMONITOR *this, unsigned int *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-1Ch]
  int v21; // [rsp+58h] [rbp-18h]
  unsigned int v22; // [rsp+5Ch] [rbp-14h]

  *a2 = 0;
  DeviceRegKey = 0LL;
  if ( (*((_DWORD *)this + 6) & 0x10) == 0 )
    return 3221225635LL;
  v4 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 5), 2u, 0x20019u, &DeviceRegKey);
  v9 = v4;
  if ( v4 < 0 )
  {
    v13 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = v9;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
    v10 = ZwQueryValueKey(
            DeviceRegKey,
            &DestinationString,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v9 = v10;
    if ( v10 == -1073741772 )
      return 0LL;
    if ( v10 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = v9;
      WdLogEvent5_WdError(v14);
    }
    if ( v20 == 4 || v21 == 4 )
    {
      *a2 = v22;
    }
    else
    {
      LODWORD(v9) = -1073741788;
      v15 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = v20;
      WdLogEvent5_WdError(v15);
    }
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v9;
}
