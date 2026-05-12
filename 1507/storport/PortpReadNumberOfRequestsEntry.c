/*
 * XREFs of PortpReadNumberOfRequestsEntry @ 0x1C0050270
 * Callers:
 *     PortReadRegistrySettings @ 0x1C005016C (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadNumberOfRequestsEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  unsigned int v7; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"NumberOfRequests");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v7 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  if ( v7 >= 0x10 )
  {
    if ( v7 > 0xFF )
      v7 = 255;
    *(_DWORD *)(a3 + 32) = v7;
  }
  else
  {
    *(_DWORD *)(a3 + 32) = 16;
  }
  return 1;
}
