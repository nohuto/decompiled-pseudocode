/*
 * XREFs of tracePointerFlags @ 0x1C00C81E0
 * Callers:
 *     traceFrame @ 0x1C00C8104 (traceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00C0950 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall tracePointerFlags(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( (a1 & 1) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x23u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "NEW");
  if ( (a1 & 2) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x24u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "INRANGE");
  if ( (a1 & 4) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x25u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "INCONTACT");
  if ( (a1 & 0x10) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x26u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "FIRSTBUTTON");
  if ( (a1 & 0x20) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x27u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "SECONDBUTTON");
  if ( (a1 & 0x40) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x28u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "THIRDBUTTON");
  if ( (a1 & 0x2000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x29u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "PRIMARY");
  if ( (a1 & 0x4000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x2Au,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "CONFIDENCE");
  if ( (a1 & 0x8000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x2Bu,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "CANCELED");
  if ( (a1 & 0x10000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x2Cu,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "DOWN");
  if ( (a1 & 0x20000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x2Du,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "UPDATE");
  if ( (a1 & 0x40000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x2Eu,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "UP");
  if ( (a1 & 0x80000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x2Fu,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "WHEEL");
  if ( (a1 & 0x100000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x30u,
               (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
               "HWHEEL");
  if ( (a1 & 0x200000) != 0 )
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             a2,
             5u,
             0x31u,
             (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
             "CAPTURECHANGED");
  return result;
}
