/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1404F6DE0
 * Callers:
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiUEventCopyEventData @ 0x14048CC98 (PiUEventCopyEventData.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1404C35D0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404C67BC (PiSwDeviceInterfaceSetState.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404ECE6C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PiDmObjectCreate @ 0x1405641DC (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1404FC520 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // xmm0_8

  result = CmValidateDeviceInterfaceName();
  if ( (int)result >= 0 )
  {
    if ( a3 )
      v6 = *(_QWORD *)L"\\??\\";
    else
      v6 = *(_QWORD *)L"\\\\?\\";
    *a2 = v6;
  }
  return result;
}
