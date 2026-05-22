/*
 * XREFs of ?ShouldAttachDevice@MPCProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180047BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::ShouldAttachDevice(MPCProcessor *this, struct DeviceInfo *a2)
{
  return (*((_DWORD *)a2 + 1) & 0x200) != 0;
}
