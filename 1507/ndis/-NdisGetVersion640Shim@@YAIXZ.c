/*
 * XREFs of ?NdisGetVersion640Shim@@YAIXZ @ 0x1C006E260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 */

__int64 NdisGetVersion640Shim(void)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xCu, &WPP_b8cc328dacc3f9994262abf2eefa0e30_Traceguids);
  return 393256LL;
}
