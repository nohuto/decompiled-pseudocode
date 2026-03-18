/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x1C0195330
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestIoPowerState @ 0x1C00E0898 (DpiRequestIoPowerState.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0169704 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x1C01956B8 (DpiFdoIsDevicePresent.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C019E878 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  int v17; // eax
  __int64 v18; // rax
  char v20; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v6 = *(unsigned int *)(DeviceExtension + 236);
  if ( (_DWORD)v6 != 6 )
  {
    v7 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v7 = DeviceExtension;
    }
    else
    {
      v8 = *(_QWORD *)(DeviceExtension + 2592);
      if ( v8 )
        v7 = *(_QWORD *)(v8 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232) && (_DWORD)v6 )
    {
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v20);
      if ( IsDevicePresent < 0 )
        goto LABEL_18;
      if ( !v20 )
      {
        *(_BYTE *)(DeviceExtension + 1148) = 1;
        if ( v7 )
          IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                              *(_QWORD *)(DeviceExtension + 40),
                              *(_QWORD *)(DeviceExtension + 48),
                              v7,
                              1LL);
      }
      if ( IsDevicePresent < 0 )
      {
LABEL_18:
        *(_BYTE *)(DeviceExtension + 1149) = 1;
        v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
        v12[3] = 275LL;
        v12[4] = 25LL;
        v12[5] = 2 - (*(_BYTE *)(DeviceExtension + 1136) != 0);
        v12[6] = *(unsigned int *)(DeviceExtension + 1108);
        v12[7] = *(unsigned int *)(DeviceExtension + 1112);
        WdLogEvent5_WdCriticalError(v12);
      }
    }
    if ( v7 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 3584), 1u);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
      v13 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v13;
      *(_DWORD *)(DeviceExtension + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v7 + 3584));
      KeLeaveCriticalRegion();
      if ( *(_BYTE *)(v7 + 480) )
      {
        if ( *(_DWORD *)(v7 + 3768) != 3 )
        {
          v6 = *(_QWORD *)(v7 + 3688);
          if ( v6 )
          {
            DXGADAPTER::Stop((DXGADAPTER *)v6, 0, 0);
            Global = DXGGLOBAL::GetGlobal(v15);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v7 + 3768) = 3;
          }
        }
      }
      else
      {
        DpiRequestIoPowerState(*(_QWORD *)(v7 + 24), 3, v14, 0);
      }
    }
    else
    {
      v6 = *(_DWORD *)(DeviceExtension + 276) & 7;
      *(_DWORD *)(DeviceExtension + 4 * v6 + 244) = *(_DWORD *)(DeviceExtension + 240);
      v17 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v17;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  v18 = WdLogNewEntry5_WdEvent(v6);
  *(_QWORD *)(v18 + 24) = a1;
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
