/*
 * XREFs of IopGetRegistryKeyInformation @ 0x140507A9C
 * Callers:
 *     pIoQueryDeviceDescription @ 0x1405071C8 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ZwQueryKey @ 0x1401508E0 (ZwQueryKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryKeyInformation(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  PVOID PoolWithTagPriority; // rax
  void *v6; // rbx
  NTSTATUS Key; // edi
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+18h] BYREF

  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, (PULONG)&NumberOfBytes);
  if ( result == -1073741789 || result == -2147483643 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              (unsigned int)NumberOfBytes,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x20206F49u);
    v6 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      Key = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTagPriority, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( Key < 0 )
      {
        ExFreePoolWithTag(v6, 0);
        return Key;
      }
      else
      {
        *a2 = v6;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
