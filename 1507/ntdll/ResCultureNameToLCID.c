/*
 * XREFs of ResCultureNameToLCID @ 0x1800F9174
 * Callers:
 *     ResCGetCultureID @ 0x1800FBB44 (ResCGetCultureID.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
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
  if ( !RtlCultureNameToLCID(v4, &v5) )
  {
LABEL_2:
    v1 = 50;
LABEL_3:
    RtlSetLastWin32Error(v1);
    return 0LL;
  }
  return v5;
}
