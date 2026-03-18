/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x140042D28
 * Callers:
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140044D50 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepReferenceTokenByHandle @ 0x140045160 (SepReferenceTokenByHandle.c)
 *     RtlAddProcessTrustLabelAce @ 0x14059509C (RtlAddProcessTrustLabelAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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
