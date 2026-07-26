/*
 * XREFs of WPP_SF_qLLqD @ 0x1C0051CB4
 * Callers:
 *     NdisClCloseCall @ 0x1C00F61D0 (NdisClCloseCall.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLqD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  int v5; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, 0x27u, &v4);
}
