/*
 * XREFs of ?ndisNsiProviderDetachNsiClient@@YAJPEAX@Z @ 0x1C003CD30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    WPP_SF_q(0x44u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_q(0x45u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  }
  return 0LL;
}
