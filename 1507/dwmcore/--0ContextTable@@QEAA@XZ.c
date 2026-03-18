/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x180097490
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x1800013D0 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  dword_180193130 = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_180193138);
  return (ContextTable *)&Block;
}
