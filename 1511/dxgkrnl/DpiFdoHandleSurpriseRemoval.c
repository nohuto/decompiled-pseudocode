/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x1C016C620
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestIoPowerState @ 0x1C00CB040 (DpiRequestIoPowerState.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0145C98 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x1C016C990 (DpiFdoIsDevicePresent.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C0174ECC (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  int v17; // eax
  __int64 v18; // rax
  char v20; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v9 = *(unsigned int *)(DeviceExtension + 236);
  if ( (_DWORD)v9 != 6 )
  {
    v10 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v10 = DeviceExtension;
    }
    else
    {
      v11 = *(_QWORD *)(DeviceExtension + 1512);
      if ( v11 )
        v10 = *(_QWORD *)(v11 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232) && (_DWORD)v9 )
    {
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v20);
      if ( IsDevicePresent < 0 )
        goto LABEL_18;
      if ( !v20 && v10 )
        IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                            *(_QWORD *)(DeviceExtension + 40),
                            *(_QWORD *)(DeviceExtension + 48),
                            v10,
                            1LL);
      if ( IsDevicePresent < 0 )
      {
LABEL_18:
        *(_BYTE *)(DeviceExtension + 1096) = 1;
        v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v6, v7);
        v13[3] = 275LL;
        v13[4] = 25LL;
        v13[5] = 2 - (*(_BYTE *)(DeviceExtension + 1088) != 0);
        v13[6] = *(unsigned int *)(DeviceExtension + 1060);
        v13[7] = *(unsigned int *)(DeviceExtension + 1064);
        WdLogEvent5_WdCriticalError(v13);
      }
    }
    if ( v10 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 2440), 1u);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
      v14 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v14;
      *(_DWORD *)(DeviceExtension + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v10 + 2440));
      KeLeaveCriticalRegion();
      if ( *(_BYTE *)(v10 + 480) )
      {
        if ( *(_DWORD *)(v10 + 2624) != 3 )
        {
          v9 = *(_QWORD *)(v10 + 2544);
          if ( v9 )
          {
            DXGADAPTER::Stop((DXGADAPTER *)v9, 0LL, v7, v8);
            Global = DXGGLOBAL::GetGlobal(v15);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v10 + 2624) = 3;
          }
        }
      }
      else
      {
        DpiRequestIoPowerState(*(_QWORD *)(v10 + 24), 3, 0LL, 0);
      }
    }
    else
    {
      v9 = *(_DWORD *)(DeviceExtension + 276) & 7;
      *(_DWORD *)(DeviceExtension + 4 * v9 + 244) = *(_DWORD *)(DeviceExtension + 240);
      v17 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v17;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  v18 = WdLogNewEntry5_WdEvent(v9, v6, v7, v8);
  *(_QWORD *)(v18 + 24) = DpiFdoHandleSurpriseRemoval;
  *(_QWORD *)(v18 + 32) = a1;
  WdLogEvent5_WdEvent(v18);
  if ( *(_BYTE *)(DeviceExtension + 483) )
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
