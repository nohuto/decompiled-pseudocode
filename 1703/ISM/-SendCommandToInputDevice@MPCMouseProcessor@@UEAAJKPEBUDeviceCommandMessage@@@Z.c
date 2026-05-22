/*
 * XREFs of ?SendCommandToInputDevice@MPCMouseProcessor@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180041C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::SendCommandToInputDevice(
        MPCMouseProcessor *this,
        __int64 a2,
        const struct DeviceCommandMessage *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct DeviceCommandMessage *))(**((_QWORD **)this + 28)
                                                                                         + 24LL))(
           *((_QWORD *)this + 28),
           a2,
           a3);
}
