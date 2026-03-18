/*
 * XREFs of UsbhCreatePdo @ 0x1C0005A80
 * Callers:
 *     UsbhPortConnect @ 0x1C001BDA0 (UsbhPortConnect.c)
 * Callees:
 *     UsbhBuildCompatibleID @ 0x1C00074EC (UsbhBuildCompatibleID.c)
 *     UsbhGetLocationIdString @ 0x1C0007648 (UsbhGetLocationIdString.c)
 *     UsbhBuildDeviceID @ 0x1C0007730 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0007ACC (UsbhBuildHardwareID.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C000BD7C (SET_PDO_SWPNPSTATE.c)
 *     UsbhConnectPdoToHub @ 0x1C000D000 (UsbhConnectPdoToHub.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhSetPortData @ 0x1C000D2B4 (UsbhSetPortData.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncPdoIoCount @ 0x1C001EE40 (UsbhIncPdoIoCount.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0044FA4 (Usbh_ErrorDisconnect_PdoEvent.c)
 */

__int64 __fastcall UsbhCreatePdo(__int64 a1, __int64 a2)
{
  ULONG v3; // esi
  __int64 v5; // r13
  WCHAR *PoolWithTag; // rax
  WCHAR *v7; // rdi
  __int128 v8; // xmm1
  NTSTATUS appended; // ebx
  __int64 v10; // rdi
  int v11; // r9d
  char *DeviceExtension; // rbx
  struct _UNICODE_STRING v13; // xmm0
  POOL_TYPE v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r10
  WCHAR *v17; // rsi
  ULONG v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // r10
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // eax
  __int64 v30; // r8
  int v31; // edx
  int v32; // r8d
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-89h] BYREF
  __int128 v35; // [rsp+48h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING v38; // [rsp+78h] [rbp-51h] BYREF
  __int128 v39; // [rsp+88h] [rbp-41h]
  WCHAR SourceString[32]; // [rsp+A0h] [rbp-29h] BYREF

  DeviceObject = 0LL;
  v3 = 0;
  Log(a1, 256, 1666204751, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids);
  v5 = FdoExt(a1);
  while ( 1 )
  {
    memset(SourceString, 0, sizeof(SourceString));
    v35 = *(_OWORD *)L"\\Device\\USBPDO-";
    v39 = *(_OWORD *)L"USBPDO-";
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x60uLL, 0x42554855u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0x60uLL);
    v8 = v39;
    *(_OWORD *)v7 = v35;
    *((_OWORD *)v7 + 1) = v8;
    RtlInitUnicodeString(&DestinationString, v7);
    DestinationString.MaximumLength = 96;
    RtlInitUnicodeString(&String, SourceString);
    String.MaximumLength = 64;
    appended = RtlIntegerToUnicodeString(v3, 0xAu, &String);
    if ( appended >= 0 )
      appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( (appended & 0xC0000000) == 0xC0000000 )
      ExFreePoolWithTag(v7, 0);
    if ( appended >= 0 )
    {
      appended = IoCreateDevice(
                   (PDRIVER_OBJECT)WPP_MAIN_CB.Queue.ListEntry.Flink,
                   0xBD8u,
                   &DestinationString,
                   0x22u,
                   0,
                   0,
                   &DeviceObject);
      if ( appended >= 0 )
        goto LABEL_13;
      RtlFreeUnicodeString(&DestinationString);
    }
    ++v3;
    if ( appended != -1073741771 )
    {
LABEL_13:
      LODWORD(v10) = -1073741670;
      goto LABEL_14;
    }
  }
  LODWORD(v10) = -1073741670;
  appended = -1073741670;
