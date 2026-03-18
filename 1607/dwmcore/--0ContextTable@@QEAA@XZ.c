/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800B8108
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180001420 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  dword_1801F0210 = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_1801F0218);
  return (ContextTable *)&Block;
}
