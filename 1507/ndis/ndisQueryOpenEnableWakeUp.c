/*
 * XREFs of ndisQueryOpenEnableWakeUp @ 0x1C00CAF6C
 * Callers:
 *     ndisQueryEnableWakeUp @ 0x1C00CAF04 (ndisQueryEnableWakeUp.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueryOpenEnableWakeUp(__int64 a1, __int64 a2)
{
  char v4; // dl
  unsigned int v5; // edi
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v4 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(0xAu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
    v4 = byte_1C0085312;
  }
  v5 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    **(_DWORD **)(a2 + 40) = *(_DWORD *)(a1 + 304);
    *(_QWORD *)(a2 + 52) = 4LL;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 4;
    v5 = -1073676268;
  }
  if ( (unsigned __int8)v4 >= 4u )
  {
    v7 = v5;
    WPP_SF_qqd(0xBu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2, v7);
  }
  return v5;
}
