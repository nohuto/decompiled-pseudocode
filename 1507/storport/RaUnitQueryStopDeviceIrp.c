/*
 * XREFs of RaUnitQueryStopDeviceIrp @ 0x1C0053E14
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitQueryStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 40) = 3;
  return RaidCompleteRequestEx(a2, 0, *(_DWORD *)(a1 + 628) != 0 ? 0x80000011 : 0);
}
