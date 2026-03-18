/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C00CB180
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C00CB2C8 (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00CB44C (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00CCE6C (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00CCFB0 (PpRegStateUpdateStackCreationSettings.c)
 */

NTSTATUS __fastcall IoDevObjCreateDeviceSecure(
        _DRIVER_OBJECT *DriverObject,
        unsigned int DeviceExtensionSize,
        _UNICODE_STRING *DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        const _UNICODE_STRING *DefaultSDDLString,
        const _GUID *DeviceClassGuid,
        _DEVICE_OBJECT **DeviceObject)
{
  _DEVICE_OBJECT **v9; // r13
  char Flags; // di
  void *v11; // rsi
  unsigned int v12; // r12d
  unsigned int Characteristics; // r15d
  NTSTATUS Device; // ebx
  ULONG v15; // r9d
  ULONG v16; // edx
  NTSTATUS result; // eax
  void *securityDescriptor; // [rsp+48h] [rbp-38h] BYREF
  STACK_CREATION_SETTINGS stackSettings; // [rsp+50h] [rbp-30h] BYREF
  STACK_CREATION_SETTINGS updateSettings; // [rsp+68h] [rbp-18h] BYREF

  v9 = DeviceObject;
  DeviceObject = 0LL;
  *v9 = 0LL;
  if ( !DeviceName && (DeviceCharacteristics & 0x80u) == 0 )
    return -1073741811;
  if ( DeviceClassGuid )
  {
    result = PpRegStateReadCreateClassCreationSettings(DeviceClassGuid, DriverObject, &stackSettings);
    if ( result < 0 )
      return result;
    Characteristics = stackSettings.Characteristics;
    v11 = stackSettings.SecurityDescriptor;
    v12 = stackSettings.DeviceType;
    Flags = stackSettings.Flags;
  }
  else
  {
    Flags = 0;
    memset(&stackSettings, 0, sizeof(stackSettings));
    v11 = 0LL;
    v12 = 0;
    Characteristics = 0;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_7;
  Device = SeSddlSecurityDescriptorFromSDDL(DefaultSDDLString, DeviceExtensionSize, &securityDescriptor);
  if ( Device >= 0 )
  {
    v11 = securityDescriptor;
    Flags = 2;
    stackSettings.Flags = 2;
    stackSettings.SecurityDescriptor = securityDescriptor;
    if ( !DeviceClassGuid
      || (*(_QWORD *)&updateSettings.Flags = 2LL,
          *(_QWORD *)&updateSettings.Characteristics = 0LL,
          updateSettings.SecurityDescriptor = securityDescriptor,
          Device = PpRegStateUpdateStackCreationSettings(DeviceClassGuid, &updateSettings),
          Device >= 0) )
    {
LABEL_7:
      v15 = DeviceType;
      v16 = DeviceCharacteristics;
      if ( (stackSettings.Flags & 1) != 0 )
        v15 = v12;
      if ( (stackSettings.Flags & 4) != 0 )
        v16 = Characteristics;
      if ( (stackSettings.Flags & 8) != 0 )
        Exclusive = stackSettings.Exclusivity;
      Device = IoCreateDevice(
                 DriverObject,
                 DeviceExtensionSize,
                 DeviceName,
                 v15,
                 v16,
                 Exclusive,
                 (PDEVICE_OBJECT *)&DeviceObject);
      if ( Device >= 0 )
      {
        Device = IopDevObjApplyPostCreationSettings((_DEVICE_OBJECT *)DeviceObject, &stackSettings);
        if ( Device < 0 )
          IoDeleteDevice((PDEVICE_OBJECT)DeviceObject);
        else
          *v9 = (_DEVICE_OBJECT *)DeviceObject;
      }
    }
  }
  if ( (Flags & 2) != 0 )
    ExFreePoolWithTag(v11, 0);
  return Device;
}
