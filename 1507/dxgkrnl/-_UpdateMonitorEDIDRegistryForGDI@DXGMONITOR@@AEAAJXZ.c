/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00C82F0
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00C9B50 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(
        struct _DEVICE_OBJECT **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  struct _DEVICE_OBJECT *v6; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  if ( ((_BYTE)this[3] & 0x10) == 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  v5 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v6 = this[15];
    if ( v6 )
    {
      v5 = *(_QWORD *)&v6->Type;
      if ( *(_QWORD *)&v6->Type )
      {
        if ( (int)EDIDV1_IsEDIDBaseBlock((_QWORD *)(v5 + 24)) < 0 )
          v5 = 0LL;
      }
    }
  }
  v7 = this[5];
  DeviceRegKey = 0LL;
  v8 = IoOpenDeviceRegistryKey(v7, 1u, 0xF003Fu, &DeviceRegKey);
  v10 = v8;
  if ( v8 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v16 + 24) = v10;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v10;
  }
  else
  {
    if ( v5 )
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID");
      v11 = RtlWriteRegistryValue(
              0x40000000u,
              (PCWSTR)DeviceRegKey,
              L"EDID",
              3u,
              (PVOID)(v5 + 24),
              *(_DWORD *)(v5 + 16));
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"EDID");
      v11 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID", 3u, 0LL, 0);
    }
    v13 = v11;
    if ( v11 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v17 + 24) = v13;
      WdLogEvent5_WdError(v17);
    }
    ZwClose(DeviceRegKey);
    return (unsigned int)v13;
  }
}
