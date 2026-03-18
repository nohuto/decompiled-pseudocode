/*
 * XREFs of IopDevObjApplyPostCreationSettings @ 0x1C00BC2A4
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00BC150 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C00BC35C (SeUtilSecurityInfoFromSecurityDescriptor.c)
 */

NTSTATUS __fastcall IopDevObjApplyPostCreationSettings(
        _DEVICE_OBJECT *DeviceObject,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  NTSTATUS result; // eax
  SECURITY_INFORMATION v5; // ebx
  ACCESS_MASK v6; // r9d
  NTSTATUS v7; // ebx
  unsigned __int8 fromDefaultSource; // [rsp+68h] [rbp+10h] BYREF
  unsigned int securityInformation; // [rsp+70h] [rbp+18h] BYREF
  void *handle; // [rsp+78h] [rbp+20h] BYREF

  if ( (StackCreationSettings->Flags & 2) == 0 )
    return 0;
  result = SeUtilSecurityInfoFromSecurityDescriptor(
             StackCreationSettings->SecurityDescriptor,
             &fromDefaultSource,
             &securityInformation);
  if ( result >= 0 )
  {
    v5 = securityInformation;
    v6 = 0;
    if ( (securityInformation & 3) != 0 )
      v6 = 0x80000;
    if ( (securityInformation & 4) != 0 )
      v6 |= 0x40000u;
    if ( (securityInformation & 8) != 0 )
      v6 |= 0x1000000u;
    result = ObOpenObjectByPointer(DeviceObject, 0x200u, 0LL, v6, (POBJECT_TYPE)IoDeviceObjectType, 0, &handle);
    if ( result >= 0 )
    {
      v7 = ZwSetSecurityObject(handle, v5, StackCreationSettings->SecurityDescriptor);
      ZwClose(handle);
      return v7;
    }
  }
  return result;
}
