/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1404DDC2C
 * Callers:
 *     PiUEventCopyEventData @ 0x1403BF98C (PiUEventCopyEventData.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140494BAC (PiSwDeviceInterfacesUpdateState.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404E3DF0 (PiSwDeviceInterfaceSetState.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiDmObjectCreate @ 0x14051B290 (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x14043AD30 (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, _QWORD *a2, char a3)
{
  NTSTATUS result; // eax
  __int64 v6; // xmm0_8

  result = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( result >= 0 )
  {
    if ( a3 )
      v6 = *(_QWORD *)L"\\??\\";
    else
      v6 = *(_QWORD *)L"\\\\?\\";
    *a2 = v6;
  }
  return result;
}
