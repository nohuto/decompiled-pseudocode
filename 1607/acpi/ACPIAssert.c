/*
 * XREFs of ACPIAssert @ 0x1C0007334
 * Callers:
 *     ACPIProcessHardwareInformation @ 0x1C0080E90 (ACPIProcessHardwareInformation.c)
 *     ACPILoadTableCheckSum @ 0x1C00A6AE0 (ACPILoadTableCheckSum.c)
 * Callees:
 *     WPP_RECORDER_SF_LLss @ 0x1C00439F4 (WPP_RECORDER_SF_LLss.c)
 */

__int64 __fastcall ACPIAssert(int a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  if ( !a1 )
    return WPP_RECORDER_SF_LLss(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  return result;
}
