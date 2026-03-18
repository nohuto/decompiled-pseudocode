/*
 * XREFs of PopSetHiberFileSize @ 0x1406B5B20
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x14015A780 (PopOpenKey.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     PopValidateHiberFileSize @ 0x1405650A0 (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x14056BFC0 (PopCalculateHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406B5C24 (PopSetHiberFileType.c)
 */

__int64 __fastcall PopSetHiberFileSize(unsigned int a1, _QWORD *a2)
{
  int v3; // edi
  HANDLE v4; // rbp
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  if ( a1 > 0x64 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = PopHiberFileSizePercent;
    PopHiberFileSizePercent = a1;
    PopCalculateHiberFileSize(&KeyHandle);
    v4 = KeyHandle;
    v5 = PopValidateHiberFileSize((__int64)KeyHandle, 0LL);
    if ( v5 < 0
      || (unsigned int)PopHiberFileSizePercent >= 0x28 && (v5 = PopSetHiberFileType(2LL, 0LL), v5 < 0)
      || (v5 = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u), v5 < 0)
      || (RtlInitUnicodeString(&DestinationString, L"HiberFileSizePercent"),
          v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberFileSizePercent, 4u),
          ZwClose(KeyHandle),
          v5 < 0) )
    {
      PopHiberFileSizePercent = v3;
    }
    else if ( a2 )
    {
      *a2 = v4;
    }
  }
  return (unsigned int)v5;
}
