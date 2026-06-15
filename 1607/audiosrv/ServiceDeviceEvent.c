/*
 * XREFs of ServiceDeviceEvent @ 0x180083344
 * Callers:
 *     ServiceDeviceEventCallback @ 0x180083500 (ServiceDeviceEventCallback.c)
 * Callees:
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x180082BF0 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180083140 (-OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18008319C (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180083220 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     Template_qzq @ 0x1800835FC (Template_qzq.c)
 *     WPP_SF_DPS @ 0x1800836A4 (WPP_SF_DPS.c)
 *     WPP_SF_PS @ 0x180083750 (WPP_SF_PS.c)
 */

__int64 __fastcall ServiceDeviceEvent(unsigned int a1, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  unsigned __int64 v3; // rdi
  CAudioSession *v4; // r10
  const unsigned __int16 *v5; // rax
  __int64 v6; // r10
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  DWORD dbcc_devicetype; // r9d
  int v14; // eax
  int v15; // ebx
  const unsigned __int16 *v16; // rax
  __int64 v17; // r8
  int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx

  v3 = a1;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = EventTypeNameFromEventType(a1);
    WPP_SF_PS(*(_QWORD *)(v6 + 16), v7, v8, v9, (__int64)v5);
    v4 = WPP_GLOBAL_Control;
  }
  v10 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( v10 )
  {
    v11 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data4;
    if ( v11 )
    {
      v12 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
      if ( !v12 )
        v12 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
      if ( v12 )
        return 0LL;
    }
  }
  dbcc_devicetype = a2->dbcc_devicetype;
  if ( dbcc_devicetype != 5 )
  {
    if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 0x20) != 0 && *((_BYTE *)v4 + 25) >= 4u )
      WPP_SF_D(*((_QWORD *)v4 + 2), 0x17u, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, dbcc_devicetype);
    return 120LL;
  }
  switch ( (_DWORD)v3 )
  {
    case 0x8000:
      v14 = OnAudioDeviceArrival(a2);
LABEL_22:
      v15 = v14;
      if ( v14 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v16 = EventTypeNameFromEventType(v3);
          WPP_SF_DPS(*(_QWORD *)(v17 + 16), v18, v17, v15, v3, (__int64)v16);
        }
        if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
        {
          v19 = (unsigned int)EventTypeNameFromEventType(v3);
          Template_qzq(v20, (unsigned int)&EVT_AUDIOSRV_FAIL_SERVICE_DEVICE_EVENT, v3, v19, v15);
        }
      }
      return 0LL;
    case 0x8001:
      v14 = PostDeviceEvent(2, &a2->dbcc_size);
      goto LABEL_22;
    case 0x8002:
      return 0LL;
  }
  if ( (unsigned int)(v3 - 32771) <= 1 )
  {
    v14 = OnAudioDeviceRemoval(a2);
    goto LABEL_22;
  }
  return 120LL;
}
