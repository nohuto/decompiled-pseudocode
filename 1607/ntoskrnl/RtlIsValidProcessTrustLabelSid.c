/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1400D1C3C
 * Callers:
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000E370 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepReferenceTokenByHandle @ 0x14000E3F0 (SepReferenceTokenByHandle.c)
 *     RtlSidDominatesForTrust @ 0x1400D1B40 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553FF8 (RtlAddProcessTrustLabelAce.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
