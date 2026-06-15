/*
 * XREFs of ServiceDeviceEvent @ 0x18009DD20
 * Callers:
 *     ServiceDeviceEventCallback @ 0x18009DEC0 (ServiceDeviceEventCallback.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x18009D5A0 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009DAF4 (-OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009DB50 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009DBF0 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     Template_qzq @ 0x18009DFBC (Template_qzq.c)
 *     WPP_SF_DPS @ 0x18009E064 (WPP_SF_DPS.c)
 *     WPP_SF_PS @ 0x18009E12C (WPP_SF_PS.c)
 */

__int64 __fastcall ServiceDeviceEvent(unsigned int a1, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r10
  const unsigned __int16 *v5; // rax
  __int64 v6; // r10
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rax
  DWORD dbcc_devicetype; // r9d
  int v13; // eax
  int v14; // ebx
  const unsigned __int16 *v15; // rax
  __int64 v16; // r8
  int v17; // edx
  unsigned int v18; // eax
  int v19; // ecx

  v3 = a1;
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v5 = EventTypeNameFromEventType(a1);
    WPP_SF_PS(*(_QWORD *)(v6 + 16), v7, v8, v9, (__int64)v5);
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v10 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( v10 )
  {
    v11 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
    if ( v11 )
      return 0LL;
  }
  dbcc_devicetype = a2->dbcc_devicetype;
  if ( dbcc_devicetype != 5 )
  {
    if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_BYTE *)(v4 + 28) & 0x20) != 0 && *(_BYTE *)(v4 + 25) >= 4u )
      WPP_SF_D(*(_QWORD *)(v4 + 16), 0x17u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids, dbcc_devicetype);
    return 120LL;
  }
  switch ( (_DWORD)v3 )
  {
    case 0x8000:
      v13 = OnAudioDeviceArrival(a2);
LABEL_19:
      v14 = v13;
      if ( v13 < 0 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          v15 = EventTypeNameFromEventType(v3);
          WPP_SF_DPS(*(_QWORD *)(v16 + 16), v17, v16, v14, v3, (__int64)v15);
        }
        if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
        {
          v18 = (unsigned int)EventTypeNameFromEventType(v3);
          Template_qzq(v19, (unsigned int)&EVT_AUDIOSRV_FAIL_SERVICE_DEVICE_EVENT, v3, v18, v14);
        }
      }
      return 0LL;
    case 0x8001:
      v13 = PostDeviceEvent(2, &a2->dbcc_size);
      goto LABEL_19;
    case 0x8002:
      return 0LL;
  }
  if ( (unsigned int)(v3 - 32771) <= 1 )
  {
    v13 = OnAudioDeviceRemoval(a2);
    goto LABEL_19;
  }
  return 120LL;
}
