/*
 * XREFs of ResCultureNameToLCID @ 0x1800F8A8C
 * Callers:
 *     ResCGetCultureID @ 0x1800FB024 (ResCGetCultureID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
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
