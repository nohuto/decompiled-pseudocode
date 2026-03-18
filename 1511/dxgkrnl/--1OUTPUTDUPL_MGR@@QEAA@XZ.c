/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C0156514
 * Callers:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0020954 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0006E44 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z @ 0x1C00208F8 (--_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0157124 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this)
{
  __int64 v2; // rax
  DXGFASTMUTEX *v3; // rcx
  DXGDIAGNOSTICSWITHMUTEX *v4; // rcx
  DXGDIAGNOSTICSWITHMUTEX *v5; // rcx

  if ( this[4] != (OUTPUTDUPL_MGR *)(this + 4) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 745LL;
    WdLogEvent5_WdAssertion(v2);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v3 = this[3];
  if ( v3 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v3);
    this[3] = 0LL;
  }
  v4 = this[7];
  if ( v4 )
  {
    DXGDIAGNOSTICSWITHMUTEX::`scalar deleting destructor'(v4);
    this[7] = 0LL;
  }
  v5 = this[8];
  if ( v5 )
  {
    DXGDIAGNOSTICSWITHMUTEX::`scalar deleting destructor'(v5);
    this[8] = 0LL;
  }
}
