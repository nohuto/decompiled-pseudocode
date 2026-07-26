/*
 * XREFs of WPP_SF_dllL @ 0x1C0043038
 * Callers:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A17D0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dllL(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, 0x26u, &v4);
}
