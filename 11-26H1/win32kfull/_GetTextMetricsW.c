/*
 * XREFs of _GetTextMetricsW @ 0x140122AE8
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14011FD74 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     xxxPSMTextOut @ 0x1401FB8A8 (xxxPSMTextOut.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x140122B58 (GreGetTextMetricsW.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GetTextMetricsW(HDC a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  int v6; // ecx
  __int128 v7; // xmm0
  struct tagTEXTMETRICW v8; // [rsp+20h] [rbp-58h] BYREF

  memset_0(&v8, 0, 0x44uLL);
  result = GreGetTextMetricsW(a1, &v8);
  v5 = *(_OWORD *)&v8.tmExternalLeading;
  v6 = *(_DWORD *)&v8.tmCharSet;
  *(_OWORD *)a2 = *(_OWORD *)&v8.tmHeight;
  v7 = *(_OWORD *)&v8.tmOverhang;
  *(_OWORD *)(a2 + 16) = v5;
  *(_QWORD *)&v5 = *(_QWORD *)&v8.tmDefaultChar;
  *(_OWORD *)(a2 + 32) = v7;
  *(_QWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 56) = v6;
  return result;
}
