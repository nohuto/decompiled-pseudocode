/*
 * XREFs of UsbhFdoSetD0Warm @ 0x1C0045C70
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhResumeHardReset @ 0x1C0002F58 (UsbhResumeHardReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFlushPortChange @ 0x1C0003D18 (UsbhFlushPortChange.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C000A860 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncBusResume @ 0x1C001C360 (UsbhSyncBusResume.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0021494 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhWaitForPortResume @ 0x1C00292B4 (UsbhWaitForPortResume.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Warm(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // esi
  __int16 v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 i; // di
  __int64 PortData; // rbp
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r15
  _DWORD *v16; // rax
  _DWORD *v17; // r14
  int v18; // eax
  int v19; // eax
  int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 j; // di
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int16 k; // di
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // r10
  __int64 v37; // rax
  struct _DEVICE_OBJECT *v38; // rbp
  _DWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  _DWORD *v43; // r14
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // rax
  __int16 v48; // r9
  int v49; // eax
  int v51; // [rsp+48h] [rbp-50h]
  unsigned int v52; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v53; // [rsp+58h] [rbp-40h]
  char v54; // [rsp+B0h] [rbp+18h] BYREF
  char v55; // [rsp+B2h] [rbp+1Ah]
  int v56; // [rsp+B8h] [rbp+20h] BYREF

  v53 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  v6 = 0;
  Log((__int64)DeviceObject, 16, 2002874989, 0LL, 0LL);
  v7 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Cu,
      (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_START);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v8, v9, v10) + 2938); ++i )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, i);
    if ( PortData )
    {
      v6 = UsbhQueryPortState((__int64)DeviceObject, i, (__int64)&v54, &v56);
      if ( v6 >= 0 )
      {
        v13 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x574D5253u);
        v15 = v13;
        if ( v13 )
        {
          v16 = PdoExt(v13, v8, v14, v10);
          v17 = v16;
          if ( (v54 & 1) != 0 && (v55 & 1) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, i, 0LL);
            v6 = UsbhFlushPortChange((__int64)DeviceObject, i);
            if ( v6 >= 0 )
            {
              v18 = v17[353];
              if ( (v18 & 0x8000000) == 0 )
                v17[353] = v18 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v54 & 3) == 1 )
          {
            v19 = v16[353];
            if ( (v19 & 0x8000000) == 0 )
            {
              v20 = 2003985970;
              v17[353] = v19 | 0x4000;
              goto LABEL_17;
            }
          }
          if ( (v55 & 1) == 0 && (v54 & 1) == 0 )
          {
            *(_DWORD *)(PortData + 2408) |= 4u;
            v20 = 2003985971;
LABEL_17:
            Log((__int64)DeviceObject, 16, v20, i, 0LL);
          }
LABEL_13:
          UsbhUnlatchPdo((__int64)DeviceObject, v15, 0LL, 0x574D5253u);
          goto LABEL_24;
        }
        v9 = 1LL;
        if ( (v55 & 1) == 0 && (v54 & 1) != 0 )
        {
          *(_DWORD *)(PortData + 2408) |= 4u;
          Log((__int64)DeviceObject, 16, 2003985972, i, 0LL);
        }
      }
    }
LABEL_24:
    v7 = 1;
  }
  Log((__int64)DeviceObject, 16, 1651724877, 0LL, 0LL);
  UsbhSyncBusResume(DeviceObject, a2, v21, v22);
  for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v23, v24, v25) + 2938); ++j )
  {
    v27 = UsbhGetPortData((__int64)DeviceObject, j);
    if ( v27 )
    {
      v6 = UsbhWaitForPortResume(DeviceObject, v27, a2, v25);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        UsbhEtwLogHubIrpEvent(
          (__int64)DeviceObject,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_PORT_RESUME_ERROR);
        v7 = 1;
        break;
      }
    }
    v7 = 1;
  }
  if ( (v6 & 0xC0000000) != 0xC0000000 )
  {
    UsbhWait((int)DeviceObject, 10);
    v6 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v52, v28, v29);
    if ( (v6 & 0xC0000000) != 0xC0000000 )
    {
      for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v30, v31, v32) + 2938); k += v7 )
      {
        v34 = UsbhGetPortData((__int64)DeviceObject, k);
        if ( v34 )
        {
          v35 = 0;
          if ( (*(_DWORD *)(v34 + 2408) & 4) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003989347, k, 0LL);
            *(_DWORD *)(v36 + 2408) &= ~4u;
            UsbhQueueSoftConnectChange(DeviceObject, k, a2, v7);
          }
          else
          {
            v37 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x574D5253u);
            v38 = (struct _DEVICE_OBJECT *)v37;
            if ( !v37 )
              goto LABEL_45;
            v39 = PdoExt(v37, v30, v31, v32);
            v43 = v39;
            if ( (v39[356] & 0x1000) != 0 || (v39[353] & 0x4000) != 0 )
            {
              v39[353] = v39[353] & 0xFDFFBFFF | 0x2000000;
              PdoExt((__int64)v38, v40, v41, v42);
              UsbhEtwLogHubIrpEvent(
                (__int64)DeviceObject,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME);
              v47 = PdoExt((__int64)v38, v44, v45, v46);
              v35 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v47 + 236), (__int64)v38);
              if ( (v43[353] & 4) != 0 )
                UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v38, 0x220FA7u);
            }
            UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v38, 0LL, 0x574D5253u);
            if ( (v35 & 0xC0000000) == 0xC0000000 )
            {
              Log((__int64)DeviceObject, 16, 1466782291, 0LL, v35);
              v7 = v48 + 1;
              UsbhQueueSoftConnectChange(DeviceObject, k, a2, v48 + 1);
              LOBYTE(v51) = 0;
              UsbhException((int)DeviceObject, 0, 138, 0, 0, v35, 0, usbfile_fdopwr_c, 3687, v51);
            }
            else
            {
LABEL_45:
              v7 = 1;
            }
          }
        }
      }
      v49 = v53[640];
      if ( (v49 & 0x10) != 0 )
      {
        LOBYTE(v51) = 0;
        v53[640] = v49 & 0xFFFFFFEF;
        UsbhException((int)DeviceObject, 0, 113, 0, 0, 0, 0, usbfile_fdopwr_c, 3702, v51);
        v6 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset((int)DeviceObject);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE);
  return (unsigned int)v6;
}
