/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x18006B440
 * Callers:
 *     RtlSidDominatesForTrust @ 0x18006B3B0 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D740 (RtlAddProcessTrustLabelAce.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  int v1; // edx

  if ( *((_BYTE *)Sid + 1) != 2 || *(_BYTE *)Sid != 1 )
    return 0;
  v1 = *(_DWORD *)((char *)Sid + 2);
  if ( !v1 )
    v1 = *((unsigned __int16 *)Sid + 3) - 4864;
  return !v1 && (*((_DWORD *)Sid + 2) || !*((_DWORD *)Sid + 3));
}
