/*
 * XREFs of ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C0084820
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall HMGRTABLE::GetEntryObject(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 241LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v6 = 2 * v5;
  v7 = *(unsigned int *)(*(_QWORD *)this + 8 * v6 + 8);
  if ( (v7 & 0xF) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(*(_QWORD *)this, v7, a3, a4);
    *(_QWORD *)(v10 + 24) = 242LL;
    WdLogEvent5_WdAssertion(v10);
  }
  return *(void **)(*(_QWORD *)this + 8 * v6);
}
