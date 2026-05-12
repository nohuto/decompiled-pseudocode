/*
 * XREFs of PortGetIoLatencyCapValue @ 0x1C0054A2C
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0051794 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1C00520A4 (PortpOpenParametersKey.c)
 */

void __fastcall PortGetIoLatencyCapValue(struct _UNICODE_STRING *a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-238h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-230h] BYREF
  _DWORD KeyValueInformation[5]; // [rsp+50h] [rbp-218h] BYREF
  wchar_t Str1[246]; // [rsp+64h] [rbp-204h] BYREF

  if ( a2 )
  {
    v3 = PortpOpenParametersKey(a1);
    if ( v3 )
    {
      RtlInitUnicodeString(&DestinationString, L"IoLatencyCap");
      if ( ZwQueryValueKey(v3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
        && KeyValueInformation[1] == 4
        && KeyValueInformation[3] == 4
        && !_wcsnicmp(Str1, L"IoLatencyCap", (unsigned __int64)KeyValueInformation[4] >> 1) )
      {
        v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        if ( v4 )
          *a2 = v4;
      }
      ZwClose(v3);
    }
  }
}
