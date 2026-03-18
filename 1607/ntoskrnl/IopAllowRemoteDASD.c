/*
 * XREFs of IopAllowRemoteDASD @ 0x1401CA36C
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14049F430 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1404E6780 (IopOpenRegistryKey.c)
 */

bool IopAllowRemoteDASD()
{
  bool v0; // bl
  char v2; // [rsp+20h] [rbp-38h]
  UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h]

  v0 = 0;
  RtlInitUnicodeString(&DestinationString, L"AllowRemoteDASD");
  RtlInitUnicodeString(&v3, L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\RemovableStorageDevices");
  v2 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &v3, 131097LL, v2) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( *((_DWORD *)P + 3) )
        v0 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  return v0;
}
