/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C017AFF4
 * Callers:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0027474 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C017BBD0 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z @ 0x1C0027418 (--_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C017BC2C (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this)
{
  __int64 v2; // rax
  OUTPUTDUPL_MGR *v3; // rcx
  DXGDIAGNOSTICSWITHMUTEX *v4; // rcx
  DXGDIAGNOSTICSWITHMUTEX *v5; // rcx

  if ( this[4] != (OUTPUTDUPL_MGR *)(this + 4) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 789LL;
    WdLogEvent5_WdAssertion(v2);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v3 = this[3];
  if ( v3 )
  {
    operator delete(v3);
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
