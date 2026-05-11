/*
 * XREFs of PinReset @ 0x1C00158F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001EE8 (WPP_RECORDER_SF_.c)
 */

__int64 PinReset()
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             8u,
             0x13u,
             (__int64)&WPP_89771fce86223ed4814147843477e0f4_Traceguids);
  return result;
}
