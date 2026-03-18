/*
 * XREFs of tracePointerFlags @ 0x1C00D9530
 * Callers:
 *     traceFrame @ 0x1C00D9450 (traceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00CDD90 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall tracePointerFlags(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( (a1 & 1) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x1Cu,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "NEW");
  if ( (a1 & 2) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x1Du,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "INRANGE");
  if ( (a1 & 4) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x1Eu,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "INCONTACT");
  if ( (a1 & 0x10) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x1Fu,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "FIRSTBUTTON");
  if ( (a1 & 0x20) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x20u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "SECONDBUTTON");
  if ( (a1 & 0x40) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x21u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "THIRDBUTTON");
  if ( (a1 & 0x2000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x22u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "PRIMARY");
  if ( (a1 & 0x4000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x23u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "CONFIDENCE");
  if ( (a1 & 0x8000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x24u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "CANCELED");
  if ( (a1 & 0x10000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x25u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "DOWN");
  if ( (a1 & 0x20000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x26u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "UPDATE");
  if ( (a1 & 0x40000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x27u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "UP");
  if ( (a1 & 0x80000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x28u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "WHEEL");
  if ( (a1 & 0x100000) != 0 )
    result = WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               5u,
               0x29u,
               (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
               "HWHEEL");
  if ( (a1 & 0x200000) != 0 )
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             a2,
             5u,
             0x2Au,
             (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
             "CAPTURECHANGED");
  return result;
}
