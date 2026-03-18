/*
 * XREFs of IopFreeReserveIrp @ 0x1401B7254
 * Callers:
 *     IopFreeIrp @ 0x140087090 (IopFreeIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  __int16 *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = &word_1402FB450;
    _InterlockedExchange(&dword_1402FB448, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_1402FB468 )
  {
    v1 = &word_1402FB478;
    _InterlockedExchange(&dword_1402FB470, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_1402FB490 )
  {
    v1 = &word_1402FB4A0;
    _InterlockedExchange(&dword_1402FB498, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
