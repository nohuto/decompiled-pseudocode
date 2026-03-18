/*
 * XREFs of IopFreeReserveIrp @ 0x1401F242C
 * Callers:
 *     IopFreeIrp @ 0x14004BC80 (IopFreeIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  __int16 *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = &word_14034B8D0;
    _InterlockedExchange(&dword_14034B8C8, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_14034B8E8 )
  {
    v1 = &word_14034B8F8;
    _InterlockedExchange(&dword_14034B8F0, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  if ( a1 == qword_14034B910 )
  {
    v1 = &word_14034B920;
    _InterlockedExchange(&dword_14034B918, 0);
    return KeSetEvent((PRKEVENT)v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
