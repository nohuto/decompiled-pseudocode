/*
 * XREFs of UsbhFdoSetD0Warm @ 0x1C0046020
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhResumeHardReset @ 0x1C0003158 (UsbhResumeHardReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhWait @ 0x1C0009D88 (UsbhWait.c)
 *     UsbhSyncBusResume @ 0x1C000BF24 (UsbhSyncBusResume.c)
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0022AB0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0022D50 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhWaitForPortResume @ 0x1C0028934 (UsbhWaitForPortResume.c)
 *     UsbhFlushPortChange @ 0x1C003C1C0 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int16 j; // di
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int16 k; // di
  __int64 v33; // rax
  int v34; // r15d
  __int64 v35; // r10
  __int64 v36; // rax
  struct _DEVICE_OBJECT *v37; // rbp
  _DWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _DWORD *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  _DWORD *v46; // rax
  __int16 v47; // r9
  int v48; // eax
  int v50; // [rsp+48h] [rbp-50h]
  unsigned int v51; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v52; // [rsp+58h] [rbp-40h]
  char v53; // [rsp+B0h] [rbp+18h] BYREF
  char v54; // [rsp+B2h] [rbp+1Ah]
  int v55; // [rsp+B8h] [rbp+20h] BYREF

  v52 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  v6 = 0;
  Log((__int64)DeviceObject, 16, 2002874989, 0LL, 0LL);
  v7 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Cu,
      (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_START);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v8, v9, v10) + 2938); ++i )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, i);
    if ( PortData )
    {
      v6 = UsbhQueryPortState((__int64)DeviceObject, i, (__int64)&v53, &v55);
      if ( v6 >= 0 )
      {
        v13 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x574D5253u);
        v15 = v13;
        if ( v13 )
        {
          v16 = PdoExt(v13, v8, v14, v10);
          v17 = v16;
          if ( (v53 & 1) != 0 && (v54 & 1) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, i, 0LL);
            v6 = UsbhFlushPortChange((__int64)DeviceObject, i, &v55, v18);
            if ( v6 >= 0 )
            {
              v19 = v17[353];
              if ( (v19 & 0x8000000) == 0 )
                v17[353] = v19 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v53 & 3) == 1 )
          {
            v20 = v16[353];
            if ( (v20 & 0x8000000) == 0 )
            {
              v21 = 2003985970;
              v17[353] = v20 | 0x4000;
              goto LABEL_17;
            }
          }
          if ( (v54 & 1) == 0 && (v53 & 1) == 0 )
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
        if ( (v54 & 1) == 0 && (v53 & 1) != 0 )
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
  UsbhSyncBusResume((__int64)DeviceObject, a2);
  for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v22, v23, v24) + 2938); ++j )
  {
    v26 = UsbhGetPortData((__int64)DeviceObject, j);
    if ( v26 )
    {
      v6 = UsbhWaitForPortResume(DeviceObject, v26, a2, v24);
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
    v6 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v51, v27, v28);
    if ( (v6 & 0xC0000000) != 0xC0000000 )
    {
      for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v29, v30, v31) + 2938); k += v7 )
      {
        v33 = UsbhGetPortData((__int64)DeviceObject, k);
        if ( v33 )
        {
          v34 = 0;
          if ( (*(_DWORD *)(v33 + 2408) & 4) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003989347, k, 0LL);
            *(_DWORD *)(v35 + 2408) &= ~4u;
            UsbhQueueSoftConnectChange(DeviceObject, k, a2, v7);
          }
          else
          {
            v36 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x574D5253u);
            v37 = (struct _DEVICE_OBJECT *)v36;
            if ( !v36 )
              goto LABEL_45;
            v38 = PdoExt(v36, v29, v30, v31);
            v42 = v38;
            if ( (v38[356] & 0x1000) != 0 || (v38[353] & 0x4000) != 0 )
            {
              v38[353] = v38[353] & 0xFDFFBFFF | 0x2000000;
              PdoExt((__int64)v37, v39, v40, v41);
              UsbhEtwLogHubIrpEvent(
                (__int64)DeviceObject,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME);
              v46 = PdoExt((__int64)v37, v43, v44, v45);
              v34 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v46 + 236), (__int64)v37);
              if ( (v42[353] & 4) != 0 )
                UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v37, 0x220FA7u);
            }
            UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v37, 0LL, 0x574D5253u);
            if ( (v34 & 0xC0000000) == 0xC0000000 )
            {
              Log((__int64)DeviceObject, 16, 1466782291, 0LL, v34);
              v7 = v47 + 1;
              UsbhQueueSoftConnectChange(DeviceObject, k, a2, v47 + 1);
              LOBYTE(v50) = 0;
              UsbhException((int)DeviceObject, 0, 138, 0, 0, v34, 0, usbfile_fdopwr_c, 3687, v50);
            }
            else
            {
LABEL_45:
              v7 = 1;
            }
          }
        }
      }
      v48 = v52[640];
      if ( (v48 & 0x10) != 0 )
      {
        LOBYTE(v50) = 0;
        v52[640] = v48 & 0xFFFFFFEF;
        UsbhException((int)DeviceObject, 0, 113, 0, 0, 0, 0, usbfile_fdopwr_c, 3702, v50);
        v6 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset((int)DeviceObject);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE);
  return (unsigned int)v6;
}
