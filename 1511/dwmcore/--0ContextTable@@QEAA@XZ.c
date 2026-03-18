/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x18006A068
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x1800013A0 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  dword_1801A3EA8 = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_1801A3EB0);
  return (ContextTable *)&Block;
}
