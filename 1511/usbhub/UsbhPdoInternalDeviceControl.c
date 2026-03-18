/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0018D90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetPdo_AllowIo @ 0x1C000CF18 (UsbhSetPdo_AllowIo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0019330 (UsbhFdoReturnPortStatus.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C001E608 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C001EF60 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C001F03C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C001F3E0 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0025670 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0028AA4 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B87C (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B920 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C003BAF8 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC04 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E5D4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003E728 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E77C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003E858 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003E92C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EB24 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003EEEC (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003EF44 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003EFE8 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F07C (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004AA48 (USBHUB_TriggerCallBacks.c)
 *     UsbhIdleIrp_Event @ 0x1C00555F4 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(
        _QWORD *BugCheckParameter3,
        IRP *BugCheckParameter4,
        __int64 a3,
        __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v7; // r14
  unsigned int LowPart; // ebx
  __int64 v9; // rbp
  KSPIN_LOCK *v10; // r15
  KIRQL v11; // al
  KIRQL v12; // r12
  _QWORD *PoolWithTag; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  struct _DEVICE_OBJECT *v21; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v23; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  NTSTATUS v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbp
  unsigned int MsDescriptorPdo; // r15d
  _QWORD *v30; // rbx
  KIRQL v31; // r12
  _QWORD *v32; // rcx
  __int64 result; // rax
  _QWORD *v34; // r8
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  __int64 v39; // r15
  _IO_STACK_LOCATION *v40; // rbp
  unsigned int Status; // ebx
  __int64 *v42; // r14
  __int64 v43; // rax
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  __int64 v50; // rcx
  unsigned int v51; // ebx
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  unsigned int v56; // ebx
  int v57; // eax
  int v58; // [rsp+70h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = BugCheckParameter3[8];
  if ( !v7 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8], a3, a4);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v7 + 1176), 100LL);
      if ( *(_BYTE *)(v7 + 2717) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids);
        Log(*(_QWORD *)(v7 + 1176), 256, 1397903939, 0LL, *(_QWORD *)(v7 + 1176));
        UsbhSetPdo_AllowIo(v50, (__int64)BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        result = 0LL;
        *(_QWORD *)(v7 + 2760) = 0LL;
        *(_BYTE *)(v7 + 2717) = 0;
        return result;
      }
      if ( *(_DWORD *)(v7 + 784) != 2 )
        goto LABEL_120;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids);
      Log(*(_QWORD *)(v7 + 1176), 256, 1397903953, 0LL, *(_QWORD *)(v7 + 1176));
      *(_QWORD *)(v7 + 2760) = BugCheckParameter4;
LABEL_102:
      BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259LL;
    case 0x220FABu:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          3,
          12,
          (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
          *(_QWORD *)(v7 + 1176));
      Log(*(_QWORD *)(v7 + 1176), 256, 1397903944, 0LL, *(_QWORD *)(v7 + 1176));
      *(_QWORD *)(v7 + 2768) = BugCheckParameter4;
      goto LABEL_102;
    case 0x220463u:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          1,
          13,
          (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
          *(_QWORD *)(v7 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v7 + 1424) |= 0x80000u;
      return 0LL;
    case 0x220003u:
      v58 = 1232023604;
      goto LABEL_9;
    case 0x220013u:
      v58 = 1232023605;
      goto LABEL_9;
  }
  if ( LowPart <= 0x220424 )
  {
    if ( LowPart == 2229284 )
    {
      v58 = 1232023602;
      goto LABEL_9;
    }
    if ( LowPart > 0x22001F )
    {
      switch ( LowPart )
      {
        case 0x220020u:
          v58 = 1232023651;
          goto LABEL_9;
        case 0x220027u:
          v58 = 1232023653;
          goto LABEL_9;
        case 0x22002Bu:
          v58 = 1232023654;
          goto LABEL_9;
        case 0x220420u:
          v58 = 1232023603;
          goto LABEL_9;
      }
      goto LABEL_77;
    }
    if ( LowPart == 2228255 )
    {
      v58 = 1232023650;
      goto LABEL_9;
    }
    if ( LowPart != 2228231 )
    {
      switch ( LowPart )
      {
        case 0x22000Fu:
          v58 = 1232023601;
          goto LABEL_9;
        case 0x220017u:
          v58 = 1232023649;
          goto LABEL_9;
        case 0x22001Bu:
          v58 = 1232023600;
          goto LABEL_9;
      }
      goto LABEL_77;
    }
LABEL_127:
    v58 = 1232023609;
    goto LABEL_9;
  }
  if ( LowPart == 2229327 )
  {
    v58 = 1232023856;
    goto LABEL_9;
  }
  if ( LowPart > 0x22044F )
  {
LABEL_120:
    if ( LowPart != 2232243 )
    {
      switch ( LowPart )
      {
        case 0x491404u:
          v58 = 1232023857;
          goto LABEL_9;
        case 0x491408u:
          v58 = 1232023858;
          goto LABEL_9;
        case 0x49140Fu:
          v58 = 1232023859;
          goto LABEL_9;
      }
LABEL_77:
      v58 = LowPart;
      goto LABEL_9;
    }
    goto LABEL_127;
  }
  switch ( LowPart )
  {
    case 0x22042Cu:
      v58 = 1232023652;
      break;
    case 0x220433u:
      v58 = 1232023607;
      break;
    case 0x220437u:
      v58 = 1232023608;
      break;
    case 0x22043Bu:
      v58 = 1232023606;
      break;
    default:
      goto LABEL_77;
  }
LABEL_9:
  v9 = BugCheckParameter3[8];
  if ( !v9 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL, a3, a4);
  if ( *(_DWORD *)v9 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8], a3, a4);
  v10 = (KSPIN_LOCK *)(v9 + 1208);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 1208));
  v12 = v11;
  if ( *(_DWORD *)(v9 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 1208), v11);
    v20 = -1073741810;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v14 = v9 + 1216;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      *(_DWORD *)PoolWithTag = 1330201673;
      *((_DWORD *)PoolWithTag + 8) = v58;
      PoolWithTag[3] = BugCheckParameter4;
      v15 = PoolWithTag + 1;
      v16 = *(_QWORD **)(v14 + 8);
      *v15 = v14;
      v15[1] = v16;
      if ( *v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v14 + 8) = v15;
    }
    else
    {
      ++*(_DWORD *)(v9 + 1256);
    }
    KeReleaseSpinLock(v10, v12);
    v20 = 0;
  }
  if ( (v20 & 0xC0000000) == 0xC0000000 )
  {
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = v20;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v20;
  }
  if ( LowPart == 2228227 )
  {
    v21 = *(struct _DEVICE_OBJECT **)(v7 + 1176);
    if ( !v21 )
      UsbhTrapFatal_Dbg(0LL, 0LL, v18, 0LL);
    DeviceExtension = (PDEVICE_OBJECT *)v21->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v7 + 1176), 0LL, 0LL, v21);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v7 + 1176), v21->DeviceExtension, DeviceExtension, v21);
    v23 = BugCheckParameter3[8];
    if ( !v23 )
      UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL, DeviceExtension, v21);
    if ( *(_DWORD *)v23 != 1329877064 )
      UsbhTrapFatal_Dbg(BugCheckParameter3, v23, DeviceExtension, v21);
    SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    SecurityContext->AccessState = *(_ACCESS_STATE **)(v23 + 1152);
    if ( WORD1(SecurityContext->SecurityQos) <= 0x31u )
    {
      switch ( WORD1(SecurityContext->SecurityQos) )
      {
        case 0:
          v36 = UsbhFdoSelectConfigurationPdo(v21, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          goto LABEL_44;
        case 1:
          v36 = UsbhFdoSelectInterfacePdo(v21, BugCheckParameter3, BugCheckParameter4);
          goto LABEL_44;
        case 0x13:
          if ( (*(_DWORD *)(v23 + 1424) & 0x80000) == 0 )
            goto LABEL_24;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              WPP_GLOBAL_Control->DeviceExtension,
              v23,
              1,
              19,
              (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
              *(_QWORD *)(v23 + 840));
          goto LABEL_171;
        case 0x1E:
        case 0x30:
        case 0x31:
          v36 = UsbhFdoValidateConnectionPdo(v21, BugCheckParameter3, BugCheckParameter4);
LABEL_44:
          MsDescriptorPdo = v36;
          break;
        case 0x2A:
          MsDescriptorPdo = UsbhFdoGetMsDescriptorPdo(v21, BugCheckParameter3, BugCheckParameter4);
          break;
        default:
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      ++BugCheckParameter4->CurrentLocation;
      ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
      v25 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
      v28 = BugCheckParameter3[8];
      MsDescriptorPdo = v25;
      if ( !v28 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL, v26, v27);
      if ( *(_DWORD *)v28 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8], v26, v27);
      v30 = (_QWORD *)(v28 + 1216);
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 1208));
      if ( (_QWORD *)*v30 == v30 || (v32 = (_QWORD *)*v30) == 0LL || v32 == v30 )
      {
LABEL_175:
        v57 = *(_DWORD *)(v28 + 1256);
        if ( !v57 )
        {
          USBHUB_TriggerCallBacks(BugCheckParameter3);
          KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        }
        *(_DWORD *)(v28 + 1256) = v57 - 1;
      }
      else
      {
        while ( (IRP *)v32[2] != BugCheckParameter4 )
        {
          v32 = (_QWORD *)*v32;
          if ( v32 == v30 )
            goto LABEL_175;
        }
        v34 = (_QWORD *)*v32;
        v35 = (_QWORD *)v32[1];
        if ( *(_QWORD **)(*v32 + 8LL) != v32 || (_QWORD *)*v35 != v32 )
          __fastfail(3u);
        *v35 = v34;
        v34[1] = v35;
        ExFreePoolWithTag(v32 - 1, 0);
      }
      if ( (_QWORD *)*v30 != v30 || *(_DWORD *)(v28 + 1256) )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v28 + 1208), v31);
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v28 + 1208), v31);
        KeSetEvent((PRKEVENT)(v28 + 1232), 0, 0);
      }
    }
    return MsDescriptorPdo;
  }
  if ( LowPart == 2228243 )
    return UsbhFdoReturnPortStatus(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
  if ( LowPart <= 0x22042C )
  {
    if ( LowPart == 2229292 )
    {
LABEL_171:
      MsDescriptorPdo = -1073741637;
      BugCheckParameter4->IoStatus.Status = -1073741637;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return MsDescriptorPdo;
    }
    if ( LowPart > 0x220020 )
    {
      v51 = LowPart - 2228263;
      if ( !v51 )
        return UsbhFdoSubmitPdoIdleNotification(
                 *(_QWORD *)(v7 + 1176),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v52 = v51 - 4;
      if ( !v52 )
        return UsbhFdoRecordFailure(
                 *(_QWORD *)(v7 + 1176),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v53 = v52 - 1013;
      if ( !v53 )
        return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      if ( v53 == 4 )
        return UsbhFdoReturnControllerName(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      goto LABEL_157;
    }
    if ( LowPart == 2228256 )
      return UsbhFdoReturnHubName(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
    v44 = LowPart - 2228231;
    if ( v44 )
    {
      v45 = v44 - 8;
      if ( !v45 )
        return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      v46 = v45 - 8;
      if ( !v46 )
      {
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return 0LL;
      }
      v47 = v46 - 4;
      if ( !v47 )
        return UsbhFdoReturnHubCount(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      if ( v47 == 4 )
        return UsbhFdoCyclePdoPort(*(_QWORD *)(v7 + 1176), (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      goto LABEL_157;
    }
    return UsbhFdoResetPdoPort(
             *(PDEVICE_OBJECT *)(v7 + 1176),
             (ULONG_PTR)BugCheckParameter3,
             (ULONG_PTR)BugCheckParameter4);
  }
  if ( LowPart == 2229327 )
    return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
  if ( LowPart > 0x22044F )
  {
    v54 = LowPart - 2232243;
    if ( v54 )
    {
      v55 = v54 - 2557009;
      if ( !v55 )
        return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      v56 = v55 - 4;
      if ( !v56 )
        return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      if ( v56 != 7 )
        goto LABEL_157;
      return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
    }
    return UsbhFdoResetPdoPort(
             *(PDEVICE_OBJECT *)(v7 + 1176),
             (ULONG_PTR)BugCheckParameter3,
             (ULONG_PTR)BugCheckParameter4);
  }
  v37 = LowPart - 2229299;
  if ( !v37 )
    return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4, 0LL);
  v38 = v37 - 4;
  if ( !v38 )
  {
    v39 = *(_QWORD *)(v7 + 1176);
    v40 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    Status = -1073741811;
    PdoExt((__int64)BugCheckParameter3, v17, v18, v19);
    v42 = (__int64 *)v40->Parameters.Create.SecurityContext;
    if ( v42 )
    {
      v43 = UsbhRefPdoDeviceHandle(v39, BugCheckParameter3, v40->Parameters.QueryDirectory.FileName, 1212445810LL);
      *v42 = v43;
      if ( v43 )
        Status = 0;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    goto LABEL_61;
  }
  v48 = v38 - 4;
  if ( v48 )
  {
    v49 = v48 - 4;
    if ( !v49 )
      return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
    if ( v49 == 4 )
      return UsbhIdleIrp_Event(*(_QWORD *)(v7 + 1176), (_DWORD)BugCheckParameter3, (_DWORD)BugCheckParameter4, 7, 0);
LABEL_157:
    Status = BugCheckParameter4->IoStatus.Status;
LABEL_61:
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return Status;
  }
  return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
}
