/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0BFC
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00E15E8 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00E0D54 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E23E4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00E2468 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(struct _DEVICE_OBJECT **this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  ULONG v7; // esi
  char i; // r14
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  HANDLE Handle; // [rsp+20h] [rbp-40h] BYREF
  void *DeviceRegKey; // [rsp+28h] [rbp-38h] BYREF
  struct _KEY_BASIC_INFORMATION *v17; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp-10h]

  if ( ((_BYTE)this[3] & 1) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !this[5] )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  v2 = this[5];
  v20 = *(_DWORD *)L"S";
  v18.Buffer = (wchar_t *)&v19;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  v19 = *(_QWORD *)L"MODES";
  *(_DWORD *)&v18.Length = 786442;
  v3 = IoOpenDeviceRegistryKey(v2, 2u, 0xF003Fu, &DeviceRegKey);
  v5 = v3;
  if ( v3 < 0 || (v6 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, DeviceRegKey, &v18), v5 = v6, v6 < 0) )
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v4);
    *(_QWORD *)(v14 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v14);
  }
  else
  {
    v7 = 0;
    for ( i = 0; ; i = 1 )
    {
      v17 = 0LL;
      v9 = DxgkRetrieveSubkeyInfoFromRegistry(Handle, v7++, &v17);
      LODWORD(v5) = v9;
      if ( v9 < 0 )
        break;
      LODWORD(v5) = DXGMONITOR::_ProcessMonitorResolutionKey((DXGMONITOR *)this, Handle, v17);
      operator delete(v17);
      if ( (int)v5 < 0 )
        break;
    }
    if ( i )
      LODWORD(v5) = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v5;
}
