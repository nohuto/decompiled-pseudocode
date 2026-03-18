/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x140771A8C
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140152DC0 (ZwQueryLicenseValue.c)
 */

__int64 InitializeDynamicPartitioningPolicy()
{
  __int64 result; // rax
  const WCHAR *v6; // rdx
  int v7; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-2Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF

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
    result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v7, (__int64)v8);
    if ( (int)result >= 0 && v8[0] && v8[1] == 4 && v7 == 4 )
    {
      result = (unsigned int)HvlpFlags;
      if ( (HvlpFlags & 8) == 0 )
      {
        KeDynamicPartitioningSupported = 1;
        result = MEMORY[0xFFFFF780000002F0] | 0x20u;
        MEMORY[0xFFFFF780000002F0] |= 0x20u;
      }
    }
  }
  return result;
}
