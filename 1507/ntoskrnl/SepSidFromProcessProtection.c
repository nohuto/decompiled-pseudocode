/*
 * XREFs of SepSidFromProcessProtection @ 0x14002BA24
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x14002B9A4 (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

PSID __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *a1 )
  {
    case 'Q':
      return SeProcTrustLiteWinSid;
    case 'R':
      return SeProcTrustWinSid;
    case 'a':
      return SeProcTrustLiteWinTcbSid;
    case 'b':
      return SeProcTrustWinTcbSid;
  }
  return (PSID)v1;
}
