/*
 * XREFs of RaUnitQueryRemoveDeviceIrp @ 0x1C005F078
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitQueryRemoveDeviceIrp(_DWORD *a1, IRP *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1[163] || a1[165] || a1[164] )
    v2 = -2147483631;
  else
    a1[10] = 4;
  return RaidCompleteRequestEx(a2, 0, v2);
}
