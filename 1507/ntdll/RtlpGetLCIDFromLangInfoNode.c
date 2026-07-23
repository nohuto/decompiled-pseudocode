/*
 * XREFs of RtlpGetLCIDFromLangInfoNode @ 0x180074D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpGetLCIDFromLangInfoNode(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v4; // ax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  Lcid = 0;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v4 = *(_WORD *)(a2 + 4);
  if ( v4 )
  {
    *a3 = v4;
  }
  else if ( *(__int16 *)(a2 + 6) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * *(__int16 *)(a2 + 6))));
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      *a3 = Lcid;
  }
  return 0LL;
}
