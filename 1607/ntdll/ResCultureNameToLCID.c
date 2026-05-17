/*
 * XREFs of ResCultureNameToLCID @ 0x180103420
 * Callers:
 *     ResCGetCultureID @ 0x1801059C4 (ResCGetCultureID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall ResCultureNameToLCID(__int64 a1)
{
  ULONG v1; // ecx
  NTSTATUS inited; // eax
  unsigned __int16 v4[12]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 )
    goto LABEL_2;
  inited = RtlInitUnicodeStringEx((__int64)v4, a1);
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    v1 = RtlNtStatusToDosError(inited);
    goto LABEL_3;
  }
  if ( !RtlCultureNameToLCID(v4, (int *)&v5) )
  {
LABEL_2:
    v1 = 50;
LABEL_3:
    RtlSetLastWin32Error(v1);
    return 0LL;
  }
  return v5;
}
