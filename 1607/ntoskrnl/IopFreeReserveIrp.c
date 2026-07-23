/*
 * XREFs of IopFreeReserveIrp @ 0x1401C4C78
 * Callers:
 *     IopFreeIrp @ 0x140055960 (IopFreeIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  __int16 *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = &word_1403209D0;
    _InterlockedExchange(&dword_1403209C8, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_1403209E8 )
  {
    v1 = &word_1403209F8;
    _InterlockedExchange(&dword_1403209F0, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_140320A10 )
  {
    v1 = &word_140320A20;
    _InterlockedExchange(&dword_140320A18, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
