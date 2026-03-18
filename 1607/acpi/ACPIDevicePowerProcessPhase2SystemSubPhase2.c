/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C004A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004B650 (WPP_RECORDER_SF_qd.c)
 *     LinkNodeRestoreHardwareState @ 0x1C00619F4 (LinkNodeRestoreHardwareState.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase2(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 5;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    63,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    5);
  if ( *(_DWORD *)(a1 + 104) != 1 || (v1 = LinkNodeRestoreHardwareState(v3, a1), result = 259LL, v1 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
    return 0LL;
  }
  return result;
}
