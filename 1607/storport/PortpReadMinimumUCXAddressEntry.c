/*
 * XREFs of PortpReadMinimumUCXAddressEntry @ 0x1C005867C
 * Callers:
 *     PortReadRegistrySettings @ 0x1C0058508 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadMinimumUCXAddressEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  char result; // al
  __int64 v7; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"MinimumUCXAddress");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 3
    || *((_DWORD *)KeyValueInformation + 3) != 8 )
  {
    return 0;
  }
  result = 1;
  v7 = *(_QWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  if ( v7 >= *(_QWORD *)(a3 + 24) - 4096LL )
    v7 = 0LL;
  *(_QWORD *)(a3 + 16) = v7;
  return result;
}
