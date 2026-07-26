/*
 * XREFs of WPP_SF_qLLqL @ 0x1C004CA7C
 * Callers:
 *     NdisCoDeleteVc @ 0x1C00F7F40 (NdisCoDeleteVc.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLqL(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  int v5; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, 0x1Bu, &v4);
}
