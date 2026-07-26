/*
 * XREFs of WPP_SF__guid_L @ 0x1C0042D7C
 * Callers:
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00C3764 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_L(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  ndisWppFastTraceMessage(&WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, 0x80u, a3, 16LL, &v4, 4LL, 0LL);
}
