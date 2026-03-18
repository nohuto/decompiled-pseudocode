/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0004114
 * Callers:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00040F4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax

  if ( *((_QWORD *)this + 1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 299LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 300LL;
    WdLogEvent5_WdAssertion(v6);
  }
}
