/*
 * XREFs of WPP_SF_qLLq @ 0x1C005D2BC
 * Callers:
 *     NdisAllocateGenericObject @ 0x1C001EFF0 (NdisAllocateGenericObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, 0x83u, &v4);
}
