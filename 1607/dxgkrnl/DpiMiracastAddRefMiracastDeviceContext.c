/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x1C0012900
 * Callers:
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00C6070 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C00E02B0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C0196C80 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01973F8 (DpiMiracastGetDeviceContextFromName.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
