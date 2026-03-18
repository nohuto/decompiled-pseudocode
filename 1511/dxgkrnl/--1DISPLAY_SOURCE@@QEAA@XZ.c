/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C0124DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // rcx

  if ( *((_QWORD *)this + 99) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 14792LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_QWORD *)this + 121) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 14793LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_QWORD *)this + 92) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 14799LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_QWORD *)this + 97) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 14800LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (void *)*((_QWORD *)this + 103);
  if ( v6 )
    ObfDereferenceObject(v6);
}
