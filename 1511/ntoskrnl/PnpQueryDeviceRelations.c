/*
 * XREFs of PnpQueryDeviceRelations @ 0x1403D18C4
 * Callers:
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x14049EE70 (PnpProcessRelation.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryPowerRelations @ 0x14053E790 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x140616688 (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x14001ACF4 (PnpSendIrp.c)
 *     memset @ 0x140166CC0 (memset.c)
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
