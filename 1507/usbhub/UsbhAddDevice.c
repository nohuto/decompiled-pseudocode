/*
 * XREFs of UsbhAddDevice @ 0x1C00094A0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_FDO_Pnp_State @ 0x1C0009C50 (Usbh_FDO_Pnp_State.c)
 *     UsbhReferenceListOpen @ 0x1C0009F98 (UsbhReferenceListOpen.c)
 *     UsbhAssignHubNumber @ 0x1C000A13C (UsbhAssignHubNumber.c)
 *     UsbhRawWait @ 0x1C000A400 (UsbhRawWait.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhReleaseHubNumber @ 0x1C004B6D4 (UsbhReleaseHubNumber.c)
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
  char *v12; // rbx
  PDEVICE_OBJECT v13; // rax
  PDEVICE_OBJECT v14; // rax
  PDEVICE_OBJECT v15; // rax
  PDEVICE_OBJECT v16; // rax
  PDEVICE_OBJECT v17; // rax
  PDEVICE_OBJECT v18; // rax
  int v19; // ebx
  __int64 v20; // rax
  PDEVICE_OBJECT v21; // rsi
  __int64 v22; // rdi
  unsigned int i; // ebx
  void (__fastcall **v24)(PDEVICE_OBJECT, __int64); // rdx
  KIRQL v25; // al
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // r10
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
      (__int64)&WPP_0699480349a52c2338640249ccf2c1c3_Traceguids);
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
  UsbhRawWait((unsigned int)Usbh_Long_AddDevice);
  UsbhAssignHubNumber(SourceDevice);
  v11 = WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12;
  v12 = (char *)(FdoExt(SourceDevice) + 5280);
  memset(v12, 0, v11);
  *((_QWORD *)DeviceExtension + 111) = v12;
  *((_DWORD *)DeviceExtension + 220) = 0;
  *((_DWORD *)DeviceExtension + 221) = (v11 >> 5) - 1;
  *((_QWORD *)DeviceExtension + 112) = &v12[(v11 & 0xFFFFFFE0) - 32];
  v13 = SourceDevice;
  *((_QWORD *)DeviceExtension + 175) = SourceDevice;
  *((_QWORD *)DeviceExtension + 174) = v13;
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
  v14 = SourceDevice;
  *((_QWORD *)DeviceExtension + 197) = SourceDevice;
  *((_QWORD *)DeviceExtension + 196) = v14;
  *((_QWORD *)DeviceExtension + 195) = 2017613128LL;
  *((_DWORD *)DeviceExtension + 418) = 1734964085;
  *((_DWORD *)DeviceExtension + 406) = 1734964085;
  *((_DWORD *)DeviceExtension + 402) = 1734964085;
  *((_DWORD *)DeviceExtension + 398) = 1734964085;
  *((_DWORD *)DeviceExtension + 409) = 1734964085;
  *((_DWORD *)DeviceExtension + 412) = 1734964085;
  *((_DWORD *)DeviceExtension + 415) = 1734964085;
  *((_DWORD *)DeviceExtension + 420) = 1734964085;
  v15 = SourceDevice;
  *((_QWORD *)DeviceExtension + 219) = SourceDevice;
  *((_DWORD *)DeviceExtension + 434) = 2017613128;
  *((_DWORD *)DeviceExtension + 435) = 4;
  *((_QWORD *)DeviceExtension + 218) = v15;
  *((_DWORD *)DeviceExtension + 462) = 1734964085;
  *((_DWORD *)DeviceExtension + 450) = 1734964085;
  *((_DWORD *)DeviceExtension + 446) = 1734964085;
  *((_DWORD *)DeviceExtension + 442) = 1734964085;
  *((_DWORD *)DeviceExtension + 453) = 1734964085;
  *((_DWORD *)DeviceExtension + 456) = 1734964085;
  *((_DWORD *)DeviceExtension + 459) = 1734964085;
  *((_DWORD *)DeviceExtension + 464) = 1734964085;
  v16 = SourceDevice;
  *((_QWORD *)DeviceExtension + 241) = SourceDevice;
  *((_QWORD *)DeviceExtension + 240) = v16;
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
  v17 = SourceDevice;
  *((_QWORD *)DeviceExtension + 263) = SourceDevice;
  *((_QWORD *)DeviceExtension + 262) = v17;
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
  v18 = SourceDevice;
  *((_QWORD *)DeviceExtension + 285) = SourceDevice;
  *((_QWORD *)DeviceExtension + 284) = v18;
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
  v19 = UsbhReferenceListOpen(SourceDevice);
  if ( v19 >= 0 )
  {
    v20 = FdoExt(SourceDevice);
    v21 = SourceDevice;
    v22 = v20;
    for ( i = 0; i < 0xA; ++i )
    {
      v24 = (void (__fastcall **)(PDEVICE_OBJECT, __int64))((char *)&HubModule + 56 * i);
      if ( v24 && *v24 )
        (*v24)(v21, v22 + 1384);
    }
    SourceDevice->Flags |= 0x2000u;
    SourceDevice->Flags &= ~0x80u;
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)DeviceExtension + 314) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    v26 = FdoExt(SourceDevice);
    v19 = Usbh_FDO_Pnp_State(v26 + 1384, 1LL);
  }
  Log((_DWORD)SourceDevice, 2, 1749116004, 0, v19);
  if ( (v19 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)SourceDevice, 2, 1749115937, v27, v28);
    UsbhReleaseHubNumber(SourceDevice);
    IoDetachDevice(v3);
    IoDeleteDevice(SourceDevice);
  }
  return (unsigned int)v19;
}
