/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x140771A8C
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140152DC0 (ZwQueryLicenseValue.c)
 */

NTSTATUS InitializeDynamicPartitioningPolicy()
{
  NTSTATUS result; // eax
  const WCHAR *v6; // rdx
  ULONG Type; // [rsp+30h] [rbp-30h] BYREF
  int Data; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG ResultDataSize; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF

  result = HvlpFlags;
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
    result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
    if ( result >= 0 && Data && ResultDataSize == 4 && Type == 4 )
    {
      result = HvlpFlags;
      if ( (HvlpFlags & 8) == 0 )
      {
        KeDynamicPartitioningSupported = 1;
        result = MEMORY[0xFFFFF780000002F0] | 0x20;
        MEMORY[0xFFFFF780000002F0] |= 0x20u;
      }
    }
  }
  return result;
}
