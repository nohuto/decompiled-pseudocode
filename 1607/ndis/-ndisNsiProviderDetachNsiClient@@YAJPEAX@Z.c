/*
 * XREFs of ?ndisNsiProviderDetachNsiClient@@YAJPEAX@Z @ 0x1C00419E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    WPP_SF_q(0x44u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
    if ( (unsigned __int8)byte_1C00895DD >= 4u )
      WPP_SF_q(0x45u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  }
  return 0LL;
}
