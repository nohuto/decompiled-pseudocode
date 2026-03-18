/*
 * XREFs of ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C9590
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00C95E8 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadVirtualModeSupportFromRegistry(DXGMONITOR *this)
{
  int result; // eax
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+54h] [rbp-24h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  v3 = 0;
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VMSDisabled");
    v4 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (int)v4 >= 0 )
    {
      if ( v12 == 4 && v13 == 4 )
      {
        LOBYTE(v3) = v14 != 0;
        *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (v3 << 7)) & 0x80;
        return 0;
      }
      else
      {
        v7 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v7 + 24) = this;
        *(_QWORD *)(v7 + 32) = -1073741823LL;
        WdLogEvent5_WdError(v7);
        return -1073741823;
      }
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v6 + 24) = this;
      *(_QWORD *)(v6 + 32) = v4;
      WdLogEvent5_WdError(v6);
      return v4;
    }
  }
  return result;
}
