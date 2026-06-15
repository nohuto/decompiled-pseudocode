/*
 * XREFs of ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x180068560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceRemoved(CAudioSrv *this, const unsigned __int16 *a2)
{
  return CAudioSrv::QueueOnDeviceWorkItem((char *)this - 64, a2, 3LL);
}
