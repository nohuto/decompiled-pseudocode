/*
 * XREFs of RegisterConfigDeviceForChangeNotifications @ 0x1C01E00D4
 * Callers:
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 */

NTSTATUS __fastcall RegisterConfigDeviceForChangeNotifications(struct _UNICODE_STRING *Context)
{
  NTSTATUS result; // eax
  PVOID EventCategoryData; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF

  result = GetDeviceObjectPointer(Context + 13, 0, 2u, &Handle, &EventCategoryData, (PDEVICE_OBJECT *)&Object);
  if ( result >= 0 )
  {
    ObfReferenceObject(Object);
    IoRegisterPlugPlayNotification(
      EventCategoryTargetDeviceChange,
      0,
      EventCategoryData,
      gpWin32kDriverObject,
      (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DeviceNotify,
      Context,
      (PVOID *)&Context[15].Buffer);
    ObfDereferenceObject(EventCategoryData);
    ObfDereferenceObject(Object);
    return ZwClose(Handle);
  }
  return result;
}
