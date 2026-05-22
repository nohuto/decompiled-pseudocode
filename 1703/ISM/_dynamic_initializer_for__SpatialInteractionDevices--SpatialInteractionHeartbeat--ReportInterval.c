/*
 * XREFs of _dynamic_initializer_for__SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64__ @ 0x1800013F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 dynamic_initializer_for__SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64__()
{
  unsigned __int64 result; // rax
  DWORD v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v3 = 0;
  v2 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Analog\\Holographic",
         L"SpatialInteractionHeartbeatReportIntervalMsec",
         0x10u,
         &v1,
         &v3,
         &v2)
    || v1 != 4
    || (result = v3, v2 != 4) )
  {
    result = 300000LL;
  }
  SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64 = result;
  return result;
}
