/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C91D4
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00C9B50 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CA2D8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00C932C (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00CA6A8 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00CA76C (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(
        struct _DEVICE_OBJECT **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  ULONG v10; // esi
  char i; // r14
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  HANDLE Handle; // [rsp+20h] [rbp-40h] BYREF
  void *DeviceRegKey; // [rsp+28h] [rbp-38h] BYREF
  struct _KEY_BASIC_INFORMATION *v20; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+50h] [rbp-10h]

  if ( ((_BYTE)this[3] & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !this[5] )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = this[5];
  v23 = *(_DWORD *)L"S";
  v21.Buffer = (wchar_t *)&v22;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  v22 = *(_QWORD *)L"MODES";
  *(_DWORD *)&v21.Length = 786442;
  v6 = IoOpenDeviceRegistryKey(v5, 2u, 0xF003Fu, &DeviceRegKey);
  v8 = v6;
  if ( v6 < 0 || (v9 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, DeviceRegKey, &v21), v8 = v9, v9 < 0) )
  {
    v17 = WdLogNewEntry5_WdDmmEvent(v7);
    *(_QWORD *)(v17 + 24) = v8;
    WdLogEvent5_WdDmmEvent(v17);
  }
  else
  {
    v10 = 0;
    for ( i = 0; ; i = 1 )
    {
      v20 = 0LL;
      v12 = DxgkRetrieveSubkeyInfoFromRegistry(Handle, v10++, &v20);
      LODWORD(v8) = v12;
      if ( v12 < 0 )
        break;
      LODWORD(v8) = DXGMONITOR::_ProcessMonitorResolutionKey((DXGMONITOR *)this, Handle, v20);
      operator delete(v20);
      if ( (int)v8 < 0 )
        break;
    }
    if ( i )
      LODWORD(v8) = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v8;
}
