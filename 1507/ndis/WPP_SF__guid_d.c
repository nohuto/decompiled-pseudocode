/*
 * XREFs of WPP_SF__guid_d @ 0x1C003E140
 * Callers:
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00AF474 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00C5F44 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_d(unsigned __int16 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  ndisWppFastTraceMessage(&WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a3, 16LL, &v4, 4LL, 0LL);
}
