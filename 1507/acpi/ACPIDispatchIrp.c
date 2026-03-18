/*
 * XREFs of ACPIDispatchIrp @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0004FB0 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0020D6C (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ACPIDeferredWakeHandler @ 0x1C003950C (ACPIDeferredWakeHandler.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C004032C (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0040EFC (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0042228 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C0072068 (ACPIInternalNotifyAvailableDeviceObject.c)
 */

__int64 __fastcall ACPIDispatchIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KIRQL v5; // al
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 MajorFunction; // al
  __int64 MinorFunction; // rdx
  __int64 (__fastcall *v10)(ULONG_PTR, PIRP); // rax
  unsigned int Status; // edi
  KPROCESSOR_MODE RequestorMode; // dl
  KIRQL v14; // al
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int (__fastcall *v17)(ULONG_PTR, PIRP); // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(ULONG_PTR, PIRP); // rdi
  unsigned int LowPart; // ecx
  bool v22; // zf
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) != 1599293264 )
      KeBugCheckEx(0xA3u, 2uLL, 0x901D1uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
    if ( (*(_BYTE *)v6 & 4) == 0 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 672));
      goto LABEL_5;
    }
    v6 = 0LL;
  }
  v7 = 0LL;
LABEL_5:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  if ( v6 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( CurrentStackLocation->MajorFunction == 22 )
    {
      v19 = *(_QWORD *)(v7 + 32);
      if ( (unsigned __int8)MinorFunction >= 4u )
        v20 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v19 + 32);
      else
        v20 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v19 + 8LL * (unsigned __int8)MinorFunction);
      if ( (_BYTE)MinorFunction == 2 && !CurrentStackLocation->Parameters.Create.Options )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( *(_DWORD *)(v6 + 492) != LowPart )
        {
          v22 = *(_DWORD *)(v6 + 312) == 3;
          *(_DWORD *)(v6 + 492) = LowPart;
          if ( v22 && (*(_DWORD *)(v6 + 612) & 0x300) != 0 )
          {
            LOBYTE(MinorFunction) = LowPart == 1;
            EnableDisableRegionSpacesForDevice(v6, MinorFunction);
          }
        }
      }
      if ( CurrentStackLocation->MinorFunction == 2
        && !CurrentStackLocation->Parameters.Create.Options
        && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
        && (*(_QWORD *)v6 & 0x8000000000000LL) == 0
        && (*(_DWORD *)(v6 + 904) & 0x1000LL) != 0 )
      {
        Status = ACPIDeferredWakeHandler(v6, Irp);
      }
      else if ( v20 )
      {
        Status = v20(BugCheckParameter3, Irp);
      }
      else
      {
        Status = -1073741822;
        Irp->IoStatus.Status = -1073741822;
        IofCompleteRequest(Irp, 0);
      }
      ACPIInternalDecrementIrpReferenceCount(v6);
      return Status;
    }
    switch ( MajorFunction )
    {
      case 0x1Bu:
        if ( (_BYTE)MinorFunction )
        {
          v16 = *(_QWORD *)(v7 + 24);
          if ( (unsigned __int8)MinorFunction >= 0x1Au )
            v17 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v16 + 208);
          else
            v17 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v16 + 8LL * (unsigned __int8)MinorFunction);
          switch ( (_BYTE)MinorFunction )
          {
            case 0xB:
              if ( (*(_DWORD *)v6 & 0x200LL) == 0 )
                _InterlockedOr64((volatile signed __int64 *)v6, 0x200uLL);
              break;
            case 7:
              if ( *(_DWORD *)(v6 + 312) == 2 && (*(_DWORD *)v6 & 0x200LL) != 0 )
              {
                *(_DWORD *)(v6 + 316) = 2;
                *(_DWORD *)(v6 + 312) = 3;
                ACPIInternalNotifyAvailableDeviceObject(v6);
                if ( (*(_DWORD *)(v6 + 612) & 0x300) != 0 )
                {
                  LOBYTE(v18) = 1;
                  EnableDisableRegionSpacesForDevice(v6, v18);
                }
                ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(v6);
              }
              break;
            case 2:
            case 0x17:
              if ( *(_DWORD *)(v6 + 312) == 3 )
              {
                if ( (*(_DWORD *)(v6 + 612) & 0x300) != 0 )
                  EnableDisableRegionSpacesForDevice(v6, 0LL);
                *(_DWORD *)(v6 + 316) = 3;
                *(_DWORD *)(v6 + 312) = 2;
              }
              ACPIThermalReleaseCoolingInterfaces(v6);
              _InterlockedAnd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFDFFuLL);
              KeInitializeEvent(&Event, SynchronizationEvent, 0);
              *(_QWORD *)(v6 + 696) = &Event;
              ACPIWakeEmptyRequestQueue(v6);
              ACPIInternalDecrementIrpReferenceCount(v6);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 672), 0xFFFFFFFF) != 1 )
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 672));
              *(_QWORD *)(v6 + 696) = 0LL;
              if ( v17 )
              {
                return v17(BugCheckParameter3, Irp);
              }
              else
              {
                Status = -1073741822;
                Irp->IoStatus.Status = -1073741822;
                IofCompleteRequest(Irp, 0);
              }
              return Status;
          }
        }
        else
        {
          v17 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v7 + 16);
        }
        if ( v17 )
        {
          Status = v17(BugCheckParameter3, Irp);
          goto LABEL_12;
        }
        goto LABEL_67;
      case 0xFu:
        goto LABEL_9;
      case 0u:
        goto LABEL_26;
      case 0xEu:
        RequestorMode = Irp->RequestorMode;
        if ( RequestorMode
          && (Irp->Flags & 0x400000) == 0
          && (!RootDeviceExtension
           || BugCheckParameter3 != *(_QWORD *)(RootDeviceExtension + 712)
           || !SeSinglePrivilegeCheck((LUID)7LL, RequestorMode)) )
        {
          v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v15 = *(_QWORD *)(BugCheckParameter3 + 64);
          if ( v15 && *(_DWORD *)(v15 + 8) != 1599293264 )
            KeBugCheckEx(0xA3u, 2uLL, 0x90145uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
          if ( *(_QWORD *)(v15 + 720) )
          {
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(v15 + 720), Irp);
            goto LABEL_12;
          }
          Status = Irp->IoStatus.Status;
          goto LABEL_68;
        }
LABEL_9:
        v10 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v7 + 8);
        goto LABEL_10;
    }
    if ( MajorFunction != 2 )
    {
      if ( MajorFunction == 23 )
        v10 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v7 + 40);
      else
        v10 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v7 + 48);
    }
    else
    {
LABEL_26:
      v10 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))v7;
    }
LABEL_10:
    if ( v10 )
    {
      Status = v10(BugCheckParameter3, Irp);
      goto LABEL_12;
    }
LABEL_67:
    Status = -1073741822;
    Irp->IoStatus.Status = -1073741822;
LABEL_68:
    IofCompleteRequest(Irp, 0);
LABEL_12:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 672), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v6 + 696), 0, 0);
    return Status;
  }
  Irp->IoStatus.Status = -1073741810;
  IofCompleteRequest(Irp, 0);
  return 3221225486LL;
}
