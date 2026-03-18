/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1C00DDC70
 * Callers:
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  char v4; // r12
  char v5; // r15
  char v6; // r14
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v24; // rax
  void *v25; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-58h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+B0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( dword_1C0046DD0 )
    goto LABEL_7;
  if ( g_pDeviceObject )
  {
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
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v25 = ExCreateCallback;
      v24[3] = DpiAcpiRegisterAcpiCallbacks;
      goto LABEL_17;
    }
    CallbackRegistration = ExRegisterCallback(
                             CallbackObject,
                             (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                             g_pDeviceObject);
    ObfDereferenceObject(CallbackObject);
    if ( CallbackRegistration )
    {
      v4 = 1;
      v14 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
      *(_QWORD *)(v14 + 24) = DpiAcpiRegisterAcpiCallbacks;
      *(_QWORD *)(v14 + 32) = CallbackRegistration;
      WdLogEvent5_WdEvent(v14);
      v15 = IoRegisterPlugPlayNotification(
              EventCategoryHardwareProfileChange,
              0,
              0LL,
              g_pDriverObject,
              DpiAcpiDockEventCallback,
              g_pDeviceObject,
              &NotificationEntry);
      v3 = v15;
      if ( v15 >= 0 )
      {
        v6 = 1;
LABEL_7:
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 896))(
                *(_QWORD *)(v1 + 832),
                DpiAcpiEventCallback,
                a1);
        v3 = v17;
        if ( v17 >= 0 )
        {
          v5 = 1;
          v22 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
          *(_QWORD *)(v22 + 24) = DpiAcpiRegisterAcpiCallbacks;
          *(_QWORD *)(v22 + 32) = v3;
          WdLogEvent5_WdEvent(v22);
          *(_BYTE *)(v1 + 1061) = 1;
          ++dword_1C0046DD0;
          goto LABEL_9;
        }
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v24[3] = DpiAcpiRegisterAcpiCallbacks;
        v25 = *(void **)(v1 + 896);
        goto LABEL_17;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v25 = IoRegisterPlugPlayNotification;
      v24[3] = DpiAcpiRegisterAcpiCallbacks;
LABEL_17:
      v24[4] = v25;
      v24[5] = v3;
      goto LABEL_18;
    }
    LODWORD(v3) = -1073741823;
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v24[4] = ExRegisterCallback;
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v24[4] = 0LL;
  }
  v24[3] = DpiAcpiRegisterAcpiCallbacks;
  v24[5] = -1073741823LL;
LABEL_18:
  WdLogEvent5_WdError(v24);
LABEL_9:
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( (int)v3 < 0 )
  {
    *(_BYTE *)(v1 + 1061) = 0;
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
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PDEVICE_OBJECT, unsigned int, __int64)))(v1 + 904))(
        *(_QWORD *)(v1 + 832),
        DpiAcpiEventCallback);
  }
  return (unsigned int)v3;
}
