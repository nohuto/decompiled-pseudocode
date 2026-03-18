/*
 * XREFs of PnpQueryDeviceRelations @ 0x1403F1B44
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x1403F0DB0 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x140570A48 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x14064B0AC (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x1400082D8 (PnpSendIrp.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  _DWORD v10[20]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 1819;
  v10[2] = a2;
  return PnpSendIrp(a1, (__int64)v10, v8, a3, a4);
}
