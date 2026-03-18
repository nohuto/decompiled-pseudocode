/*
 * XREFs of IopFreeBackpocketIrp @ 0x1401B71F4
 * Callers:
 *     IopFreeReserveIrp @ 0x1401B7254 (IopFreeReserveIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  __int16 *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_1402FB4C8 = 0LL;
    _InterlockedExchange(&dword_1402FB4C0, 0);
    v2 = &word_1402FB4D0;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  if ( a1 == qword_1402FB4E8 )
  {
    qword_1402FB4F8 = 0LL;
    _InterlockedExchange(&dword_1402FB4F0, 0);
    v2 = &word_1402FB500;
    return KeSetEvent((PRKEVENT)v2, a2, 0);
  }
  result = (int)qword_1402FB518;
  *(_QWORD *)&a1->Type = qword_1402FB518;
  qword_1402FB518 = a1;
  return result;
}
