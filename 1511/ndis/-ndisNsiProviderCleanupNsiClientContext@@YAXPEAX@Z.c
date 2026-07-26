/*
 * XREFs of ?ndisNsiProviderCleanupNsiClientContext@@YAXPEAX@Z @ 0x1C003DD70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisNsiProviderCleanupNsiClientContext(__int64 a1)
{
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    WPP_SF_q(0x46u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
    if ( (unsigned __int8)byte_1C008371D >= 4u )
      WPP_SF_q(0x47u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  }
}
