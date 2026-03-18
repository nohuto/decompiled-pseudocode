/*
 * XREFs of UsbhFdoSetD0Warm @ 0x1C0045DA0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhResumeHardReset @ 0x1C0002F58 (UsbhResumeHardReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00089C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhSyncBusResume @ 0x1C0021708 (UsbhSyncBusResume.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0025DDC (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhWaitForPortResume @ 0x1C0028274 (UsbhWaitForPortResume.c)
 *     UsbhFlushPortChange @ 0x1C003BDA0 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
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
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  int v21; // r8d
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 j; // di
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int16 k; // di
  __int64 v35; // rax
  int v36; // r15d
  __int64 v37; // r10
  __int64 v38; // rax
  struct _DEVICE_OBJECT *v39; // rbp
  _DWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  _DWORD *v44; // r14
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  _DWORD *v48; // rax
  __int16 v49; // r9
  int v50; // eax
  int v52; // [rsp+48h] [rbp-50h]
  unsigned int v53; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v54; // [rsp+58h] [rbp-40h]
  int v55; // [rsp+B0h] [rbp+18h] BYREF
  int v56; // [rsp+B8h] [rbp+20h] BYREF

  v54 = FdoExt((__int64)DeviceObject, a2, a3, a4);
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
      v6 = UsbhQueryPortState((__int64)DeviceObject, i, &v55, &v56);
      if ( v6 >= 0 )
      {
        v13 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x574D5253u);
        v15 = v13;
        if ( v13 )
        {
          v16 = PdoExt(v13, v8, v14, v10);
          v17 = v16;
          if ( (v55 & 1) != 0 && (v55 & 0x10000) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, i, 0LL);
            v6 = UsbhFlushPortChange((__int64)DeviceObject, i, &v56, v18);
            if ( v6 >= 0 )
            {
              v19 = v17[353];
              if ( (v19 & 0x8000000) == 0 )
                v17[353] = v19 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v55 & 3) == 1 )
          {
            v20 = v16[353];
            if ( (v20 & 0x8000000) == 0 )
            {
              v21 = 2003985970;
              v17[353] = v20 | 0x4000;
              goto LABEL_17;
            }
          }
          if ( (v55 & 0x10000) == 0 && (v55 & 1) == 0 )
          {
            *(_DWORD *)(PortData + 2408) |= 4u;
            v21 = 2003985971;
LABEL_17:
            Log((__int64)DeviceObject, 16, v21, i, 0LL);
          }
LABEL_13:
          UsbhUnlatchPdo((__int64)DeviceObject, v15, 0LL, 0x574D5253u);
          goto LABEL_24;
        }
        v9 = 1LL;
        if ( (v55 & 0x10000) == 0 && (v55 & 1) != 0 )
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
  UsbhSyncBusResume((__int64)DeviceObject, a2, v22, v23);
  for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v24, v25, v26) + 2938); ++j )
  {
    v28 = UsbhGetPortData((__int64)DeviceObject, j);
    if ( v28 )
    {
      v6 = UsbhWaitForPortResume(DeviceObject, v28, a2, v26);
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
    UsbhWait((__int64)DeviceObject, 0xAu);
    v6 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v53, v29, v30);
    if ( (v6 & 0xC0000000) != 0xC0000000 )
    {
      for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v31, v32, v33) + 2938); k += v7 )
      {
        v35 = UsbhGetPortData((__int64)DeviceObject, k);
        if ( v35 )
        {
          v36 = 0;
          if ( (*(_DWORD *)(v35 + 2408) & 4) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003989347, k, 0LL);
            *(_DWORD *)(v37 + 2408) &= ~4u;
            UsbhQueueSoftConnectChange((__int64)DeviceObject, k, a2, v7);
          }
          else
          {
            v38 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x574D5253u);
            v39 = (struct _DEVICE_OBJECT *)v38;
            if ( !v38 )
              goto LABEL_45;
            v40 = PdoExt(v38, v31, v32, v33);
            v44 = v40;
            if ( (v40[356] & 0x1000) != 0 || (v40[353] & 0x4000) != 0 )
            {
              v40[353] = v40[353] & 0xFDFFBFFF | 0x2000000;
              PdoExt((__int64)v39, v41, v42, v43);
              UsbhEtwLogHubIrpEvent(
                (__int64)DeviceObject,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME);
              v48 = PdoExt((__int64)v39, v45, v46, v47);
              v36 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v48 + 236), (__int64)v39);
              if ( (v44[353] & 4) != 0 )
                UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v39, 0x220FA7u);
            }
            UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v39, 0LL, 0x574D5253u);
            if ( (v36 & 0xC0000000) == 0xC0000000 )
            {
              Log((__int64)DeviceObject, 16, 1466782291, 0LL, v36);
              v7 = v49 + 1;
              UsbhQueueSoftConnectChange((__int64)DeviceObject, k, a2, v49 + 1);
              LOBYTE(v52) = 0;
              UsbhException((int)DeviceObject, 0, 138, 0, 0, v36, 0, usbfile_fdopwr_c, 3687, v52);
            }
            else
            {
LABEL_45:
              v7 = 1;
            }
          }
        }
      }
      v50 = v54[640];
      if ( (v50 & 0x10) != 0 )
      {
        LOBYTE(v52) = 0;
        v54[640] = v50 & 0xFFFFFFEF;
        UsbhException((int)DeviceObject, 0, 113, 0, 0, 0, 0, usbfile_fdopwr_c, 3702, v52);
        v6 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset((int)DeviceObject);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE);
  return (unsigned int)v6;
}
