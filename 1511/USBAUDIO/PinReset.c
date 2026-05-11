/*
 * XREFs of PinReset @ 0x1C00148D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C28 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall PinReset(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             a2,
             8,
             18,
             (__int64)&WPP_f607821aa81e8dd9b89bc5fa497d19ab_Traceguids);
  return result;
}
