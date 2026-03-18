/*
 * XREFs of ??1SESSION_VIEW@@QEAA@XZ @ 0x1C008EFD4
 * Callers:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0004EBC (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 1180LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
