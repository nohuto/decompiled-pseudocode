/*
 * XREFs of IoReportRootDevice @ 0x140578358
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140483B88 (PnpCleanupDeviceRegistryValues.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _CmCreateDevice @ 0x14050D534 (_CmCreateDevice.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     _CmDeleteDevice @ 0x1406D7DF8 (_CmDeleteDevice.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HANDLE v13; // rdi
  HANDLE v14; // r8
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v16; // [rsp+38h] [rbp-D0h]
  char v17; // [rsp+58h] [rbp-B0h] BYREF
  char v18; // [rsp+59h] [rbp-AFh] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _WORD v25[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v26; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  Destination.Buffer = v25;
  v17 = 0;
  DestinationString.Buffer = (wchar_t *)&v26;
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
      ppszDestEnd = &v25[(unsigned __int64)Destination.Length >> 1];
      RtlStringCchPrintfExW(
        ppszDestEnd,
        (400 - (unsigned __int64)Destination.Length) >> 1,
        &ppszDestEnd,
        0LL,
        0,
        L"%04u",
        0LL);
      v6 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - v25;
      if ( (_DWORD)v6 == -1 )
        v7 = 400 - Destination.Length;
      else
        v7 = 2 * v6;
      Destination.Length += v7;
      v8 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v17, 0);
      v9 = v17;
      appended = v8;
      if ( v8 >= 0 )
      {
        if ( !v17 )
          goto LABEL_10;
        v13 = Handle;
        v14 = Handle;
        v16 = DestinationString.Length + 4;
        pszFormat = DestinationString.Buffer;
        *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v16 >> 1) - 2] = 0;
        appended = CmSetDeviceRegProp(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)Destination.Buffer,
                     (__int64)v14,
                     2u,
                     7u,
                     (__int64)pszFormat,
                     v16,
                     0);
        if ( appended >= 0 )
        {
          LODWORD(v20) = 32;
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)Destination.Buffer,
                       (__int64)v13,
                       0xBu,
                       4u,
                       (__int64)&v20,
                       4u,
                       0);
          if ( appended >= 0 )
          {
            v18 = -1;
            appended = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Destination.Buffer,
                         1u,
                         (__int64)v13,
                         0LL,
                         (__int64)&DEVPKEY_Device_Reported,
                         17,
                         (__int64)&v18,
                         1u,
                         0);
            if ( appended >= 0 )
            {
              appended = CmSetDeviceRegProp(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)Destination.Buffer,
                           (__int64)v13,
                           5u,
                           1u,
                           (__int64)DriverExtension->ServiceKeyName.Buffer,
                           (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                           0);
              if ( appended >= 0 )
              {
                DriverObject->Flags |= 0x800u;
                PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 8, 0, 0LL, 0LL, 0LL);
                goto LABEL_10;
              }
            }
          }
        }
      }
      if ( v9 )
      {
        CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, Destination.Buffer, 0LL);
        PnpCleanupDeviceRegistryValues((__int64)&Destination);
      }
    }
  }
LABEL_10:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return appended;
}