LABEL_14:
  Log(a1, 256, 1668310065, a2, appended);
  if ( !DeviceObject )
    appended = -1073741670;
  if ( (appended & 0xC0000000) == 0xC0000000 )
    return (unsigned int)appended;
  DeviceObject->StackSize = *(_BYTE *)(*(_QWORD *)(v5 + 1208) + 76LL) + 1;
  DeviceObject->Flags |= 0x2000u;
  Log(a1, 256, 1666204721, v11, (__int64)DeviceObject);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(_DWORD *)DeviceExtension = 1329877064;
  v13 = DestinationString;
  *((_QWORD *)DeviceExtension + 144) = 0xFEFEFEFEFEFEFEFEuLL;
  *((_DWORD *)DeviceExtension + 286) = 0;
  *(struct _UNICODE_STRING *)(DeviceExtension + 2648) = v13;
  *((_DWORD *)DeviceExtension + 586) = -1;
  *((_DWORD *)DeviceExtension + 293) = *(_DWORD *)(*(_QWORD *)(v5 + 3016) + 4LL * *(unsigned __int16 *)(a2 + 4));
  *((_DWORD *)DeviceExtension + 196) = 1;
  *((_DWORD *)DeviceExtension + 594) = 1;
  *((_DWORD *)DeviceExtension + 734) = 1000;
  SET_PDO_HWPNPSTATE(DeviceObject, 1LL, 7LL);
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_DWORD *)DeviceExtension + 236) = 2017613128;
  *((_DWORD *)DeviceExtension + 237) = 1;
  *((_QWORD *)DeviceExtension + 119) = a1;
  *((_DWORD *)DeviceExtension + 264) = 1734964085;
  *((_DWORD *)DeviceExtension + 252) = 1734964085;
  *((_DWORD *)DeviceExtension + 248) = 1734964085;
  *((_DWORD *)DeviceExtension + 244) = 1734964085;
  *((_DWORD *)DeviceExtension + 255) = 1734964085;
  *((_DWORD *)DeviceExtension + 258) = 1734964085;
  *((_DWORD *)DeviceExtension + 261) = 1734964085;
  *((_DWORD *)DeviceExtension + 266) = 1734964085;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_QWORD *)DeviceExtension + 314) = MEMORY[0xFFFFF78000000014];
  KeInitializeEvent((PRKEVENT)DeviceExtension + 98, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2888), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1232), NotificationEvent, 0);
  *((_QWORD *)DeviceExtension + 153) = DeviceExtension + 1216;
  *((_QWORD *)DeviceExtension + 152) = DeviceExtension + 1216;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1288), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 159) = DeviceExtension + 1264;
  *((_QWORD *)DeviceExtension + 158) = DeviceExtension + 1264;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2048), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2912), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2864), SynchronizationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 348);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 114, SynchronizationEvent, 0);
  Log(a1, 0x2000, 1768843604, (_DWORD)DeviceExtension + 1696, (__int64)UsbhDriverNotFoundTimer);
  v14 = ExDefaultNonPagedPoolType;
  *(_QWORD *)v15 = 1332899156LL;
  *(_QWORD *)(v15 + 48) = v16;
  *(_DWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 72) = 1145980532;
  v17 = (WCHAR *)ExAllocatePoolWithTag(v14, 0x10uLL, 0x42554855u);
  if ( !v17 )
    goto LABEL_29;
  *(_QWORD *)v17 = 0LL;
  *((_QWORD *)v17 + 1) = 0LL;
  RtlInitUnicodeString(&v38, v17);
  v18 = *(unsigned __int16 *)(a2 + 4);
  v38.MaximumLength = 16;
  LODWORD(v10) = RtlIntegerToUnicodeString(v18, 0xAu, &v38);
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    ExFreePoolWithTag(v17, 0);
    goto LABEL_29;
  }
  *((_QWORD *)DeviceExtension + 268) = v17;
  *((_DWORD *)DeviceExtension + 535) = v38.MaximumLength;
  Log(a1, 256, 1668310066, a2, (__int64)v17);
  v19 = UsbhBuildDeviceID(a1, 0LL, DeviceExtension + 2072);
  v10 = v19;
  v20 = a1;
  if ( (v19 & 0xC0000000) == 0xC0000000 )
  {
    v32 = 1668302129;
    goto LABEL_28;
  }
  v21 = UsbhBuildHardwareID(a1, 0LL, DeviceExtension + 2088);
  v10 = v21;
  v20 = a1;
  if ( (v21 & 0xC0000000) == 0xC0000000 )
  {
    v32 = 1668302130;
    goto LABEL_28;
  }
  v22 = UsbhBuildCompatibleID(a1, 0LL, DeviceExtension + 2104);
  v10 = v22;
  if ( (v22 & 0xC0000000) == 0xC0000000 )
  {
    v32 = 1668302131;
LABEL_27:
    v20 = a1;
LABEL_28:
    Log(v20, 256, v32, (_DWORD)DeviceObject, v10);
    goto LABEL_29;
  }
  v23 = UsbhConnectPdoToHub(DeviceObject, a1);
  v10 = v23;
  if ( (v23 & 0xC0000000) == 0xC0000000 )
  {
    v32 = 1668302132;
    goto LABEL_27;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 151);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 292);
  *((_QWORD *)DeviceExtension + 283) = DeviceExtension + 2256;
  *((_QWORD *)DeviceExtension + 282) = DeviceExtension + 2256;
  IoCsqInitialize(
    (PIO_CSQ)(DeviceExtension + 2272),
    UsbhInsertPdoWakeIrp,
    UsbhRemovePdoWakeIrp,
    UsbhPeekNextPdoWakeIrp,
    UsbhAcquirePdoWakeIrpLock,
    UsbhReleasePdoWakeIrpLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)UsbhCompleteCanceledPdoWakeIrp);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 190);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 255);
  *((_QWORD *)DeviceExtension + 181) = DeviceExtension + 1440;
  *((_QWORD *)DeviceExtension + 180) = DeviceExtension + 1440;
  IoCsqInitialize(
    (PIO_CSQ)(DeviceExtension + 1456),
    UsbhInsertPdoIdleIrp,
    UsbhRemovePdoIdleIrp,
    UsbhPeekNextPdoIdleIrp,
    UsbhAcquirePdoIdleIrpLock,
    UsbhReleasePdoIdleIrpLock,
    UsbhCompleteCanceledPdoIdleIrp);
  Log(a1, 0x2000, 1768843604, (_DWORD)DeviceExtension + 1536, (__int64)UsbhIdleIrpRetryTimer);
  *(_QWORD *)(v24 + 48) = v25;
  *(_QWORD *)v24 = 1332899156LL;
  *(_DWORD *)(v24 + 8) = 0;
  *(_DWORD *)(v24 + 72) = 1231318117;
  Log(a1, 0x2000, v26, (_DWORD)DeviceExtension + 1616, (__int64)UsbhSS_WakeIrpRetryTimer);
  *(_QWORD *)v27 = 1332899156LL;
  *(_QWORD *)(v27 + 48) = v28;
  *(_DWORD *)(v27 + 8) = 0;
  *(_DWORD *)(v27 + 72) = 1144018785;
  KeInitializeSemaphore((PRKSEMAPHORE)(DeviceExtension + 2544), 1, 1);
  *((_QWORD *)DeviceExtension + 114) = -1LL;
  *((_QWORD *)DeviceExtension + 115) = -1LL;
  *(_QWORD *)(DeviceExtension + 892) = -1LL;
  *(_QWORD *)(DeviceExtension + 900) = -1LL;
  v29 = UsbhIncPdoIoCount(DeviceObject, DeviceObject, 1162637161LL, 0LL);
  v10 = v29;
  if ( (v29 & 0xC0000000) != 0xC0000000 )
  {
    *((_DWORD *)DeviceExtension + 354) |= 1u;
    *((_QWORD *)DeviceExtension + 105) = DeviceObject;
    *((_WORD *)DeviceExtension + 710) = *(_WORD *)(a2 + 4);
    *((_QWORD *)DeviceExtension + 378) = *(_QWORD *)(a2 + 2920);
    *((_DWORD *)DeviceExtension + 296) = *(_DWORD *)(v5 + 5036);
    *((_DWORD *)DeviceExtension + 282) = 1;
    *((_DWORD *)DeviceExtension + 197) = 1;
    *((_DWORD *)DeviceExtension + 198) = 1;
    *((_DWORD *)DeviceExtension + 678) = 0;
    DeviceExtension[2716] = 0;
    DWORD1(v35) = 0;
    LOBYTE(v35) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    DWORD1(v35) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    UsbhSetPortData(a1, DeviceObject, &v35);
    UsbhGetLocationIdString(a1, DeviceObject, v30, DeviceExtension + 2216);
    DWORD1(v35) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v35);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v31,
        1,
        27,
        (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
        (char)DeviceObject);
    v32 = 1346654051;
    goto LABEL_27;
  }
LABEL_29:
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 256, 1346653985, (_DWORD)DeviceObject, (int)v10);
    Usbh_ErrorDisconnect_PdoEvent(a1, DeviceObject, a2 + 24);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
    UsbhSshSetPortsBusyState(a1, *(unsigned __int16 *)(a2 + 4), 2LL);
    SET_PDO_SWPNPSTATE(DeviceObject, 100LL, 6LL);
  }
  return (unsigned int)v10;
}
