/*
 * XREFs of ?NdisGetVersion640Shim@@YAIXZ @ 0x1C0072260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 */

__int64 NdisGetVersion640Shim(void)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xCu, &WPP_91f8585fcc3433c74d76eb2b49629ef4_Traceguids);
  return 393256LL;
}
