/*
 * XREFs of DpiMiracastHandlePowerCallback @ 0x1C016DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00B8F70 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall DpiMiracastHandlePowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  __int64 v5; // rax
  union _LARGE_INTEGER v7[2]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD v8[16]; // [rsp+40h] [rbp-98h] BYREF
  _DWORD v9[16]; // [rsp+80h] [rbp-58h] BYREF

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1 )
      v5 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_MONITOR_POWER_ON.Data4;
    if ( !v5 )
    {
      if ( *Value )
      {
        if ( byte_1C0046CD9 && KeCancelTimer(&Timer) )
        {
          _InterlockedIncrement(&dword_1C0047060);
          memset(v9, 0, sizeof(v9));
          DxgkDiagInitializeCodePointPacket(v9, 73, 2, 0, 0);
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
        }
        byte_1C0046CD9 = 0;
      }
      else
      {
        byte_1C0046CD9 = 1;
        if ( byte_1C0046CD8 && dword_1C0047030 )
        {
          v7[0].QuadPart = -300000000LL;
          KeSetTimer(&Timer, (LARGE_INTEGER)-300000000LL, &Dpc);
          memset(v8, 0, sizeof(v8));
          DxgkDiagInitializeCodePointPacket(v8, 73, 0, 0, 0);
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
        }
      }
    }
  }
  else if ( *Value )
  {
    v7[0].QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, v7, 0x89u);
  }
  return 0LL;
}
