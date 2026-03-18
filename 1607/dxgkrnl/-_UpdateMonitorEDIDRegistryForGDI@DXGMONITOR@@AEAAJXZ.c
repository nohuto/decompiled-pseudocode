/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00EFE70
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F1C7C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(struct _DEVICE_OBJECT **this)
{
  __int64 v2; // rbx
  struct _DEVICE_OBJECT *v3; // rax
  struct _DEVICE_OBJECT *v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  if ( ((_BYTE)this[3] & 0x10) == 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v2 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v3 = this[15];
    if ( v3 )
    {
      v2 = *(_QWORD *)&v3->Type;
      if ( *(_QWORD *)&v3->Type )
      {
        if ( (int)EDIDV1_IsEDIDBaseBlock((_QWORD *)(v2 + 24)) < 0 )
          v2 = 0LL;
      }
    }
  }
  v4 = this[5];
  DeviceRegKey = 0LL;
  v5 = IoOpenDeviceRegistryKey(v4, 1u, 0xF003Fu, &DeviceRegKey);
  v7 = v5;
  if ( v5 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = v7;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v7;
  }
  else
  {
    if ( v2 )
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID");
      v8 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"EDID", 3u, (PVOID)(v2 + 24), *(_DWORD *)(v2 + 16));
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"EDID");
      v8 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID", 3u, 0LL, 0);
    }
    v10 = v8;
    if ( v8 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v14 + 24) = v10;
      WdLogEvent5_WdError(v14);
    }
    ZwClose(DeviceRegKey);
    return (unsigned int)v10;
  }
}
