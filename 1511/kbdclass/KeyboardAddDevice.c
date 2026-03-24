/*
 * XREFs of KeyboardAddDevice @ 0x1C000C2B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0002EC0 (memmove.c)
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000CA30 (KbdCreateClassObject.c)
 */

__int64 __fastcall KeyboardAddDevice(struct _DRIVER_OBJECT *IoObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  __int64 result; // rax
  char *DeviceExtension; // rbx
  PDEVICE_OBJECT v6; // rax
  HANDLE v7; // rsi
  unsigned int *PoolWithTag; // rdi
  NTSTATUS v9; // esi
  NTSTATUS v10; // esi
  _DWORD *ErrorLogEntry; // rax
  unsigned int v12; // eax
  PDEVICE_OBJECT SourceDevice; // [rsp+30h] [rbp-39h]
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+80h] [rbp+17h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp+27h] BYREF
  ULONG Length; // [rsp+E0h] [rbp+77h] BYREF
  int v20; // [rsp+E8h] [rbp+7Fh] BYREF

  result = KbdCreateClassObject(IoObject, 0);
  if ( (int)result >= 0 )
  {
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    v6 = IoAttachDeviceToDeviceStack(SourceDevice, PhysicalDeviceObject);
    *((_QWORD *)DeviceExtension + 2) = v6;
    if ( v6 )
    {
      *((_QWORD *)DeviceExtension + 3) = PhysicalDeviceObject;
      *((_WORD *)DeviceExtension + 32) = 1;
      *((_DWORD *)DeviceExtension + 47) = 1;
      *((_DWORD *)DeviceExtension + 48) = 1;
      PoSetPowerState(SourceDevice, DevicePowerState, (POWER_STATE)1);
      *(_QWORD *)(DeviceExtension + 284) = 0LL;
      DeviceExtension[362] = 0;
      *((_QWORD *)DeviceExtension + 37) = 0LL;
      DeviceExtension[304] = 0;
      *((_QWORD *)DeviceExtension + 39) = 0LL;
      *((_DWORD *)DeviceExtension + 80) = 0;
      DeviceExtension[66] = 0;
      *((_QWORD *)DeviceExtension + 46) = 0LL;
      *((_DWORD *)DeviceExtension + 94) = 0;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&word_1C0009288;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Parameters");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          v7 = Handle;
          RtlInitUnicodeString(&ValueName, L"AllowDisable");
          if ( (unsigned int)ValueName.MaximumLength + 28 >= (unsigned int)ValueName.MaximumLength + 24 )
          {
            Length = ValueName.MaximumLength + 28;
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Length, 0x4364624Bu);
            if ( PoolWithTag )
            {
              v9 = ZwQueryValueKey(v7, &ValueName, KeyValueFullInformation, PoolWithTag, Length, &Length);
              if ( v9 >= 0 )
              {
                v12 = PoolWithTag[3];
                if ( v12 > 4 )
                  v9 = -1073741789;
                else
                  memmove(&v20, (char *)PoolWithTag + PoolWithTag[2], v12);
              }
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            else
            {
              v9 = -1073741801;
            }
            if ( v9 >= 0 )
              DeviceExtension[66] = v20 != 0;
          }
          ZwClose(Handle);
        }
        ZwClose(KeyHandle);
      }
      SourceDevice->Flags |= 0x2000u;
      SourceDevice->Flags &= ~0x80u;
      v10 = IoRegisterDeviceInterface(
              PhysicalDeviceObject,
              &GUID_DEVINTERFACE_KEYBOARD,
              0LL,
              (PUNICODE_STRING)(DeviceExtension + 88));
      if ( v10 < 0 )
      {
        IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
        *((_QWORD *)DeviceExtension + 2) = 0LL;
        IoDeleteDevice(SourceDevice);
      }
      else
      {
        return (unsigned int)KeyboardAddDeviceEx(DeviceExtension, 0LL, 0LL);
      }
      return (unsigned int)v10;
    }
    else
    {
      ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, 0x30u);
      if ( ErrorLogEntry )
      {
        ErrorLogEntry[3] = -1073414129;
        *ErrorLogEntry = 0;
        *((_QWORD *)ErrorLogEntry + 3) = 0LL;
        ErrorLogEntry[4] = 0;
        ErrorLogEntry[5] = -1073741667;
        IoWriteErrorLogEntry(ErrorLogEntry);
      }
      IoDeleteDevice(SourceDevice);
      return 3221225629LL;
    }
  }
  return result;
}
