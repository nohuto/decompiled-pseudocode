/*
 * XREFs of SepSidFromProcessProtection @ 0x14000EA20
 * Callers:
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000E7F0 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepReferenceTokenByHandle @ 0x14000E870 (SepReferenceTokenByHandle.c)
 *     SepSetTrustLevelForProcessToken @ 0x14007C1E4 (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

PSID __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  if ( (unsigned __int8)*a1 < 0x51u )
    return 0LL;
  switch ( *a1 )
  {
    case 'Q':
      return SeProcTrustLiteWinSid;
    case 'R':
      return SeProcTrustWinSid;
    case 'a':
      return SeProcTrustLiteWinTcbSid;
  }
  if ( *a1 != 98 && *a1 != 114 )
    return 0LL;
  return SeProcTrustWinTcbSid;
}
