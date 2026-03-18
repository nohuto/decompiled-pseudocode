/*
 * XREFs of ApiSetPostPointerDeviceArrival @ 0x1C00CE878
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsPostPointerDeviceInRangeMessageSupported_0 @ 0x1C0002D00 (IsPostPointerDeviceInRangeMessageSupported_0.c)
 *     PostPointerDeviceInRangeMessage_0 @ 0x1C0002D08 (PostPointerDeviceInRangeMessage_0.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C00ABF80 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C00ABFB0 (EtwTracePointerDeviceInRangeMessageStop.c)
 */

void __fastcall ApiSetPostPointerDeviceArrival(__int64 a1)
{
  __int64 v1; // rcx

  if ( *(_DWORD *)(a1 + 24) != 8 )
  {
    EtwTracePointerDeviceInRangeMessageStart(a1);
    if ( (int)IsPostPointerDeviceInRangeMessageSupported_0() >= 0 )
      PostPointerDeviceInRangeMessage_0();
    EtwTracePointerDeviceInRangeMessageStop(v1);
  }
}
