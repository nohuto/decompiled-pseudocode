/*
 * XREFs of ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C007C8FC
 * Callers:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0001B90 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_ADAPTER::~SESSION_ADAPTER(SESSION_ADAPTER *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 16)
    || *((_QWORD *)this + 2)
    || *((_QWORD *)this + 3)
    || *((_QWORD *)this + 9)
    || *((_QWORD *)this + 10)
    || *((_DWORD *)this + 23)
    || *((_DWORD *)this + 22)
    || *((SESSION_ADAPTER **)this + 12) != (SESSION_ADAPTER *)((char *)this + 96) )
  {
    v1 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v1 + 24) = 1742LL;
    WdLogEvent5_WdAssertion(v1);
  }
}
