/*
 * XREFs of PopSetHiberFileType @ 0x14066E6E4
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopSetHiberFileSize @ 0x14066E5E0 (PopSetHiberFileSize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140132534 (PopOpenKey.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 *     PopValidateHiberFileSize @ 0x14052EFE0 (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x140546C54 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopSetHiberFileType(int a1, _QWORD *a2)
{
  int v3; // edi
  HANDLE v4; // rbp
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  if ( ((unsigned int)PopHiberFileSizePercent < 0x28 || a1 == 2) && (unsigned int)(a1 - 1) <= 1 )
  {
    v3 = PopHiberFileType;
    PopHiberFileType = a1;
    PopCalculateHiberFileSize(&KeyHandle, 0LL);
    v4 = KeyHandle;
    v5 = PopValidateHiberFileSize((__int64)KeyHandle, 0LL);
    if ( v5 < 0
      || (v5 = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u), v5 < 0)
      || (RtlInitUnicodeString(&DestinationString, L"HiberFileType"),
          v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberFileType, 4u),
          ZwClose(KeyHandle),
          v5 < 0) )
    {
      PopHiberFileType = v3;
    }
    else if ( a2 )
    {
      *a2 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
