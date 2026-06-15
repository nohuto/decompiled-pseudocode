/*
 * XREFs of ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x180068580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceStateChanged(CAudioSrv *this, const unsigned __int16 *a2)
{
  return CAudioSrv::QueueOnDeviceWorkItem((char *)this - 64, a2, 1LL);
}
