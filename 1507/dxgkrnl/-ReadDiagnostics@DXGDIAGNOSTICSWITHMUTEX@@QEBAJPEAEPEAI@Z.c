/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C0020AB8
 * Callers:
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01533C8 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C013FFE0 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICSWITHMUTEX::ReadDiagnostics(
        DXGDIAGNOSTICSWITHMUTEX *this,
        unsigned __int8 *a2,
        unsigned int *a3,
        __int64 a4)
{
  DXGFASTMUTEX *v6; // rcx
  __int64 v8; // rax
  unsigned int Diagnostics; // ebx

  v6 = (DXGFASTMUTEX *)*((_QWORD *)this + 3);
  if ( v6 )
  {
    DXGFASTMUTEX::Acquire(v6);
    Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(this, a2, a3);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 3));
    return Diagnostics;
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdWarning(v8);
    return 3223193060LL;
  }
}
