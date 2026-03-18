/*
 * XREFs of ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C009FB78
 * Callers:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0008128 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_ADAPTER::~SESSION_ADAPTER(SESSION_ADAPTER *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 12)
    || *((_QWORD *)this + 2)
    || *((_QWORD *)this + 3)
    || *((_QWORD *)this + 7)
    || *((_QWORD *)this + 8)
    || *((_DWORD *)this + 19)
    || *((_DWORD *)this + 18)
    || *((SESSION_ADAPTER **)this + 10) != (SESSION_ADAPTER *)((char *)this + 80) )
  {
    v1 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v1 + 24) = 1501LL;
    WdLogEvent5_WdAssertion(v1);
  }
}
