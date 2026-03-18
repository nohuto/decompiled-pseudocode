/*
 * XREFs of ApiSetPostPointerDeviceArrival @ 0x1C00CD53C
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsPostPointerDeviceInRangeMessageSupported_0 @ 0x1C0002CD0 (IsPostPointerDeviceInRangeMessageSupported_0.c)
 *     PostPointerDeviceInRangeMessage_0 @ 0x1C0002CD8 (PostPointerDeviceInRangeMessage_0.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C00A7A10 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C00A7A40 (EtwTracePointerDeviceInRangeMessageStop.c)
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
