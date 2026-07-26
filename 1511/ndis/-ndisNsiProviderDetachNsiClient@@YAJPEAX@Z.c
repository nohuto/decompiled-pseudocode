/*
 * XREFs of ?ndisNsiProviderDetachNsiClient@@YAJPEAX@Z @ 0x1C003DDC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    WPP_SF_q(0x44u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
    if ( (unsigned __int8)byte_1C008371D >= 4u )
      WPP_SF_q(0x45u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  }
  return 0LL;
}
