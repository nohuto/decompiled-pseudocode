/*
 * XREFs of WPP_SF_dL @ 0x1C003F224
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C0018B70 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C003C49C (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C003E620 (NdisIfDeleteIfStackEntry.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C009E688 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dL(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, &v4);
}
