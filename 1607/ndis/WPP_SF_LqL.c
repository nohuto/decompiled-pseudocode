/*
 * XREFs of WPP_SF_LqL @ 0x1C0042948
 * Callers:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001D2BC (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ?ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z @ 0x1C0099000 (-ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C009A290 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C009A350 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C009AA2C (-ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C009AC48 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LqL(unsigned __int16 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  __int64 v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, &v4);
}
