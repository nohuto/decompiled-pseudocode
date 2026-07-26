/*
 * XREFs of ndisSendWithPause @ 0x1C0052210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisSendPacketsWithPause @ 0x1C0051EF0 (ndisSendPacketsWithPause.c)
 */

__int64 __fastcall ndisSendWithPause(__int64 a1, struct _NDIS_PACKET *a2)
{
  struct _NDIS_PACKET *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x32u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2);
  ndisSendPacketsWithPause(a1, &v4, 1u);
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x33u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, v4);
  return 259LL;
}
