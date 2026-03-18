/*
 * XREFs of DpiFdoDispatchPnp @ 0x1C00DA410
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PVOID DeviceExtension; // rbx
  int Status; // edi
  char v7; // r15
  UCHAR MinorFunction; // dl
  __int64 (__fastcall *v9)(PDEVICE_OBJECT, PIRP); // rax
  _OWORD *SecurityContext; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rax
  bool v18; // zf
  int v19; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = DeviceObject->DeviceExtension;
  Status = -1073741637;
  v7 = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction < 0x18u )
  {
    v9 = (__int64 (__fastcall *)(PDEVICE_OBJECT, PIRP))*((_QWORD *)DeviceExtension + MinorFunction + 32);
    if ( v9 )
      return v9(DeviceObject, Irp);
  }
  if ( MinorFunction )
  {
    if ( MinorFunction != 1 )
    {
      switch ( MinorFunction )
      {
        case 3u:
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 451) )
            DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
          Status = Irp->IoStatus.Status;
          if ( Status < 0 )
            goto LABEL_47;
          v18 = *((_DWORD *)DeviceExtension + 59) == 5;
          break;
        case 4u:
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 451) )
            DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          v16 = *((_DWORD *)DeviceExtension + 59);
          *((_DWORD *)DeviceExtension + 59) = 4;
          goto LABEL_34;
        case 5u:
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 451) )
            DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          if ( byte_1C0046C51 || (Status = -1073741808, *((_BYTE *)DeviceExtension + 448)) )
            Status = -1073741823;
          goto LABEL_47;
        case 6u:
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 451) )
            DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
          Status = Irp->IoStatus.Status;
          if ( Status < 0 )
          {
LABEL_47:
            if ( *((_BYTE *)DeviceExtension + 451) )
              DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
            ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
            KeLeaveCriticalRegion();
            goto LABEL_21;
          }
          v18 = *((_DWORD *)DeviceExtension + 59) == 3;
          break;
        case 9u:
          if ( !DeviceExtension
            || *((_DWORD *)DeviceExtension + 4) != 1953656900
            || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
          {
            goto LABEL_15;
          }
          IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
          SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
          Status = Irp->IoStatus.Status;
          *((_OWORD *)DeviceExtension + 67) = *SecurityContext;
          *((_OWORD *)DeviceExtension + 68) = SecurityContext[1];
          *((_OWORD *)DeviceExtension + 69) = SecurityContext[2];
          *((_OWORD *)DeviceExtension + 70) = SecurityContext[3];
          goto LABEL_21;
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
            else if ( *((_BYTE *)DeviceExtension + 232) == 1 )
            {
              Irp->IoStatus.Information |= 4uLL;
              Status = 0;
            }
            else if ( *((_BYTE *)DeviceExtension + 448) )
            {
              Irp->IoStatus.Information |= 0x22uLL;
              Status = 0;
            }
          }
          goto LABEL_21;
        case 0x17u:
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 451) )
            DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          v16 = *((_DWORD *)DeviceExtension + 59);
          *((_DWORD *)DeviceExtension + 59) = 6;
LABEL_34:
          Status = 0;
          *((_DWORD *)DeviceExtension + 60) = v16;
          v17 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
          *(_QWORD *)(v17 + 24) = DpiFdoDispatchPnp;
          *(_QWORD *)(v17 + 32) = DeviceObject;
          WdLogEvent5_WdEvent(v17);
          if ( *((_BYTE *)DeviceExtension + 451) )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
          goto LABEL_37;
        default:
LABEL_13:
          if ( Status == -1073741637 )
            goto LABEL_14;
LABEL_21:
          Irp->IoStatus.Status = Status;
          IofCompleteRequest(Irp, 1);
          return (unsigned int)Status;
      }
      if ( v18 )
        *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
      goto LABEL_47;
    }
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 451) )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( byte_1C0046C51 || *((_BYTE *)DeviceExtension + 448) )
    {
      v7 = 1;
      Status = -1073741823;
      goto LABEL_71;
    }
    v19 = *((_DWORD *)DeviceExtension + 59);
    *((_DWORD *)DeviceExtension + 59) = 5;
  }
  else
  {
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 451) )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    *((_DWORD *)DeviceExtension + 62) = 1;
    *((_DWORD *)DeviceExtension + 61) = 1;
    PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)1);
    v19 = *((_DWORD *)DeviceExtension + 59);
    *((_DWORD *)DeviceExtension + 59) = 2;
  }
  Status = 0;
  *((_DWORD *)DeviceExtension + 60) = v19;
LABEL_71:
  if ( *((_BYTE *)DeviceExtension + 451) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v7 )
    goto LABEL_21;
  if ( Status < 0 )
    goto LABEL_13;
LABEL_14:
  if ( Status != -1073741637 )
LABEL_37:
    Irp->IoStatus.Status = Status;
LABEL_15:
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
}
