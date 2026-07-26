/*
 * XREFs of ndisDeviceControlIrpHandler @ 0x1C0096520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisDeviceControlIrpHandler(__int64 a1, __int64 a2)
{
  return ndisDeviceControlHandler(a1, *(_QWORD *)(a1 + 64), a2);
}
