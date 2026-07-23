/*
 * XREFs of IopFreeBackpocketIrp @ 0x1401C4C18
 * Callers:
 *     IopFreeReserveIrp @ 0x1401C4C78 (IopFreeReserveIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  __int16 *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140320A48 = 0LL;
    _InterlockedExchange(&dword_140320A40, 0);
    v2 = &word_140320A50;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  if ( a1 == qword_140320A68 )
  {
    qword_140320A78 = 0LL;
    _InterlockedExchange(&dword_140320A70, 0);
    v2 = &word_140320A80;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  result = (int)qword_140320A98;
  *(_QWORD *)&a1->Type = qword_140320A98;
  qword_140320A98 = a1;
  return result;
}
