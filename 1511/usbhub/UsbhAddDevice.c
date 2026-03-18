/*
 * XREFs of UsbhAddDevice @ 0x1C001D8F0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRawWait @ 0x1C001BFE0 (UsbhRawWait.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001E0A0 (Usbh_FDO_Pnp_State.c)
 *     UsbhReferenceListOpen @ 0x1C001E3E8 (UsbhReferenceListOpen.c)
 *     UsbhAssignHubNumber @ 0x1C001E58C (UsbhAssignHubNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhReleaseHubNumber @ 0x1C004B684 (UsbhReleaseHubNumber.c)
 */

__int64 __fastcall UsbhAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT TargetDevice)
{
  struct _DEVICE_OBJECT *v3; // r15
  char *DeviceExtension; // r14
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  PDEVICE_OBJECT v9; // rcx
  PDEVICE_OBJECT v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rbx
  PDEVICE_OBJECT v16; // rax
  PDEVICE_OBJECT v17; // rax
  PDEVICE_OBJECT v18; // rax
  PDEVICE_OBJECT v19; // rax
  PDEVICE_OBJECT v20; // rax
  PDEVICE_OBJECT v21; // rax
  __int64 v22; // rdx
  int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // rax
  PDEVICE_OBJECT v27; // rsi
  _DWORD *v28; // rdi
  unsigned int i; // ebx
  void (__fastcall **v30)(PDEVICE_OBJECT, __int64); // rdx
  KIRQL v31; // al
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rax
  __int64 v36; // r9
  __int64 v37; // r10
  PDEVICE_OBJECT SourceDevice; // [rsp+80h] [rbp+40h] BYREF

  SourceDevice = 0LL;
  v3 = 0LL;
  DeviceExtension = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids);
  v6 = IoCreateDevice(
         DriverObject,
         (WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12) + 5280,
         0LL,
         0x8600u,
         0x80u,
         0,
         &SourceDevice);
  if ( v6 >= 0 )
  {
    if ( !SourceDevice )
      return 3221225473LL;
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(SourceDevice, DriverObject, v7, v8);
    *(_DWORD *)DeviceExtension = 541218120;
    *((_QWORD *)DeviceExtension + 1) = USBHUB_Triage_Info;
  }
  v9 = SourceDevice;
  if ( !SourceDevice )
    return 3221225473LL;
  if ( v6 >= 0 )
  {
    v10 = IoAttachDeviceToDeviceStack(SourceDevice, TargetDevice);
    v9 = SourceDevice;
    v3 = v10;
    if ( !v10 )
    {
      IoDeleteDevice(SourceDevice);
      return 3221225473LL;
    }
  }
  if ( !v9 )
    UsbhTrapFatal_Dbg(0LL, DriverObject, v7, v8);
  if ( v6 < 0 )
    UsbhTrapFatal_Dbg(v9, DriverObject, v7, v8);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), 0x42554855u, 0, 0, 0x20u);
  *((_QWORD *)DeviceExtension + 150) = SourceDevice;
  *((_QWORD *)DeviceExtension + 149) = TargetDevice;
  *((_QWORD *)DeviceExtension + 171) = Usbh_FDO_WaitPnpAdd;
  *((_QWORD *)DeviceExtension + 151) = v3;
  *((_QWORD *)DeviceExtension + 100) = DeviceExtension + 2936;
  *((_DWORD *)DeviceExtension + 340) = 1;
  *((_DWORD *)DeviceExtension + 685) = 1;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2744), NotificationEvent, 0);
  KeInitializeSemaphore((PRKSEMAPHORE)DeviceExtension + 155, 1, 1);
  *((_QWORD *)DeviceExtension + 161) = -1LL;
  *((_QWORD *)DeviceExtension + 162) = -1LL;
  *(_QWORD *)(DeviceExtension + 1268) = -1LL;
  *(_QWORD *)(DeviceExtension + 1276) = -1LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 632);
  UsbhRawWait(Usbh_Long_AddDevice);
  UsbhAssignHubNumber(SourceDevice);
  v11 = WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12;
  v15 = FdoExt((__int64)SourceDevice, v12, v13, v14) + 1320;
  memset(v15, 0, v11);
  *((_QWORD *)DeviceExtension + 111) = v15;
  *((_DWORD *)DeviceExtension + 220) = 0;
  *((_DWORD *)DeviceExtension + 221) = (v11 >> 5) - 1;
  *((_QWORD *)DeviceExtension + 112) = (char *)v15 + (v11 & 0xFFFFFFE0) - 32;
  v16 = SourceDevice;
  *((_QWORD *)DeviceExtension + 175) = SourceDevice;
  *((_QWORD *)DeviceExtension + 174) = v16;
  *((_QWORD *)DeviceExtension + 173) = 2017613128LL;
  *((_DWORD *)DeviceExtension + 374) = 1734964085;
  *((_DWORD *)DeviceExtension + 362) = 1734964085;
  *((_DWORD *)DeviceExtension + 358) = 1734964085;
  *((_DWORD *)DeviceExtension + 354) = 1734964085;
  *((_DWORD *)DeviceExtension + 365) = 1734964085;
  *((_DWORD *)DeviceExtension + 368) = 1734964085;
  *((_DWORD *)DeviceExtension + 371) = 1734964085;
  *((_DWORD *)DeviceExtension + 376) = 1734964085;
  *((_DWORD *)DeviceExtension + 384) = 0;
  v17 = SourceDevice;
  *((_QWORD *)DeviceExtension + 197) = SourceDevice;
  *((_QWORD *)DeviceExtension + 196) = v17;
  *((_QWORD *)DeviceExtension + 195) = 2017613128LL;
  *((_DWORD *)DeviceExtension + 418) = 1734964085;
  *((_DWORD *)DeviceExtension + 406) = 1734964085;
  *((_DWORD *)DeviceExtension + 402) = 1734964085;
  *((_DWORD *)DeviceExtension + 398) = 1734964085;
  *((_DWORD *)DeviceExtension + 409) = 1734964085;
  *((_DWORD *)DeviceExtension + 412) = 1734964085;
  *((_DWORD *)DeviceExtension + 415) = 1734964085;
  *((_DWORD *)DeviceExtension + 420) = 1734964085;
  v18 = SourceDevice;
  *((_QWORD *)DeviceExtension + 219) = SourceDevice;
  *((_DWORD *)DeviceExtension + 434) = 2017613128;
  *((_DWORD *)DeviceExtension + 435) = 4;
  *((_QWORD *)DeviceExtension + 218) = v18;
  *((_DWORD *)DeviceExtension + 462) = 1734964085;
  *((_DWORD *)DeviceExtension + 450) = 1734964085;
  *((_DWORD *)DeviceExtension + 446) = 1734964085;
  *((_DWORD *)DeviceExtension + 442) = 1734964085;
  *((_DWORD *)DeviceExtension + 453) = 1734964085;
  *((_DWORD *)DeviceExtension + 456) = 1734964085;
  *((_DWORD *)DeviceExtension + 459) = 1734964085;
  *((_DWORD *)DeviceExtension + 464) = 1734964085;
  v19 = SourceDevice;
  *((_QWORD *)DeviceExtension + 241) = SourceDevice;
  *((_QWORD *)DeviceExtension + 240) = v19;
  *((_DWORD *)DeviceExtension + 478) = 2017613128;
  *((_DWORD *)DeviceExtension + 479) = 5;
  *((_DWORD *)DeviceExtension + 506) = 1734964085;
  *((_DWORD *)DeviceExtension + 494) = 1734964085;
  *((_DWORD *)DeviceExtension + 490) = 1734964085;
  *((_DWORD *)DeviceExtension + 486) = 1734964085;
  *((_DWORD *)DeviceExtension + 497) = 1734964085;
  *((_DWORD *)DeviceExtension + 500) = 1734964085;
  *((_DWORD *)DeviceExtension + 503) = 1734964085;
  *((_DWORD *)DeviceExtension + 508) = 1734964085;
  v20 = SourceDevice;
  *((_QWORD *)DeviceExtension + 263) = SourceDevice;
  *((_QWORD *)DeviceExtension + 262) = v20;
  *((_DWORD *)DeviceExtension + 522) = 2017613128;
  *((_DWORD *)DeviceExtension + 523) = 6;
  *((_DWORD *)DeviceExtension + 550) = 1734964085;
  *((_DWORD *)DeviceExtension + 538) = 1734964085;
  *((_DWORD *)DeviceExtension + 534) = 1734964085;
  *((_DWORD *)DeviceExtension + 530) = 1734964085;
  *((_DWORD *)DeviceExtension + 541) = 1734964085;
  *((_DWORD *)DeviceExtension + 544) = 1734964085;
  *((_DWORD *)DeviceExtension + 547) = 1734964085;
  *((_DWORD *)DeviceExtension + 552) = 1734964085;
  v21 = SourceDevice;
  *((_QWORD *)DeviceExtension + 285) = SourceDevice;
  *((_QWORD *)DeviceExtension + 284) = v21;
  *((_DWORD *)DeviceExtension + 566) = 2017613128;
  *((_DWORD *)DeviceExtension + 567) = 8;
  *((_DWORD *)DeviceExtension + 594) = 1734964085;
  *((_DWORD *)DeviceExtension + 582) = 1734964085;
  *((_DWORD *)DeviceExtension + 578) = 1734964085;
  *((_DWORD *)DeviceExtension + 574) = 1734964085;
  *((_DWORD *)DeviceExtension + 585) = 1734964085;
  *((_DWORD *)DeviceExtension + 588) = 1734964085;
  *((_DWORD *)DeviceExtension + 591) = 1734964085;
  *((_DWORD *)DeviceExtension + 596) = 1734964085;
  IoRegisterShutdownNotification(SourceDevice);
  v23 = UsbhReferenceListOpen(SourceDevice);
  if ( v23 >= 0 )
  {
    v26 = FdoExt((__int64)SourceDevice, v22, v24, v25);
    v27 = SourceDevice;
    v28 = v26;
    for ( i = 0; i < 0xA; ++i )
    {
      v30 = (void (__fastcall **)(PDEVICE_OBJECT, __int64))((char *)&HubModule + 56 * i);
      if ( v30 && *v30 )
        (*v30)(v27, (__int64)(v28 + 346));
    }
    SourceDevice->Flags |= 0x2000u;
    SourceDevice->Flags &= ~0x80u;
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)DeviceExtension + 314) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v31);
    v35 = FdoExt((__int64)SourceDevice, v32, v33, v34);
    v23 = Usbh_FDO_Pnp_State(v35 + 346, 1LL);
  }
  Log((__int64)SourceDevice, 2, 1749116004, 0LL, v23);
  if ( (v23 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)SourceDevice, 2, 1749115937, v36, v37);
    UsbhReleaseHubNumber(SourceDevice);
    IoDetachDevice(v3);
    IoDeleteDevice(SourceDevice);
  }
  return (unsigned int)v23;
}
