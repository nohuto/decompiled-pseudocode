/*
 * XREFs of IopGetRegistryKeyInformation @ 0x1405404C4
 * Callers:
 *     pIoQueryDeviceDescription @ 0x14053FC00 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
