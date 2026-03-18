/*
 * XREFs of IrqLibpSetSciConnectionData @ 0x1C0086424
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006F918 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

NTSTATUS __fastcall IrqLibpSetSciConnectionData(_OWORD *a1)
{
  __int128 v2; // xmm1
  struct _DEVICE_OBJECT *v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _QWORD Data[12]; // [rsp+40h] [rbp-78h] BYREF

  memset(Data, 0, 0x58uLL);
  v2 = a1[1];
  *(_OWORD *)&Data[1] = *a1;
  v3 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 728);
  v4 = a1[2];
  *(_OWORD *)&Data[3] = v2;
  LODWORD(Data[0]) = 1;
  v5 = a1[3];
  *(_OWORD *)&Data[5] = v4;
  v6 = a1[4];
  *(_OWORD *)&Data[7] = v5;
  *(_OWORD *)&Data[9] = v6;
  return IoSetDevicePropertyData(v3, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, 0x58u, Data);
}
