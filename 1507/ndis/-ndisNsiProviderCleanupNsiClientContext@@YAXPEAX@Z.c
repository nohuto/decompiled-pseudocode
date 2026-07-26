/*
 * XREFs of ?ndisNsiProviderCleanupNsiClientContext@@YAXPEAX@Z @ 0x1C003CCE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisNsiProviderCleanupNsiClientContext(__int64 a1)
{
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    WPP_SF_q(0x46u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_q(0x47u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  }
}
