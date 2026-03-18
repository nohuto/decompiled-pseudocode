/*
 * XREFs of GetDeviceObjectPointer @ 0x1C0095D70
 * Callers:
 *     GetPointerDeviceKey @ 0x1C0094E88 (GetPointerDeviceKey.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C00958FC (IsMouseDeviceOnIgnoreList.c)
 *     IsLegacyTouchPadDevice @ 0x1C0111110 (IsLegacyTouchPadDevice.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C014F6D8 (RequestModeSwitchOnPowerUp.c)
 *     EnablePTPDevices @ 0x1C01D0D58 (EnablePTPDevices.c)
 *     SetUserPTPEnabledPreference @ 0x1C01D1800 (SetUserPTPEnabledPreference.c)
 *     ConfigurePointerDevice @ 0x1C01D48A0 (ConfigurePointerDevice.c)
 *     GetDeviceParent @ 0x1C01D5064 (GetDeviceParent.c)
 *     HidCreateDeviceInfo @ 0x1C01D5214 (HidCreateDeviceInfo.c)
 *     RevokeConfigurationChange @ 0x1C01D5620 (RevokeConfigurationChange.c)
 *     SendPTPLatencyMgtDeviceRequest @ 0x1C01D56BC (SendPTPLatencyMgtDeviceRequest.c)
 *     RegisterConfigDeviceForChangeNotifications @ 0x1C01E06E4 (RegisterConfigDeviceForChangeNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        ACCESS_MASK a2,
        ULONG ShareAccess,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  NTSTATUS v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  void *FileHandle; // [rsp+30h] [rbp-49h] BYREF
  PVOID Object; // [rsp+38h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v14[2]; // [rsp+80h] [rbp+7h] BYREF
  __int16 v15; // [rsp+88h] [rbp+Fh]

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v14[0] = 12;
  v14[1] = 2;
  v15 = 257;
  ObjectAttributes.SecurityQualityOfService = v14;
  v7 = ZwOpenFile(&FileHandle, a2, &ObjectAttributes, &IoStatusBlock, ShareAccess, 0x40u);
  if ( v7 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 < 0 )
    {
      ZwClose(FileHandle);
    }
    else
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *a5 = Object;
      *a6 = IoGetRelatedDeviceObject(v8);
      *a4 = FileHandle;
    }
  }
  return (unsigned int)v7;
}
