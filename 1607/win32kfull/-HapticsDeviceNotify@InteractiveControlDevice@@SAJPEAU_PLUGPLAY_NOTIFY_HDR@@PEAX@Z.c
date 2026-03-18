/*
 * XREFs of ?HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C023D2B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z @ 0x1C023C9DC (-CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z.c)
 *     ?OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C023D848 (-OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlDevice::HapticsDeviceNotify(
        char *NotificationStructure,
        InteractiveControlDevice *Context)
{
  int v2; // edi
  __int64 v3; // rax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v10; // rax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v16; // [rsp+30h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+27h] BYREF
  int *v19; // [rsp+70h] [rbp+37h]
  int v20; // [rsp+78h] [rbp+3Fh]
  int v21; // [rsp+7Ch] [rbp+43h]

  v2 = 0;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v3 )
  {
    v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v7 )
      v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v7 )
    {
      v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( !v10 )
      {
        if ( (unsigned int)hProvider > 4 )
        {
          TlgCreateSz(&pDesc, "InteractiveControlDevice::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE");
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF785, v11, v12, 3u, &pData);
        }
        v2 = InteractiveControlDevice::CloseHapticsWriteDevice(Context, 1);
        if ( v2 < 0 && (unsigned int)hProvider > 2 )
          goto LABEL_24;
      }
    }
    else
    {
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateSz(&pDesc, "InteractiveControlDevice::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED");
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF785, v8, v9, 3u, &pData);
      }
      v2 = InteractiveControlDevice::OpenHapticsWriteDevice(Context);
      if ( v2 < 0 && (unsigned int)hProvider > 2 )
        goto LABEL_24;
    }
  }
  else
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateSz(&pDesc, "InteractiveControlDevice::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE");
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF785, v5, v6, 3u, &pData);
    }
    v2 = InteractiveControlDevice::CloseHapticsWriteDevice(Context, 0);
    if ( v2 < 0 && (unsigned int)hProvider > 2 )
    {
LABEL_24:
      TlgCreateSz(&pDesc, "Function failed.");
      v21 = 0;
      v19 = &v16;
      v16 = v2;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v13, v14, 4u, &pData);
    }
  }
  return (unsigned int)v2;
}
