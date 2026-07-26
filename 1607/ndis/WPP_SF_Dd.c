/*
 * XREFs of WPP_SF_Dd @ 0x1C0042904
 * Callers:
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A15A8 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Dd(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, 0x12u, &v4);
}
