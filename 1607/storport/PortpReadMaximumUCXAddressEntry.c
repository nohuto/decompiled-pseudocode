/*
 * XREFs of PortpReadMaximumUCXAddressEntry @ 0x1C00586EC
 * Callers:
 *     PortReadRegistrySettings @ 0x1C0058508 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadMaximumUCXAddressEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  __int64 v7; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"MaximumUCXAddress");
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
  v7 = *(_QWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  *(_QWORD *)(a3 + 24) = v7;
  if ( !v7 )
  {
    *(_DWORD *)(a3 + 24) = -1;
    *(_DWORD *)(a3 + 28) = 0;
  }
  return 1;
}
