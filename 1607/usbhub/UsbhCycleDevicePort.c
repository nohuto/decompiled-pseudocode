/*
 * XREFs of UsbhCycleDevicePort @ 0x1C0043154
 * Callers:
 *     UsbhFdoCyclePdoPort @ 0x1C003E8F4 (UsbhFdoCyclePdoPort.c)
 *     UsbhIoctlCyclePort @ 0x1C0047CC4 (UsbhIoctlCyclePort.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0022CF8 (UsbhAcquirePdoStateLock.c)
 *     UsbhSyncResumePort @ 0x1C002883C (UsbhSyncResumePort.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhCycleDevicePort(struct _DEVICE_OBJECT *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v7; // ebx
  _DWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rsi
  __int64 PortData; // r12
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  KIRQL v25; // dl
  int v26; // eax

  v7 = -1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x51u,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids);
  v8 = PdoExt(a2, a2, (__int64)a3, a4);
  v12 = FdoExt((__int64)a1, v9, v10, v11);
  v16 = PdoExt(a2, v13, v14, v15) + 236;
  PortData = UsbhGetPortData((__int64)a1, *((_WORD *)v8 + 710));
  if ( !PortData )
  {
    Log((__int64)a1, 4, 1129932081, 0LL, 0LL);
    v7 = -1073741811;
    goto LABEL_16;
  }
  v18 = v12[640];
  if ( (v18 & 0x4000) != 0 )
  {
    Log((__int64)a1, 4, 1132029234, 0LL, 0LL);
    *a3 = -1073713152;
LABEL_7:
    v7 = -1073741810;
    goto LABEL_16;
  }
  if ( (v18 & 0x10) != 0 )
  {
    Log((__int64)a1, 4, 1132029235, 0LL, 0LL);
    *a3 = -1073704960;
    v7 = -1073741630;
    goto LABEL_16;
  }
  v19 = UsbhLatchPdo((__int64)a1, *((_WORD *)v8 + 710), 0LL, 0x6C435943u);
  Log((__int64)a1, 4, 1668899692, *((unsigned __int16 *)v8 + 710), v19);
  if ( !v19 )
    goto LABEL_7;
  if ( a2 == v19 )
  {
    UsbhAcquirePdoStateLock(v20, (__int64)v16, 14);
    v24 = PdoExt(a2, v21, v22, v23)[281] == 3;
    v16[34] = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v16[22] = 1734964085;
    v25 = *((_BYTE *)v16 + 132);
    if ( v24 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
      Log((__int64)a1, 8, 1668899655, *((unsigned __int16 *)v8 + 710), *((unsigned __int16 *)v8 + 710));
      _InterlockedIncrement((volatile signed __int32 *)(PortData + 412));
      v26 = UsbhSyncResumePort(a1, (__int64)v16, *((_WORD *)v8 + 710));
      Log((__int64)a1, 8, 1668895315, *((unsigned __int16 *)v8 + 710), v26);
      UsbhQueueSoftConnectChange(a1, *((_WORD *)v8 + 710), (__int64)v16, 1);
      v7 = 0;
    }
    else
    {
      v7 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    }
  }
  UsbhUnlatchPdo((__int64)a1, v19, 0LL, 0x6C435943u);
LABEL_16:
  Log((__int64)a1, 8, 1668899655, *((unsigned __int16 *)v8 + 710), v7);
  return (unsigned int)v7;
}
