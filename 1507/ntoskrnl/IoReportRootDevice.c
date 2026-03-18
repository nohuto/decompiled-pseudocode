/*
 * XREFs of IoReportRootDevice @ 0x1405BA7DC
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14053503C (PnpCleanupDeviceRegistryValues.c)
 *     _CmCreateDevice @ 0x14054ED28 (_CmCreateDevice.c)
 *     _CmDeleteDevice @ 0x140712930 (_CmDeleteDevice.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  NTSTATUS result; // eax
  NTSTATUS appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v6; // rcx
  __int16 v7; // di
  int v8; // eax
  char v9; // r14
  struct _KTHREAD *v10; // rdx
  __int16 v11; // ax
  HANDLE v12; // rdi
  HANDLE v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v18; // [rsp+38h] [rbp-D0h]
  char v19; // [rsp+58h] [rbp-B0h] BYREF
  char v20; // [rsp+59h] [rbp-AFh] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  _WORD v27[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v28; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  Destination.Buffer = v27;
  v19 = 0;
  DestinationString.Buffer = (wchar_t *)&v28;
  Handle = 0LL;
  *(_DWORD *)&Destination.Length = 26214400;
  *(_DWORD *)&DestinationString.Length = 26345472;
  P = 0LL;
  result = RtlAppendUnicodeToString(&Destination, L"ROOT\\");
  if ( result < 0 )
    return result;
  result = RtlAppendUnicodeStringToString(&Destination, &DriverExtension->ServiceKeyName);
  if ( result < 0 )
    return result;
  if ( Destination.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &Destination);
  appended = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( appended >= 0 )
  {
    PpDevNodeLockTree(1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    if ( appended >= 0 )
    {
      ppszDestEnd = &v27[(unsigned __int64)Destination.Length >> 1];
      RtlStringCchPrintfExW(
        ppszDestEnd,
        (400 - (unsigned __int64)Destination.Length) >> 1,
        &ppszDestEnd,
        0LL,
        0,
        L"%04u",
        0LL);
      v6 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - v27;
      if ( (_DWORD)v6 == -1 )
        v7 = 400 - Destination.Length;
      else
        v7 = 2 * v6;
      Destination.Length += v7;
      v8 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v19, 0);
      v9 = v19;
      appended = v8;
      if ( v8 < 0 )
        goto LABEL_24;
      if ( !v19 )
        goto LABEL_10;
      v12 = Handle;
      v13 = Handle;
      v18 = DestinationString.Length + 4;
      pszFormat = DestinationString.Buffer;
      *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v18 >> 1) - 2] = 0;
      appended = CmSetDeviceRegProp(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)Destination.Buffer,
                   (__int64)v13,
                   2u,
                   7u,
                   (__int64)pszFormat,
                   v18,
                   0);
      if ( appended < 0
        || (LODWORD(v22) = 32,
            appended = CmSetDeviceRegProp(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Destination.Buffer,
                         (__int64)v12,
                         0xBu,
                         4u,
                         (__int64)&v22,
                         4u,
                         0),
            appended < 0)
        || (v20 = -1,
            appended = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Destination.Buffer,
                         1u,
                         (__int64)v12,
                         0LL,
                         (__int64)&DEVPKEY_Device_Reported,
                         17,
                         (__int64)&v20,
                         1u,
                         0),
            appended < 0)
        || (appended = CmSetDeviceRegProp(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Destination.Buffer,
                         (__int64)v12,
                         5u,
                         1u,
                         (__int64)DriverExtension->ServiceKeyName.Buffer,
                         (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                         0),
            appended < 0) )
      {
LABEL_24:
        if ( v9 )
        {
          CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, Destination.Buffer, 0LL);
          PnpCleanupDeviceRegistryValues((__int64)&Destination, v14, v15, v16);
        }
        goto LABEL_10;
      }
      DriverObject->Flags |= 0x800u;
      PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 8, 0, 0LL, 0LL, 0LL);
    }
  }
LABEL_10:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return appended;
}
