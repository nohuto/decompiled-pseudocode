/*
 * XREFs of _dynamic_initializer_for__Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::ReportIntervalQpc__ @ 0x180001500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 dynamic_initializer_for__Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::ReportIntervalQpc__()
{
  unsigned int v0; // eax
  __int64 v1; // rcx
  unsigned __int64 result; // rax
  DWORD v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v5 = 0;
  v4 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Analog\\Holographic",
         L"GetPoseAtTimeHeartbeatReportIntervalMsec",
         0x10u,
         &v3,
         &v5,
         &v4)
    || v3 != 4
    || (v0 = v5, v4 != 4) )
  {
    v0 = 300000;
  }
  v1 = qword_1800D3928 * v0;
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 63;
  Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::ReportIntervalQpc = v1 / 1000;
  return result;
}
