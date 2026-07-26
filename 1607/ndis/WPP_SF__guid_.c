/*
 * XREFs of WPP_SF__guid_ @ 0x1C0042D58
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00141F0 (NdisFRegisterFilterDriver.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0017E8C (ndisIfReadNetworkGuidFromKey.c)
 *     ndisPnPAddDevice @ 0x1C00ACC00 (ndisPnPAddDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_(unsigned __int16 a1, const struct _GUID *a2, __int64 a3)
{
  ndisWppFastTraceMessage(a2, a1, a3, 16LL, 0LL);
}
