/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1C00FBD74
 * Callers:
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // r15
  char v5; // r14
  char v6; // bp
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  NTSTATUS v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( dword_1C0057010 )
    goto LABEL_7;
  if ( !g_pDeviceObject )
  {
LABEL_12:
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = -1073741823LL;
    goto LABEL_14;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  v3 = v8;
  if ( v8 < 0 )
  {
LABEL_15:
    v16 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v16 + 24) = v3;
    goto LABEL_14;
  }
  CallbackRegistration = ExRegisterCallback(
                           CallbackObject,
                           (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                           g_pDeviceObject);
  ObfDereferenceObject(CallbackObject);
  if ( !CallbackRegistration )
  {
    LODWORD(v3) = -1073741823;
    goto LABEL_12;
  }
  v4 = 1;
  v10 = WdLogNewEntry5_WdEvent(v7);
  *(_QWORD *)(v10 + 24) = CallbackRegistration;
  WdLogEvent5_WdEvent(v10);
  v11 = IoRegisterPlugPlayNotification(
          EventCategoryHardwareProfileChange,
          0,
          0LL,
          g_pDriverObject,
          DpiAcpiDockEventCallback,
          g_pDeviceObject,
          &NotificationEntry);
  v3 = v11;
  if ( v11 < 0 )
    goto LABEL_15;
  v6 = 1;
LABEL_7:
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  v3 = v12;
  if ( v12 >= 0 )
  {
    v5 = 1;
    v14 = WdLogNewEntry5_WdEvent(v13);
    *(_QWORD *)(v14 + 24) = v3;
    WdLogEvent5_WdEvent(v14);
    *(_BYTE *)(v1 + 1142) = 1;
    ++dword_1C0057010;
    goto LABEL_9;
  }
  v16 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v16 + 24) = *(_QWORD *)(v1 + 928);
  *(_QWORD *)(v16 + 32) = v3;
LABEL_14:
  WdLogEvent5_WdError(v16);
LABEL_9:
  _InterlockedExchange64(&qword_1C0056EC8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( (int)v3 < 0 )
  {
    *(_BYTE *)(v1 + 1142) = 0;
    if ( v6 == 1 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
    }
    if ( v4 == 1 )
    {
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PDEVICE_OBJECT, unsigned int, __int64)))(v1 + 936))(
        *(_QWORD *)(v1 + 864),
        DpiAcpiEventCallback);
  }
  return (unsigned int)v3;
}
