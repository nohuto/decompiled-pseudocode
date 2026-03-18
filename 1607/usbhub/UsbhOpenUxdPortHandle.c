/*
 * XREFs of UsbhOpenUxdPortHandle @ 0x1C00575A0
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C0056F04 (UsbhDeleteUxdSettings.c)
 *     UsbhGetUxdPortKey @ 0x1C00574C4 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0057678 (UsbhPropagateUxdState.c)
 *     UsbhUxdShutdown @ 0x1C0057954 (UsbhUxdShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhOpenUxdPortHandle(__int64 a1, void **a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v5; // rax
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *DeviceRegKey; // [rsp+A0h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+28h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v5 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  v6 = IoOpenDeviceRegistryKey(v5[149], 1u, 0x1F0000u, &DeviceRegKey);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"uxd");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v6 >= 0 )
      *a2 = KeyHandle;
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v6;
}
