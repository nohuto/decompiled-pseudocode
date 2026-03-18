/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C011F2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rcx

  if ( *((_QWORD *)this + 99) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 14422LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 121) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 14423LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 92) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 14429LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_QWORD *)this + 97) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 14430LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (void *)*((_QWORD *)this + 103);
  if ( v9 )
    ObfDereferenceObject(v9);
}
