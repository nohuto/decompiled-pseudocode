/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x180061E70
 * Callers:
 *     RtlSidDominatesForTrust @ 0x1800618A0 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x180065780 (RtlAddProcessTrustLabelAce.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  return !v1 && (*(_DWORD *)(a1 + 8) || !*(_DWORD *)(a1 + 12));
}
