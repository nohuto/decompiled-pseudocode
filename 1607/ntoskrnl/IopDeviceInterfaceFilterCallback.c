/*
 * XREFs of IopDeviceInterfaceFilterCallback @ 0x1404DA968
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 */

char __fastcall IopDeviceInterfaceFilterCallback(int a1, const WCHAR *a2, int a3, PCWSTR *a4)
{
  char v4; // bl
  char v5; // di
  int v8; // eax
  char v9; // cl
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (char)a4;
  LOBYTE(v13) = 0;
  if ( a3 == 3 && a4 )
  {
    if ( *a4 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, *a4) < 0 || RtlInitUnicodeStringEx(&String2, a2) < 0 )
        return v13;
      if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) == 1 )
        return v4;
    }
    v8 = PiPnpRtlApplyMandatoryFilters(a1, (int)a2, 3, 0, v5 + 8, (__int64)&v13);
    v9 = v13;
    if ( v8 < 0 )
      return 0;
    return v9;
  }
  return v4;
}
