/*
 * XREFs of IopFreeBackpocketIrp @ 0x1401F23CC
 * Callers:
 *     IopFreeReserveIrp @ 0x1401F242C (IopFreeReserveIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  __int16 *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_14034B948 = 0LL;
    _InterlockedExchange(&dword_14034B940, 0);
    v2 = &word_14034B950;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  if ( a1 == qword_14034B968 )
  {
    qword_14034B978 = 0LL;
    _InterlockedExchange(&dword_14034B970, 0);
    v2 = &word_14034B980;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  result = (int)qword_14034B998;
  *(_QWORD *)&a1->Type = qword_14034B998;
  qword_14034B998 = a1;
  return result;
}
