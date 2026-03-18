/*
 * XREFs of UsbhPdoRegisterWmi @ 0x1C0027D4C
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 */

NTSTATUS __fastcall UsbhPdoRegisterWmi(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  int v6; // r8d
  bool v7; // zf
  NTSTATUS result; // eax

  v5 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  v5[332] = 3;
  v6 = v5[332];
  v7 = (v5[353] & 0x24) == 0;
  *((_QWORD *)v5 + 170) = 0LL;
  if ( !v7 )
    v6 = 2;
  *((_QWORD *)v5 + 171) = 0LL;
  *((_QWORD *)v5 + 172) = 0LL;
  *((_QWORD *)v5 + 167) = &USB_PortWmiGuidList;
  *((_QWORD *)v5 + 173) = 0LL;
  *((_QWORD *)v5 + 168) = UsbhPdoQueryWmiRegInfo;
  v5[332] = v6;
  *((_QWORD *)v5 + 169) = UsbhPdoQueryWmiDataBlock;
  result = IoWMIRegistrationControl(DeviceObject, 1u);
  v5[353] |= 0x80u;
  return result;
}
