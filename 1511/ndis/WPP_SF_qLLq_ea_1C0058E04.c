/*
 * XREFs of WPP_SF_qLLq @ 0x1C0058E04
 * Callers:
 *     NdisAllocateGenericObject @ 0x1C0023E70 (NdisAllocateGenericObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, 0x83u, &v4);
}
