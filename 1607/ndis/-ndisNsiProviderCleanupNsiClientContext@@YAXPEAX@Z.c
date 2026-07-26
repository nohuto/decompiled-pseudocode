/*
 * XREFs of ?ndisNsiProviderCleanupNsiClientContext@@YAXPEAX@Z @ 0x1C0041990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisNsiProviderCleanupNsiClientContext(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    WPP_SF_q(0x46u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
    if ( (unsigned __int8)byte_1C00895DD >= 4u )
      WPP_SF_q(0x47u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  }
}
