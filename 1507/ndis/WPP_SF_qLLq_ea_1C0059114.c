/*
 * XREFs of WPP_SF_qLLq @ 0x1C0059114
 * Callers:
 *     NdisAllocateGenericObject @ 0x1C001F310 (NdisAllocateGenericObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, 0x80u, &v4);
}
