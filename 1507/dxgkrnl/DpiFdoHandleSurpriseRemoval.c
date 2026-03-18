/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x1C0167F30
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestIoPowerState @ 0x1C00BC9E0 (DpiRequestIoPowerState.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C013F7C0 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x1C0168260 (DpiFdoIsDevicePresent.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r15d
  __int64 v6; // rdx
  DXGADAPTER *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGGLOBAL *Global; // rax
  __int64 v19; // rax
  char v21; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 451) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v10 = *(_DWORD *)(DeviceExtension + 236);
  if ( v10 != 6 )
  {
    if ( !*(_BYTE *)(DeviceExtension + 232)
      && v10
      && (*(_DWORD *)(DeviceExtension + 16) != 1953656900
       || *(_DWORD *)(DeviceExtension + 20) != 2
       || (*(_BYTE *)(DeviceExtension + 2512) & 0x10) == 0) )
    {
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v21);
      if ( IsDevicePresent < 0 || !v21 )
      {
        *(_BYTE *)(DeviceExtension + 1063) = 1;
        v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
        v11[3] = 275LL;
        v11[4] = 25LL;
        v11[5] = 2 - (*(_BYTE *)(DeviceExtension + 1056) != 0);
        v11[6] = *(unsigned int *)(DeviceExtension + 1028);
        v11[7] = *(unsigned int *)(DeviceExtension + 1032);
        WdLogEvent5_WdCriticalError(v11);
      }
    }
    if ( !*(_DWORD *)(DeviceExtension + 472) || *(_BYTE *)(DeviceExtension + 476) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
        goto LABEL_25;
      v13 = DeviceExtension;
    }
    else
    {
      v12 = *(_QWORD *)(DeviceExtension + 1472);
      if ( !v12 )
        goto LABEL_25;
      v13 = *(_QWORD *)(v12 + 64);
    }
    if ( v13 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 2400), 1u);
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v13 + 2400));
      KeLeaveCriticalRegion();
      if ( *(_BYTE *)(v13 + 448) )
      {
        if ( *(_DWORD *)(v13 + 2584) != 3 )
        {
          v7 = *(DXGADAPTER **)(v13 + 2504);
          if ( v7 )
          {
            DXGADAPTER::Stop(v7, 0LL, v8, v9);
            Global = DXGGLOBAL::GetGlobal(v15, v14, v16, v17);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v13 + 2584) = 3;
          }
        }
      }
      else
      {
        DpiRequestIoPowerState(*(_QWORD *)(v13 + 24), 3, 0LL, 0);
      }
      goto LABEL_26;
    }
LABEL_25:
    *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
    *(_DWORD *)(DeviceExtension + 236) = 6;
  }
LABEL_26:
  v19 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v19 + 24) = DpiFdoHandleSurpriseRemoval;
  *(_QWORD *)(v19 + 32) = a1;
  WdLogEvent5_WdEvent(v19);
  if ( *(_BYTE *)(DeviceExtension + 451) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 1) <= 1 )
    DpiFdoHandleStopDevice(a1, a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = IsDevicePresent;
  return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
}
