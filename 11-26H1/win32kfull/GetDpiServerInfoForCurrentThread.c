/*
 * XREFs of GetDpiServerInfoForCurrentThread @ 0x140302578
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowNCMetrics @ 0x140031DA0 (GetWindowNCMetrics.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14011FD74 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     CreateCompatiblePublicDC @ 0x140122300 (CreateCompatiblePublicDC.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     IsSysFontAndDefaultMode @ 0x1401F9248 (IsSysFontAndDefaultMode.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402D1ADC (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     GetDpiServerInfoForCurrentProcess @ 0x14030253C (GetDpiServerInfoForCurrentProcess.c)
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall GetDpiServerInfoForCurrentThread(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v1 )
    return GetDpiServerInfoForDpi(v1);
  else
    return GetDpiServerInfoForCurrentProcess(511LL);
}
