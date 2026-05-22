/*
 * XREFs of ?ShouldAttachDevice@MPCGamepadProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18002D5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::ShouldAttachDevice(MPCGamepadProcessor *this, struct DeviceInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 21) + 32LL))(
           *((_QWORD *)this + 21),
           a2);
}
