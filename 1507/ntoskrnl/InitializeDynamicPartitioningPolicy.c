/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x1407E6DC8
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 */

__int64 InitializeDynamicPartitioningPolicy()
{
  __int64 result; // rax
  const WCHAR *v6; // rdx
  int v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch]
  int v13; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF

  result = (unsigned int)HvlpFlags;
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
    if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v13, (__int64)&v11) >= 0
      && v11
      && v12 == 4
      && v13 == 4
      && (HvlpFlags & 8) == 0 )
    {
      KeDynamicPartitioningSupported = 1;
      MEMORY[0xFFFFF780000002F0] |= 0x20u;
    }
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0
      || (RtlInitUnicodeString(&DestinationString, L"Kernel-PhysicalMemoryAddAllowed"),
          result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v13, (__int64)&v11),
          (int)result >= 0)
      && v11
      && v12 == 4
      && v13 == 4 )
    {
      MmDynamicMemorySupported = 1;
    }
  }
  return result;
}
