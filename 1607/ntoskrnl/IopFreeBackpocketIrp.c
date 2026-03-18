/*
 * XREFs of IopFreeBackpocketIrp @ 0x1401C4D34
 * Callers:
 *     IopFreeReserveIrp @ 0x1401C4D94 (IopFreeReserveIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  __int16 *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140320A28 = 0LL;
    _InterlockedExchange(&dword_140320A20, 0);
    v2 = &word_140320A30;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  if ( a1 == qword_140320A48 )
  {
    qword_140320A58 = 0LL;
    _InterlockedExchange(&dword_140320A50, 0);
    v2 = &word_140320A60;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  result = (int)qword_140320A78;
  *(_QWORD *)&a1->Type = qword_140320A78;
  qword_140320A78 = a1;
  return result;
}
