/*
 * XREFs of NdispRegisterShim @ 0x1C009E824
 * Callers:
 *     NdisDllInitialize @ 0x1C0102050 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim()
{
  int v0; // eax

  v0 = KseRegisterShim(&NdisShim, 0LL, 0LL);
  if ( v0 < 0 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_d(0xAu, &WPP_b8cc328dacc3f9994262abf2eefa0e30_Traceguids, v0);
}
