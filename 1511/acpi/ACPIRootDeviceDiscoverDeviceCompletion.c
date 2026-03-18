/*
 * XREFs of ACPIRootDeviceDiscoverDeviceCompletion @ 0x1C0040260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIRootDeviceDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)a1 = a3;
    *(_DWORD *)(a1 + 16) = a2;
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
}
