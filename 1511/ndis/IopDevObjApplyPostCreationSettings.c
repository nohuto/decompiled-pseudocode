/*
 * XREFs of IopDevObjApplyPostCreationSettings @ 0x1C00AD120
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00ACFE0 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C00AD1D8 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 */

NTSTATUS __fastcall IopDevObjApplyPostCreationSettings(PVOID Object, __int64 a2)
{
  NTSTATUS result; // eax
  ACCESS_MASK v5; // r9d
  NTSTATUS v6; // ebx
  SECURITY_INFORMATION SecurityInformation; // [rsp+70h] [rbp+18h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  if ( (*(_DWORD *)a2 & 2) == 0 )
    return 0;
  result = SeUtilSecurityInfoFromSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
  if ( result >= 0 )
  {
    v5 = 0;
    if ( (SecurityInformation & 3) != 0 )
      v5 = 0x80000;
    if ( (SecurityInformation & 4) != 0 )
      v5 |= 0x40000u;
    if ( (SecurityInformation & 8) != 0 )
      v5 |= 0x1000000u;
    result = ObOpenObjectByPointer(Object, 0x200u, 0LL, v5, IoDeviceObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v6 = ZwSetSecurityObject(Handle, SecurityInformation, *(PSECURITY_DESCRIPTOR *)(a2 + 8));
      ZwClose(Handle);
      return v6;
    }
  }
  return result;
}
