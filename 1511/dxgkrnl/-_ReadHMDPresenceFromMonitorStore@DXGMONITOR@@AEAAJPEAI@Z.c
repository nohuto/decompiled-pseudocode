/*
 * XREFs of ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E064C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00E1010 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadHMDPresenceFromMonitorStore(DXGMONITOR *this, unsigned int *a2)
{
  int result; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-24h]
  int v14; // [rsp+58h] [rbp-20h]
  unsigned int v15; // [rsp+5Ch] [rbp-1Ch]

  *a2 = 0;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
    v5 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (_DWORD)v5 == -1073741772 )
      return 0;
    if ( (int)v5 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = v5;
      WdLogEvent5_WdError(v7);
LABEL_5:
      *a2 = v15;
      return 0;
    }
    if ( v13 == 4 && v14 == 4 )
      goto LABEL_5;
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = v13;
    WdLogEvent5_WdError(v8);
    return -1073741823;
  }
  return result;
}
