/*
 * XREFs of PortpReadUncachedExtAlignmentEntry @ 0x1C0050200
 * Callers:
 *     PortReadRegistrySettings @ 0x1C005016C (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadUncachedExtAlignmentEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  char result; // al
  char v7; // cl
  unsigned int v8; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"UncachedExtAlignment");
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
  v7 = 16;
  v8 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  if ( v8 <= 0x10 )
  {
    v7 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
    if ( v8 < 3 )
      v7 = 3;
  }
  result = 1;
  *(_DWORD *)(a3 + 44) = 1 << v7;
  return result;
}
