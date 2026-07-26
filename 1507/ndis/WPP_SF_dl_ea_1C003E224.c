/*
 * XREFs of WPP_SF_dl @ 0x1C003E224
 * Callers:
 *     NdisIfFreeNetLuidIndex @ 0x1C00C63F0 (NdisIfFreeNetLuidIndex.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dl(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, 0x27u, &v4);
}
