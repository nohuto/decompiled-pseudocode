/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0012F60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0007768 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0013B10 (UsbhFdoReturnPortStatus.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0025E3C (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C0026C7C (UsbhFdoReturnTopologyAddress.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00271A0 (UsbhSetPdo_AllowIo.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00277F4 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0027CB0 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0029AE4 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B6CC (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B770 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C003B948 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BA54 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E3A4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003E4F8 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E54C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003E628 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003E6FC (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003E8F4 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003ECBC (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003ED14 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003EDB8 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003EE4C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhIdleIrp_Event @ 0x1C0055484 (UsbhIdleIrp_Event.c)
 */

NTSTATUS __fastcall UsbhPdoInternalDeviceControl(_QWORD *Context, PIRP Irp, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned int LowPart; // ebp
  __int64 v8; // rcx
  NTSTATUS result; // eax
  int v10; // r14d
  __int64 v11; // r13
  KSPIN_LOCK *v12; // r12
  KIRQL v13; // al
  __int64 v14; // r8
  int v15; // r14d
  _QWORD *PoolWithTag; // rax
  __int64 v17; // r13
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  struct _DEVICE_OBJECT *v20; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v22; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  int Status; // ebx
  NTSTATUS v25; // ebx
  __int64 v26; // r12
  _IO_STACK_LOCATION *v27; // rbp
  _QWORD *p_SecurityQos; // r14
  __int64 v29; // rax
  unsigned int v30; // ebp
  unsigned int v31; // ebp
  unsigned int v32; // ebp
  unsigned int v33; // ebp
  KIRQL v34; // [rsp+70h] [rbp+8h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+80h] [rbp+18h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !Context )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = Context[8];
  if ( !v6 )
    UsbhTrapFatal_Dbg(Context, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 1329877064 )
    UsbhTrapFatal_Dbg(Context, Context[8], a3, a4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2232243 )
  {
    UsbhWait(*(_QWORD *)(v6 + 1176), 100);
    if ( *(_BYTE *)(v6 + 2709) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          10,
          (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids);
      Log(*(_QWORD *)(v6 + 1176), 256, 1397903939, 0, *(_QWORD *)(v6 + 1176));
      UsbhSetPdo_AllowIo(v8, Context);
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      result = 0;
      *(_QWORD *)(v6 + 2752) = 0LL;
      *(_BYTE *)(v6 + 2709) = 0;
      return result;
    }
    if ( *(_DWORD *)(v6 + 784) == 2 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids);
      Log(*(_QWORD *)(v6 + 1176), 256, 1397903953, 0, *(_QWORD *)(v6 + 1176));
      *(_QWORD *)(v6 + 2752) = Irp;
LABEL_17:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259;
    }
    goto LABEL_48;
  }
  if ( LowPart == 2232235 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        0xC0000000,
        3,
        12,
        (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids,
        *(_QWORD *)(v6 + 1176));
    Log(*(_QWORD *)(v6 + 1176), 256, 1397903944, 0, *(_QWORD *)(v6 + 1176));
    *(_QWORD *)(v6 + 2760) = Irp;
    goto LABEL_17;
  }
  if ( LowPart != 2229347 )
  {
    if ( LowPart <= 0x220420 )
    {
      if ( LowPart == 2229280 )
      {
        v10 = 1232023603;
      }
      else
      {
        switch ( LowPart )
        {
          case 0x220003u:
            v10 = 1232023604;
            break;
          case 0x220007u:
            goto LABEL_56;
          case 0x22000Fu:
            v10 = 1232023601;
            break;
          case 0x220013u:
            v10 = 1232023605;
            break;
          case 0x220017u:
            v10 = 1232023649;
            break;
          case 0x22001Bu:
            v10 = 1232023600;
            break;
          case 0x22001Fu:
            v10 = 1232023650;
            break;
          case 0x220020u:
            v10 = 1232023651;
            break;
          case 0x220027u:
            v10 = 1232023653;
            break;
          case 0x22002Bu:
            v10 = 1232023654;
            break;
          default:
            goto LABEL_52;
        }
      }
      goto LABEL_57;
    }
    if ( LowPart <= 0x22044F )
    {
      switch ( LowPart )
      {
        case 0x22044Fu:
          v10 = 1232023856;
          break;
        case 0x220424u:
          v10 = 1232023602;
          break;
        case 0x22042Cu:
          v10 = 1232023652;
          break;
        case 0x220433u:
          v10 = 1232023607;
          break;
        case 0x220437u:
          v10 = 1232023608;
          break;
        case 0x22043Bu:
          v10 = 1232023606;
          break;
        default:
LABEL_52:
          v10 = LowPart;
          break;
      }
LABEL_57:
      v11 = Context[8];
      if ( !v11 )
        UsbhTrapFatal_Dbg(Context, 0LL, a3, a4);
      if ( *(_DWORD *)v11 != 1329877064 )
        UsbhTrapFatal_Dbg(Context, Context[8], a3, a4);
      v12 = (KSPIN_LOCK *)(v11 + 1208);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 1208));
      v34 = v13;
      if ( *(_DWORD *)(v11 + 784) == 2 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 1208), v13);
        v15 = -1073741810;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
        if ( PoolWithTag )
        {
          *PoolWithTag = 0LL;
          v17 = v11 + 1216;
          PoolWithTag[1] = 0LL;
          PoolWithTag[2] = 0LL;
          PoolWithTag[4] = 0LL;
          *(_DWORD *)PoolWithTag = 1330201673;
          PoolWithTag[3] = Irp;
          *((_DWORD *)PoolWithTag + 8) = v10;
          v18 = PoolWithTag + 1;
          v19 = *(_QWORD **)(v17 + 8);
          *v18 = v17;
          v18[1] = v19;
          if ( *v19 != v17 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v17 + 8) = v18;
        }
        else
        {
          ++*(_DWORD *)(v11 + 1256);
        }
        KeReleaseSpinLock(v12, v34);
        v15 = 0;
      }
      if ( (v15 & 0xC0000000) == 0xC0000000 )
      {
        if ( LowPart == 2228227 )
          *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
        Irp->IoStatus.Status = v15;
        IofCompleteRequest(Irp, 0);
        return v15;
      }
      else if ( LowPart > 0x220420 )
      {
        if ( LowPart > 0x220443 )
        {
          v30 = LowPart - 2229327;
          if ( v30 )
          {
            v31 = v30 - 2916;
            if ( v31 )
            {
              v32 = v31 - 2557009;
              if ( v32 )
              {
                v33 = v32 - 4;
                if ( v33 )
                {
                  if ( v33 == 7 )
                  {
                    return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v6 + 1176), Context, Irp);
                  }
                  else
                  {
LABEL_115:
                    Status = Irp->IoStatus.Status;
LABEL_116:
                    IofCompleteRequest(Irp, 0);
                    UsbhDecPdoIoCount((ULONG_PTR)Context, (ULONG_PTR)Irp);
                    return Status;
                  }
                }
                else
                {
                  return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v6 + 1176), Context, Irp);
                }
              }
              else
              {
                return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v6 + 1176), Context, Irp);
              }
            }
            else
            {
              return UsbhFdoResetPdoPort(*(PDEVICE_OBJECT *)(v6 + 1176), (ULONG_PTR)Context, (ULONG_PTR)Irp);
            }
          }
          else
          {
            return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v6 + 1176), Context, Irp);
          }
        }
        else if ( LowPart == 2229315 )
        {
          return UsbhIdleIrp_Event(*(_QWORD *)(v6 + 1176), (_DWORD)Context, (_DWORD)Irp, 7, 0);
        }
        else
        {
          switch ( LowPart )
          {
            case 0x220424u:
              result = UsbhFdoReturnControllerName(*(_QWORD *)(v6 + 1176), Context, Irp);
              break;
            case 0x22042Cu:
LABEL_89:
              Status = -1073741637;
              Irp->IoStatus.Status = -1073741637;
              goto LABEL_116;
            case 0x220433u:
              result = UsbhFdoReturnDeviceHandle(*(_QWORD *)(v6 + 1176), Context, Irp, 0LL);
              break;
            case 0x220437u:
              v26 = *(_QWORD *)(v6 + 1176);
              v27 = Irp->Tail.Overlay.CurrentStackLocation;
              Status = -1073741811;
              PdoExt(Context);
              p_SecurityQos = &v27->Parameters.Create.SecurityContext->SecurityQos;
              if ( p_SecurityQos )
              {
                v29 = UsbhRefPdoDeviceHandle(v26, Context, v27->Parameters.QueryDirectory.FileName, 1212445810LL);
                *p_SecurityQos = v29;
                if ( v29 )
                  Status = 0;
              }
              Irp->IoStatus.Status = Status;
              goto LABEL_116;
            case 0x22043Bu:
              result = UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v6 + 1176), Context, Irp);
              break;
            case 0x22043Fu:
              result = UsbhFdoReturnTopologyAddress(*(_QWORD *)(v6 + 1176), Context, Irp);
              break;
            default:
              goto LABEL_115;
          }
        }
      }
      else if ( LowPart == 2229280 )
      {
        return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v6 + 1176), Context, Irp);
      }
      else
      {
        switch ( LowPart )
        {
          case 0x220003u:
            v20 = *(struct _DEVICE_OBJECT **)(v6 + 1176);
            if ( !v20 )
              UsbhTrapFatal_Dbg(0LL, 0LL, v14, 0LL);
            DeviceExtension = (PDEVICE_OBJECT *)v20->DeviceExtension;
            if ( !DeviceExtension )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), 0LL, 0LL, v20);
            if ( *(_DWORD *)DeviceExtension != 541218120 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), v20->DeviceExtension, DeviceExtension, v20);
            v22 = Context[8];
            if ( !v22 )
              UsbhTrapFatal_Dbg(Context, 0LL, DeviceExtension, v20);
            if ( *(_DWORD *)v22 != 1329877064 )
              UsbhTrapFatal_Dbg(Context, v22, DeviceExtension, v20);
            SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v22 + 1152);
            switch ( WORD1(SecurityContext->SecurityQos) )
            {
              case 0:
                result = UsbhFdoSelectConfigurationPdo(v20, Context, Irp);
                break;
              case 1:
                result = UsbhFdoSelectInterfacePdo(v20, Context, Irp);
                break;
              case 0x13:
                if ( (*(_DWORD *)(v22 + 1424) & 0x100000) == 0 )
                  goto LABEL_90;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_q(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v22,
                    1,
                    19,
                    (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids,
                    *(_QWORD *)(v22 + 840));
                goto LABEL_89;
              case 0x1E:
              case 0x30:
              case 0x31:
                result = UsbhFdoValidateConnectionPdo(v20, Context, Irp);
                break;
              case 0x2A:
                result = UsbhFdoGetMsDescriptorPdo(v20, Context, Irp);
                break;
              default:
LABEL_90:
                ++Irp->CurrentLocation;
                ++Irp->Tail.Overlay.CurrentStackLocation;
                v25 = IofCallDriver(DeviceExtension[152], Irp);
                UsbhDecPdoIoCount((ULONG_PTR)Context, (ULONG_PTR)Irp);
                result = v25;
                break;
            }
            break;
          case 0x220007u:
            return UsbhFdoResetPdoPort(*(PDEVICE_OBJECT *)(v6 + 1176), (ULONG_PTR)Context, (ULONG_PTR)Irp);
          case 0x22000Fu:
            result = UsbhFdoReturnRootHubPdo(*(_QWORD *)(v6 + 1176), Context, Irp);
            break;
          case 0x220013u:
            result = UsbhFdoReturnPortStatus(*(_QWORD *)(v6 + 1176), Context, Irp);
            break;
          case 0x220017u:
            Irp->IoStatus.Status = 0;
            IofCompleteRequest(Irp, 0);
            UsbhDecPdoIoCount((ULONG_PTR)Context, (ULONG_PTR)Irp);
            result = 0;
            break;
          case 0x22001Bu:
            result = UsbhFdoReturnHubCount(*(_QWORD *)(v6 + 1176), Context, Irp);
            break;
          case 0x22001Fu:
            result = UsbhFdoCyclePdoPort(*(_QWORD *)(v6 + 1176), (ULONG_PTR)Context, (ULONG_PTR)Irp);
            break;
          case 0x220020u:
            result = UsbhFdoReturnHubName(*(_QWORD *)(v6 + 1176), Context, Irp);
            break;
          case 0x220027u:
            result = UsbhFdoSubmitPdoIdleNotification(*(_QWORD *)(v6 + 1176), (ULONG_PTR)Context, (ULONG_PTR)Irp);
            break;
          case 0x22002Bu:
            result = UsbhFdoRecordFailure(*(_QWORD *)(v6 + 1176), (ULONG_PTR)Context, (ULONG_PTR)Irp);
            break;
          default:
            goto LABEL_115;
        }
      }
      return result;
    }
LABEL_48:
    switch ( LowPart )
    {
      case 0x220FB3u:
LABEL_56:
        v10 = 1232023609;
        goto LABEL_57;
      case 0x491404u:
        v10 = 1232023857;
        goto LABEL_57;
      case 0x491408u:
        v10 = 1232023858;
        goto LABEL_57;
      case 0x49140Fu:
        v10 = 1232023859;
        goto LABEL_57;
    }
    goto LABEL_52;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      0xC0000000,
      1,
      13,
      (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids,
      *(_QWORD *)(v6 + 840));
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  *(_DWORD *)(v6 + 1424) |= 0x100000u;
  return 0;
}
