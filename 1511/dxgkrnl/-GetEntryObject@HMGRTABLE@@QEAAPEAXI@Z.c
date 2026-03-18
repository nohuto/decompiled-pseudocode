/*
 * XREFs of ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C0094388
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall HMGRTABLE::GetEntryObject(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 227LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v4 = 2 * v3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 8 * v4 + 8) & 0xF) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(*(_QWORD *)this);
    *(_QWORD *)(v7 + 24) = 228LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return *(void **)(*(_QWORD *)this + 8 * v4);
}
