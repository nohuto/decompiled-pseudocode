/*
 * XREFs of WPP_SF__guid_ @ 0x1C0053250
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_(unsigned __int16 a1, const struct _GUID *a2, __int64 a3)
{
  ndisWppFastTraceMessage(a2, a1, a3, 16LL, 0LL);
}
