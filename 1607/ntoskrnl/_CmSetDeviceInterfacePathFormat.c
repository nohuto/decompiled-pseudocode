/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1404D9D6C
 * Callers:
 *     PiSwDeviceInterfacesUpdateState @ 0x140483938 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x140486F20 (PiSwDeviceInterfaceSetState.c)
 *     PiUEventCopyEventData @ 0x14048D2AC (PiUEventCopyEventData.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404CEFD8 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14056471C (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1404DF4B0 (_CmValidateDeviceInterfaceName.c)
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
