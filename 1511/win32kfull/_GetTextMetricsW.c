/*
 * XREFs of _GetTextMetricsW @ 0x1C00E7D40
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
 *     DT_InitDrawTextInfo @ 0x1C024B11C (DT_InitDrawTextInfo.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C00E7DA8 (GreGetTextMetricsW.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall GetTextMetricsW(HDC a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  int v6; // ecx
  __int128 v7; // xmm0
  _OWORD v8[5]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x44uLL);
  result = GreGetTextMetricsW(a1);
  v5 = v8[1];
  v6 = DWORD2(v8[3]);
  *(_OWORD *)a2 = v8[0];
  v7 = v8[2];
  *(_OWORD *)(a2 + 16) = v5;
  *(_QWORD *)&v5 = *(_QWORD *)&v8[3];
  *(_OWORD *)(a2 + 32) = v7;
  *(_QWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 56) = v6;
  return result;
}
