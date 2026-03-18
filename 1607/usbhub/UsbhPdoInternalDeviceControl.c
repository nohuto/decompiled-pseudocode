/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0014400
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0005208 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0006F8C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0007028 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C00071F4 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhWait @ 0x1C0009D88 (UsbhWait.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00149A0 (UsbhFdoReturnPortStatus.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdo_AllowIo @ 0x1C001A68C (UsbhSetPdo_AllowIo.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0026804 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0029164 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003BC9C (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003BD40 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C003BF18 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003C024 (UsbhFdoValidateConnectionPdo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E8F4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003EA48 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003EA9C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003EB78 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003EC4C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EE44 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003F20C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003F264 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003F308 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F39C (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004B0E8 (USBHUB_TriggerCallBacks.c)
 *     UsbhIdleIrp_Event @ 0x1C0055C24 (UsbhIdleIrp_Event.c)
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
  __int64 v17; // r8
  unsigned int v18; // ebp
  struct _DEVICE_OBJECT *v19; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v21; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbp
  unsigned int MsDescriptorPdo; // r15d
  _QWORD *v28; // rbx
  KIRQL v29; // r12
  _QWORD *v30; // rcx
  __int64 result; // rax
  _QWORD *v32; // r8
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  __int64 v37; // r15
  _IO_STACK_LOCATION *v38; // rbp
  unsigned int Status; // ebx
  __int64 *v40; // r14
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  unsigned int v56; // ebx
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  int v62; // [rsp+70h] [rbp+8h]

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
      UsbhWait(*(_QWORD *)(v7 + 1176), 100);
      if ( *(_BYTE *)(v7 + 2717) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids);
        Log(*(_QWORD *)(v7 + 1176), 256, 1397903939, 0, *(_QWORD *)(v7 + 1176));
        UsbhSetPdo_AllowIo(v50, BugCheckParameter3);
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
          (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids);
      Log(*(_QWORD *)(v7 + 1176), 256, 1397903953, 0, *(_QWORD *)(v7 + 1176));
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
          (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
          *(_QWORD *)(v7 + 1176));
      Log(*(_QWORD *)(v7 + 1176), 256, 1397903944, 0, *(_QWORD *)(v7 + 1176));
      *(_QWORD *)(v7 + 2768) = BugCheckParameter4;
      goto LABEL_102;
    case 0x220463u:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          1,
          13,
          (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
          *(_QWORD *)(v7 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v7 + 1424) |= 0x80000u;
      return 0LL;
    case 0x220003u:
      v62 = 1232023604;
      goto LABEL_9;
    case 0x220013u:
      v62 = 1232023605;
      goto LABEL_9;
  }
  if ( LowPart <= 0x220424 )
  {
    if ( LowPart == 2229284 )
    {
      v62 = 1232023602;
      goto LABEL_9;
    }
    if ( LowPart > 0x22001F )
    {
      switch ( LowPart )
      {
        case 0x220020u:
          v62 = 1232023651;
          goto LABEL_9;
        case 0x220027u:
          v62 = 1232023653;
          goto LABEL_9;
        case 0x22002Bu:
          v62 = 1232023654;
          goto LABEL_9;
        case 0x220420u:
          v62 = 1232023603;
          goto LABEL_9;
      }
      goto LABEL_77;
    }
    if ( LowPart == 2228255 )
    {
      v62 = 1232023650;
      goto LABEL_9;
    }
    if ( LowPart != 2228231 )
    {
      switch ( LowPart )
      {
        case 0x22000Fu:
          v62 = 1232023601;
          goto LABEL_9;
        case 0x220017u:
          v62 = 1232023649;
          goto LABEL_9;
        case 0x22001Bu:
          v62 = 1232023600;
          goto LABEL_9;
      }
      goto LABEL_77;
    }
LABEL_127:
    v62 = 1232023609;
    goto LABEL_9;
  }
  if ( LowPart == 2229327 )
  {
    v62 = 1232023856;
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
          v62 = 1232023857;
          goto LABEL_9;
        case 0x491408u:
          v62 = 1232023858;
          goto LABEL_9;
        case 0x49140Fu:
          v62 = 1232023859;
          goto LABEL_9;
      }
LABEL_77:
      v62 = LowPart;
      goto LABEL_9;
    }
    goto LABEL_127;
  }
  switch ( LowPart )
  {
    case 0x22042Cu:
      v62 = 1232023652;
      break;
    case 0x220433u:
      v62 = 1232023607;
      break;
    case 0x220437u:
      v62 = 1232023608;
      break;
    case 0x22043Bu:
      v62 = 1232023606;
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
    v18 = -1073741810;
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
      *((_DWORD *)PoolWithTag + 8) = v62;
      PoolWithTag[3] = BugCheckParameter4;
      v15 = PoolWithTag + 1;
      v16 = *(_QWORD **)(v14 + 8);
      if ( *v16 != v14 )
        __fastfail(3u);
      *v15 = v14;
      v15[1] = v16;
      *v16 = v15;
      *(_QWORD *)(v14 + 8) = v15;
    }
    else
    {
      ++*(_DWORD *)(v9 + 1256);
    }
    KeReleaseSpinLock(v10, v12);
    v18 = 0;
  }
  if ( (v18 & 0xC0000000) == 0xC0000000 )
  {
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = v18;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v18;
  }
  if ( LowPart == 2228227 )
  {
    v19 = *(struct _DEVICE_OBJECT **)(v7 + 1176);
    if ( !v19 )
      UsbhTrapFatal_Dbg(0LL, 0LL, v17, 0LL);
    DeviceExtension = (PDEVICE_OBJECT *)v19->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v7 + 1176), 0LL, 0LL, v19);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v7 + 1176), v19->DeviceExtension, DeviceExtension, v19);
    v21 = BugCheckParameter3[8];
    if ( !v21 )
      UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL, DeviceExtension, v19);
    if ( *(_DWORD *)v21 != 1329877064 )
      UsbhTrapFatal_Dbg(BugCheckParameter3, v21, DeviceExtension, v19);
    SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    SecurityContext->AccessState = *(_ACCESS_STATE **)(v21 + 1152);
    if ( WORD1(SecurityContext->SecurityQos) <= 0x31u )
    {
      switch ( WORD1(SecurityContext->SecurityQos) )
      {
        case 0:
          v34 = UsbhFdoSelectConfigurationPdo(v19, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          goto LABEL_44;
        case 1:
          v34 = UsbhFdoSelectInterfacePdo(v19, BugCheckParameter3, BugCheckParameter4);
          goto LABEL_44;
        case 0x13:
          if ( (*(_DWORD *)(v21 + 1424) & 0x80000) == 0 )
            goto LABEL_24;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              WPP_GLOBAL_Control->DeviceExtension,
              v21,
              1,
              19,
              (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
              *(_QWORD *)(v21 + 840));
          goto LABEL_171;
        case 0x1E:
        case 0x30:
        case 0x31:
          v34 = UsbhFdoValidateConnectionPdo(v19, BugCheckParameter3, BugCheckParameter4);
LABEL_44:
          MsDescriptorPdo = v34;
          break;
        case 0x2A:
          MsDescriptorPdo = UsbhFdoGetMsDescriptorPdo(v19, BugCheckParameter3, BugCheckParameter4);
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
      v23 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
      v26 = BugCheckParameter3[8];
      MsDescriptorPdo = v23;
      if ( !v26 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL, v24, v25);
      if ( *(_DWORD *)v26 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8], v24, v25);
      v28 = (_QWORD *)(v26 + 1216);
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 1208));
      if ( (_QWORD *)*v28 == v28 || (v30 = (_QWORD *)*v28) == 0LL || v30 == v28 )
      {
LABEL_175:
        v61 = *(_DWORD *)(v26 + 1256);
        if ( !v61 )
        {
          USBHUB_TriggerCallBacks(BugCheckParameter3);
          KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        }
        *(_DWORD *)(v26 + 1256) = v61 - 1;
      }
      else
      {
        while ( (IRP *)v30[2] != BugCheckParameter4 )
        {
          v30 = (_QWORD *)*v30;
          if ( v30 == v28 )
            goto LABEL_175;
        }
        v32 = (_QWORD *)*v30;
        v33 = (_QWORD *)v30[1];
        if ( *(_QWORD **)(*v30 + 8LL) != v30 || (_QWORD *)*v33 != v30 )
          __fastfail(3u);
        *v33 = v32;
        v32[1] = v33;
        ExFreePoolWithTag(v30 - 1, 0);
      }
      if ( (_QWORD *)*v28 != v28 || *(_DWORD *)(v26 + 1256) )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 1208), v29);
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 1208), v29);
        KeSetEvent((PRKEVENT)(v26 + 1232), 0, 0);
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
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v59, v60);
      return MsDescriptorPdo;
    }
    if ( LowPart > 0x220020 )
    {
      v53 = LowPart - 2228263;
      if ( !v53 )
        return UsbhFdoSubmitPdoIdleNotification(
                 *(_QWORD *)(v7 + 1176),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v54 = v53 - 4;
      if ( !v54 )
        return UsbhFdoRecordFailure(
                 *(_QWORD *)(v7 + 1176),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v55 = v54 - 1013;
      if ( !v55 )
        return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      if ( v55 == 4 )
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
        return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v7 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v46 = v45 - 8;
      if ( !v46 )
      {
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v51, v52);
        return 0LL;
      }
      v47 = v46 - 4;
      if ( !v47 )
        return UsbhFdoReturnHubCount(*(_QWORD *)(v7 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
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
    return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v7 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  if ( LowPart > 0x22044F )
  {
    v56 = LowPart - 2232243;
    if ( v56 )
    {
      v57 = v56 - 2557009;
      if ( !v57 )
        return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      v58 = v57 - 4;
      if ( !v58 )
        return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
      if ( v58 != 7 )
        goto LABEL_157;
      return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
    }
    return UsbhFdoResetPdoPort(
             *(PDEVICE_OBJECT *)(v7 + 1176),
             (ULONG_PTR)BugCheckParameter3,
             (ULONG_PTR)BugCheckParameter4);
  }
  v35 = LowPart - 2229299;
  if ( !v35 )
    return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4, 0LL);
  v36 = v35 - 4;
  if ( !v36 )
  {
    v37 = *(_QWORD *)(v7 + 1176);
    v38 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    Status = -1073741811;
    PdoExt(BugCheckParameter3);
    v40 = (__int64 *)v38->Parameters.Create.SecurityContext;
    if ( v40 )
    {
      v41 = UsbhRefPdoDeviceHandle(v37, BugCheckParameter3, v38->Parameters.QueryDirectory.FileName, 1212445810LL);
      *v40 = v41;
      if ( v41 )
        Status = 0;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    goto LABEL_61;
  }
  v48 = v36 - 4;
  if ( v48 )
  {
    v49 = v48 - 4;
    if ( !v49 )
      return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v7 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    if ( v49 == 4 )
      return UsbhIdleIrp_Event(*(_QWORD *)(v7 + 1176), (_DWORD)BugCheckParameter3, (_DWORD)BugCheckParameter4, 7, 0);
LABEL_157:
    Status = BugCheckParameter4->IoStatus.Status;
LABEL_61:
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v42, v43);
    return Status;
  }
  return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v7 + 1176), BugCheckParameter3, BugCheckParameter4);
}
