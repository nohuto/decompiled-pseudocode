/*
 * XREFs of CmpInitializeHardwareConfiguration @ 0x1407AC64C
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtCreateKey @ 0x140462F98 (NtCreateKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpSetupConfigurationTree @ 0x1407AC78C (CmpSetupConfigurationTree.c)
 */

NTSTATUS __fastcall CmpInitializeHardwareConfiguration(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  PVOID PoolWithTag; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDeviceMapName;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  result = NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    NtClose(KeyHandle);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( result >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      CmpConfigurationData = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( v1 )
        {
          LODWORD(v1) = CmpSetupConfigurationTree(v1, KeyHandle, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          PoolWithTag = CmpConfigurationData;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        CmpConfigurationData = 0LL;
      }
      else
      {
        LODWORD(v1) = -1073741670;
      }
      NtClose(KeyHandle);
      return v1;
    }
  }
  return result;
}
