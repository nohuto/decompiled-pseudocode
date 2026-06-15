/*
 * XREFs of WPP_SF_gd @ 0x18009CE68
 * Callers:
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1800992A4 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x18009B0A0 (-OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gd(__int64 a1, unsigned __int16 a2, __int64 a3, double a4)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids, a2, &v5);
}
