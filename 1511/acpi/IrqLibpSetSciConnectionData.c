/*
 * XREFs of IrqLibpSetSciConnectionData @ 0x1C0086434
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006D578 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

NTSTATUS __fastcall IrqLibpSetSciConnectionData(__int64 a1)
{
  __int128 v2; // xmm1
  struct _DEVICE_OBJECT *v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _QWORD Data[12]; // [rsp+40h] [rbp-78h] BYREF

  memset(Data, 0, sizeof(Data));
  v2 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&Data[1] = *(_OWORD *)a1;
  v3 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 728);
  v4 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)&Data[3] = v2;
  LODWORD(Data[0]) = 1;
  v5 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)&Data[5] = v4;
  v6 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)&Data[7] = v5;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)&Data[9] = v6;
  Data[11] = v5;
  return IoSetDevicePropertyData(v3, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, 0x60u, Data);
}
