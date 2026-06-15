/*
 * XREFs of ServiceDeviceEvent @ 0x18009AB90
 * Callers:
 *     ServiceDeviceEventCallback @ 0x18009AD30 (ServiceDeviceEventCallback.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x18009A410 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009A964 (-OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009A9C0 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18009AA60 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     Template_qzq @ 0x18009AE2C (Template_qzq.c)
 *     WPP_SF_DPS @ 0x18009AED4 (WPP_SF_DPS.c)
 *     WPP_SF_PS @ 0x18009AF9C (WPP_SF_PS.c)
 */

__int64 __fastcall ServiceDeviceEvent(unsigned int a1, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  unsigned __int64 v3; // rdi
  TraceLoggingHProvider v4; // r10
  const unsigned __int16 *v5; // rax
  __int64 v6; // r10
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  DWORD dbcc_devicetype; // r9d
  int v12; // eax
  int v13; // ebx
  const unsigned __int16 *v14; // rax
  __int64 v15; // r8
  int v16; // edx
  unsigned int v17; // eax
  int v18; // ecx

  v3 = a1;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = EventTypeNameFromEventType(a1);
    WPP_SF_PS(*(_QWORD *)(v6 + 16), v7, v8, v9, (__int64)v5);
    v4 = WPP_GLOBAL_Control;
  }
  if ( (*(_QWORD *)&a2->dbcc_classguid.Data1 != *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1
     || *(_QWORD *)a2->dbcc_classguid.Data4 != *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4)
    && (*(_QWORD *)&a2->dbcc_classguid.Data1 != *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1
     || *(_QWORD *)a2->dbcc_classguid.Data4 != *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4) )
  {
    return 0LL;
  }
  dbcc_devicetype = a2->dbcc_devicetype;
  if ( dbcc_devicetype != 5 )
  {
    if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v4 + 28) & 0x20) != 0
      && *((_BYTE *)v4 + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)v4 + 2), 0x17u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids, dbcc_devicetype);
    }
    return 120LL;
  }
  if ( (_DWORD)v3 == 0x8000 )
  {
    v12 = OnAudioDeviceArrival(a2);
LABEL_18:
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v14 = EventTypeNameFromEventType(v3);
        WPP_SF_DPS(*(_QWORD *)(v15 + 16), v16, v15, v13, v3, (__int64)v14);
      }
      if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
      {
        v17 = (unsigned int)EventTypeNameFromEventType(v3);
        Template_qzq(v18, (unsigned int)&EVT_AUDIOSRV_FAIL_SERVICE_DEVICE_EVENT, v3, v17, v13);
      }
    }
    return 0LL;
  }
  if ( (_DWORD)v3 == 32769 )
  {
    v12 = PostDeviceEvent(2, &a2->dbcc_size);
    goto LABEL_18;
  }
  if ( (_DWORD)v3 != 32770 )
  {
    if ( (unsigned int)(v3 - 32771) >= 2 )
      return 120LL;
    v12 = OnAudioDeviceRemoval(a2);
    goto LABEL_18;
  }
  return 0LL;
}
