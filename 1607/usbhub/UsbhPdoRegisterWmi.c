/*
 * XREFs of UsbhPdoRegisterWmi @ 0x1C00277B0
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

NTSTATUS __fastcall UsbhPdoRegisterWmi(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  int v6; // edx
  NTSTATUS result; // eax

  v5 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  v5[332] = 3;
  v6 = v5[332];
  if ( (v5[353] & 0x24) != 0 )
    v6 = 2;
  *((_QWORD *)v5 + 167) = &USB_PortWmiGuidList;
  *((_QWORD *)v5 + 168) = UsbhPdoQueryWmiRegInfo;
  *((_QWORD *)v5 + 169) = UsbhPdoQueryWmiDataBlock;
  v5[332] = v6;
  *((_QWORD *)v5 + 170) = 0LL;
  *((_QWORD *)v5 + 171) = 0LL;
  *((_QWORD *)v5 + 172) = 0LL;
  *((_QWORD *)v5 + 173) = 0LL;
  result = IoWMIRegistrationControl(DeviceObject, 1u);
  v5[353] |= 0x80u;
  return result;
}
