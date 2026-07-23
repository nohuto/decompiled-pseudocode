/*
 * XREFs of ResCultureNameToLCID @ 0x180103360
 * Callers:
 *     ResCGetCultureID @ 0x180105904 (ResCGetCultureID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall ResCultureNameToLCID(PCWSTR SourceString)
{
  LONG v1; // ecx
  NTSTATUS inited; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  Lcid = 0;
  if ( !SourceString )
    goto LABEL_2;
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    v1 = RtlNtStatusToDosError(inited);
    goto LABEL_3;
  }
  if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
  {
LABEL_2:
    v1 = 50;
LABEL_3:
    RtlSetLastWin32Error(v1);
    return 0LL;
  }
  return Lcid;
}
