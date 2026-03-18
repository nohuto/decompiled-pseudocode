/*
 * XREFs of Usbh_HRS_Queued @ 0x1C004735C
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C0017864 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhSyncBusPause @ 0x1C0002810 (UsbhSyncBusPause.c)
 *     UsbhReleaseResetLock @ 0x1C0004398 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhQueueWorkItemEx @ 0x1C0025074 (UsbhQueueWorkItemEx.c)
 *     UsbhSyncBusDisconnect @ 0x1C003F740 (UsbhSyncBusDisconnect.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhHardReset_Action @ 0x1C0046CFC (UsbhHardReset_Action.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C0046F78 (UsbhIncrementConcurrentResetCounter.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004BF44 (UsbhResetNotifyDownstreamHub.c)
 */

__int64 __fastcall Usbh_HRS_Queued(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // ebx
  unsigned int v14; // r8d
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  struct _DEVICE_OBJECT *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v41; // [rsp+28h] [rbp-30h]

  v5 = (int)a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  FdoExt(*(_QWORD *)(a1 + 8), v7, v8, v9);
  v10 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920160085, a1, v5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
      v5);
  v13 = v5 - 2;
  if ( !v13 )
  {
    v19 = *(_QWORD *)(a1 + 8);
    v21 = 5;
    v20 = a1;
    goto LABEL_27;
  }
  v14 = 3;
  v15 = v13 - 1;
  if ( !v15 )
  {
LABEL_13:
    v19 = *(_QWORD *)(a1 + 8);
    v20 = a1;
    return (unsigned int)UsbhReleaseResetLock(v19, v20, v14);
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 3;
    if ( v17 )
    {
      v18 = v17 - 2;
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 8);
        v20 = a1;
        if ( v18 != 1 )
        {
          v14 = v10;
          return (unsigned int)UsbhReleaseResetLock(v19, v20, v14);
        }
        v21 = 7;
LABEL_27:
        v25 = UsbhReleaseResetLock(v19, v20, v21);
        KeWaitForSingleObject(v6 + 712, Executive, 0, 0, 0LL);
        return v25;
      }
      goto LABEL_13;
    }
    v22 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    FdoExt((__int64)v22, v11, 3LL, v12);
    UsbhSyncBusPause((__int64)v22, a1, 6);
    UsbhSyncBusDisconnect(v22, a1, v23, v24);
LABEL_12:
    v14 = 4;
    goto LABEL_13;
  }
  UsbhEtwLogHubIrpEvent(*(_QWORD *)(a1 + 8), 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_HARD_RESET_START);
  v28 = UsbhHardReset_Action(*(PDEVICE_OBJECT *)(a1 + 8), a1, v26, v27);
  if ( *((_BYTE *)v6 + 5268) && _InterlockedExchange(v6 + 1315, 0) )
  {
    do
    {
      UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
      v28 = UsbhHardReset_Action(*(PDEVICE_OBJECT *)(a1 + 8), a1, v29, v30);
      UsbhIncrementConcurrentResetCounter(*(_QWORD *)(a1 + 8), v31, v32, v33);
    }
    while ( _InterlockedExchange(v6 + 1315, 0) );
  }
  UsbhEtwLogHubIrpEvent(*(_QWORD *)(a1 + 8), 0LL, 0LL, (const EVENT_DESCRIPTOR *)"1");
  if ( v28 < 0 && !*((_BYTE *)v6 + 5268) )
    goto LABEL_12;
  v34 = UsbhQueueWorkItemEx(*(_QWORD *)(a1 + 8), 1LL, (__int64)UsbhUpdateRegHubHardResetCount, 0LL, 0, 0x49577372u, 0LL);
  if ( (v34 & 0xC0000000) == 0xC0000000 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v41) = v34;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
      v41);
  }
  v25 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 2u);
  if ( *((_BYTE *)v6 + 5268) && v6[1315] )
  {
    UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
    UsbhHardReset_Action(*(PDEVICE_OBJECT *)(a1 + 8), a1, v35, v36);
    UsbhIncrementConcurrentResetCounter(*(_QWORD *)(a1 + 8), v37, v38, v39);
  }
  return v25;
}
