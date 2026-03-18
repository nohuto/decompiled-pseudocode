/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x1C0167A10
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiCheckSpbResourceLeakage @ 0x1C0028C10 (DpiCheckSpbResourceLeakage.c)
 *     DpiFdoDestroyChildDevices @ 0x1C016735C (DpiFdoDestroyChildDevices.c)
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 *     DpiFdoResetFdo @ 0x1C01684A0 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C016D90C (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C016DA50 (DpiPdoDestroyPendingPdoObjects.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C017000C (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C01707E8 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  __int64 v10; // rcx
  void *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  void *v14; // rcx
  int v15; // ecx
  void (__fastcall *v16)(_QWORD); // rax
  void (__fastcall *v17)(_QWORD); // rax
  void (__fastcall *v18)(_QWORD); // rax
  void (__fastcall *v19)(_QWORD); // rax
  unsigned int v20; // ebx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C0046E88 == DeviceObject )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v7[4] = 0LL;
    v7[3] = DpiFdoHandleRemoveDevice;
    v7[5] = -1073741637LL;
    WdLogEvent5_WdError(v7);
    qword_1C0046E88 = 0LL;
  }
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1
      && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 1) <= 1 )
    {
      DpiFdoHandleStopDevice(DeviceObject, Irp);
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      DpiPdoDestroyPendingPdoObjects(DeviceObject);
      DpiFdoDestroyChildDevices((__int64)DeviceObject);
    }
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  *((_DWORD *)DeviceExtension + 60) = *((_DWORD *)DeviceExtension + 59);
  *((_DWORD *)DeviceExtension + 59) = 7;
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v8 = *(_QWORD **)DeviceExtension;
  v9 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v9 != DeviceExtension )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  --*(_DWORD *)(v5 + 128);
  v10 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v10 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v10);
    v11 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v12 = (_DWORD *)*((_QWORD *)DeviceExtension + 154);
    if ( v12[2] == 1 && v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)DeviceExtension + 154) = 0LL;
    }
    v13 = (_DWORD *)*((_QWORD *)DeviceExtension + 155);
    if ( v13[2] == 1 && v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)DeviceExtension + 155) = 0LL;
    }
    if ( *((_DWORD *)DeviceExtension + 118) )
      DpiLdaUnLinkDeviceFromChain(DeviceObject);
    v14 = (void *)*((_QWORD *)DeviceExtension + 127);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)DeviceExtension + 127) = 0LL;
    }
    DpiCheckSpbResourceLeakage((__int64)DeviceExtension);
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v15 = *((_DWORD *)DeviceExtension + 5);
    if ( (unsigned int)(v15 - 2) <= 1 )
    {
      if ( v15 == 2 )
        DpiFdoResetFdo(DeviceObject);
      if ( DeviceExtension[1061] == 1 )
        DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
      v16 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 69);
      if ( v16 )
      {
        v16(*((_QWORD *)DeviceExtension + 67));
        memset(DeviceExtension + 528, 0, 0x40uLL);
      }
      v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 77);
      if ( v17 )
      {
        v17(*((_QWORD *)DeviceExtension + 75));
        memset(DeviceExtension + 592, 0, 0x30uLL);
      }
      v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 83);
      if ( v18 )
      {
        v18(*((_QWORD *)DeviceExtension + 81));
        memset(DeviceExtension + 640, 0, 0xB8uLL);
      }
      v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 106);
      if ( v19 )
      {
        v19(*((_QWORD *)DeviceExtension + 104));
        memset(DeviceExtension + 824, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 30);
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 31);
    }
  }
  Irp->IoStatus.Status = 0;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v20 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6));
  return v20;
}
