/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x1407E6DC8
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 */

int InitializeDynamicPartitioningPolicy()
{
  const WCHAR *v6; // rdx
  int Data; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultDataSize; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG Type; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF

  LODWORD(_RAX) = HvlpFlags;
  if ( (HvlpFlags & 4) == 0 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    HIDWORD(DestinationString.Buffer) = _RDX;
    *(_DWORD *)&DestinationString.Length = _RAX;
    v6 = L"Kernel-VirtualDynamicPartitioningSupported";
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = _RBX;
    if ( (int)_RCX >= 0 )
      v6 = L"Kernel-DynamicPartitioningSupported";
    RtlInitUnicodeString(&DestinationString, v6);
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Data
      && ResultDataSize == 4
      && Type == 4
      && (HvlpFlags & 8) == 0 )
    {
      KeDynamicPartitioningSupported = 1;
      MEMORY[0xFFFFF780000002F0] |= 0x20u;
    }
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0
      || (RtlInitUnicodeString(&DestinationString, L"Kernel-PhysicalMemoryAddAllowed"),
          LODWORD(_RAX) = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize),
          (int)_RAX >= 0)
      && Data
      && ResultDataSize == 4
      && Type == 4 )
    {
      MmDynamicMemorySupported = 1;
    }
  }
  return _RAX;
}
