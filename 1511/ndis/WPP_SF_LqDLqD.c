/*
 * XREFs of WPP_SF_LqDLqD @ 0x1C004D10C
 * Callers:
 *     NdisCmCloseCallComplete @ 0x1C00F0A60 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00F0E50 (NdisCmMakeCallComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LqDLqD(unsigned __int16 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v5; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, a1, &v4);
}
