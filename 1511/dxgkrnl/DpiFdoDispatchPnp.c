/*
 * XREFs of DpiFdoDispatchPnp @ 0x1C00E6FF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  char *DeviceExtension; // rdi
  int Status; // esi
  char v7; // r12
  UCHAR MinorFunction; // dl
  __int64 (__fastcall *v9)(PDEVICE_OBJECT, PIRP); // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  _OWORD *SecurityContext; // rax
  int v18; // eax
  int v19; // eax
  struct _DEVICE_OBJECT *v20; // rcx
  int v21; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  Status = -1073741637;
  v7 = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction < 0x18u )
  {
    v9 = *(__int64 (__fastcall **)(PDEVICE_OBJECT, PIRP))&DeviceExtension[8 * MinorFunction + 288];
    if ( v9 )
      return v9(DeviceObject, Irp);
  }
  switch ( MinorFunction )
  {
    case 0u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      *((_DWORD *)DeviceExtension + 71) = 1;
      *((_DWORD *)DeviceExtension + 70) = 1;
      PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)1);
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v21 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 2;
      goto LABEL_66;
    case 1u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C0046CD1 || DeviceExtension[480] )
      {
        v7 = 1;
        Status = -1073741823;
LABEL_68:
        if ( DeviceExtension[483] )
          DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
        ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
        KeLeaveCriticalRegion();
        if ( v7 )
          goto LABEL_24;
        if ( Status >= 0 )
          goto LABEL_73;
        break;
      }
      if ( *((_DWORD *)DeviceExtension + 59) == 6 )
      {
LABEL_67:
        Status = 0;
        goto LABEL_68;
      }
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v21 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 5;
LABEL_66:
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 60) = v21;
      goto LABEL_67;
    case 3u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
        goto LABEL_39;
      v19 = *((_DWORD *)DeviceExtension + 59);
      if ( v19 != 5 )
      {
        if ( v19 == 6 )
        {
          v20 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
          DeviceExtension[232] = 1;
          IoInvalidateDeviceState(v20);
        }
        goto LABEL_39;
      }
LABEL_38:
      v18 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v18;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_39:
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_24;
    case 4u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v14 = *((_DWORD *)DeviceExtension + 69) & 7;
      *(_DWORD *)&DeviceExtension[4 * v14 + 244] = *((_DWORD *)DeviceExtension + 60);
      v15 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 4;
      goto LABEL_16;
    case 5u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C0046CD1 || (Status = -1073741808, DeviceExtension[480]) )
        Status = -1073741823;
      goto LABEL_39;
    case 6u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 || *((_DWORD *)DeviceExtension + 59) != 3 )
        goto LABEL_39;
      goto LABEL_38;
    case 9u:
      if ( !DeviceExtension
        || *((_DWORD *)DeviceExtension + 4) != 1953656900
        || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
      {
        goto LABEL_75;
      }
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      Status = Irp->IoStatus.Status;
      *(_OWORD *)(DeviceExtension + 1112) = *SecurityContext;
      *(_OWORD *)(DeviceExtension + 1128) = SecurityContext[1];
      *(_OWORD *)(DeviceExtension + 1144) = SecurityContext[2];
      *(_OWORD *)(DeviceExtension + 1160) = SecurityContext[3];
      goto LABEL_24;
    case 0x14u:
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
      {
        if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 4 )
        {
          Irp->IoStatus.Information |= 2uLL;
          Status = 0;
        }
        else if ( DeviceExtension[232] == 1 )
        {
          Irp->IoStatus.Information |= 4uLL;
          Status = 0;
        }
        else if ( DeviceExtension[480] )
        {
          Irp->IoStatus.Information |= 0x22uLL;
          Status = 0;
        }
      }
      goto LABEL_24;
    case 0x17u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v14 = *((_DWORD *)DeviceExtension + 69) & 7;
      *(_DWORD *)&DeviceExtension[4 * v14 + 244] = *((_DWORD *)DeviceExtension + 60);
      v15 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 6;
LABEL_16:
      ++*((_DWORD *)DeviceExtension + 69);
      Status = 0;
      *((_DWORD *)DeviceExtension + 60) = v15;
      v16 = WdLogNewEntry5_WdEvent(v14, v11, v12, v13);
      *(_QWORD *)(v16 + 24) = DpiFdoDispatchPnp;
      *(_QWORD *)(v16 + 32) = DeviceObject;
      WdLogEvent5_WdEvent(v16);
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_74;
  }
  if ( Status == -1073741637 )
  {
LABEL_73:
    if ( Status == -1073741637 )
    {
LABEL_75:
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    }
LABEL_74:
    Irp->IoStatus.Status = Status;
    goto LABEL_75;
  }
LABEL_24:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)Status;
}
