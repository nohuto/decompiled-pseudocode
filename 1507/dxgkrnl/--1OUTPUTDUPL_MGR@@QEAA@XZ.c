/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C0152274
 * Callers:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0020A60 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000CB98 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z @ 0x1C0020A04 (--_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0152E80 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  DXGFASTMUTEX *v6; // rcx
  DXGDIAGNOSTICSWITHMUTEX *v7; // rcx
  DXGDIAGNOSTICSWITHMUTEX *v8; // rcx

  if ( this[4] != (OUTPUTDUPL_MGR *)(this + 4) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 758LL;
    WdLogEvent5_WdAssertion(v5);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v6 = this[3];
  if ( v6 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v6);
    this[3] = 0LL;
  }
  v7 = this[7];
  if ( v7 )
  {
    DXGDIAGNOSTICSWITHMUTEX::`scalar deleting destructor'(v7);
    this[7] = 0LL;
  }
  v8 = this[8];
  if ( v8 )
  {
    DXGDIAGNOSTICSWITHMUTEX::`scalar deleting destructor'(v8);
    this[8] = 0LL;
  }
}
