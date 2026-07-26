/*
 * XREFs of WPP_SF_dL @ 0x1C0042EBC
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C001AC00 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C0040480 (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0042290 (NdisIfDeleteIfStackEntry.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A17D0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dL(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, &v4);
}
