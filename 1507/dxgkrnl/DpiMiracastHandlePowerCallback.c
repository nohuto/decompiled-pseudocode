/*
 * XREFs of DpiMiracastHandlePowerCallback @ 0x1C0169570
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00BE440 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall DpiMiracastHandlePowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  union _LARGE_INTEGER v13[2]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD v14[16]; // [rsp+40h] [rbp-98h] BYREF
  _DWORD v15[16]; // [rsp+80h] [rbp-58h] BYREF

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
        if ( byte_1C0046C59 && KeCancelTimer(&Timer) )
        {
          _InterlockedIncrement(&dword_1C0046FE0);
          memset(v15, 0, sizeof(v15));
          DxgkDiagInitializeCodePointPacket(v15, 73, 2, 0, 0);
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, v9, v10, v11);
        }
        byte_1C0046C59 = 0;
      }
      else
      {
        byte_1C0046C59 = 1;
        if ( byte_1C0046C58 && dword_1C0046FB0 )
        {
          v13[0].QuadPart = -300000000LL;
          KeSetTimer(&Timer, (LARGE_INTEGER)-300000000LL, &Dpc);
          memset(v14, 0, sizeof(v14));
          DxgkDiagInitializeCodePointPacket(v14, 73, 0, 0, 0);
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, v6, v7, v8);
        }
      }
    }
  }
  else if ( *Value )
  {
    v13[0].QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, v13, 0x89u);
  }
  return 0LL;
}
