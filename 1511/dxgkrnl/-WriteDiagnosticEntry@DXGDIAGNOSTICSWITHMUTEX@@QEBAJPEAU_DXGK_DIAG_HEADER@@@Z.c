/*
 * XREFs of ?WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0020A18
 * Callers:
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0157FD4 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00A69D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICSWITHMUTEX::WriteDiagnosticEntry(
        DXGDIAGNOSTICSWITHMUTEX *this,
        struct _DXGK_DIAG_HEADER *Src,
        __int64 a3,
        __int64 a4)
{
  union _LARGE_INTEGER *v6; // rcx
  __int64 v7; // rax
  unsigned int v9; // ebx

  v6 = (union _LARGE_INTEGER *)*((_QWORD *)this + 3);
  if ( v6 )
  {
    DXGFASTMUTEX::Acquire(v6);
    v9 = DXGDIAGNOSTICS::WriteDiagnosticEntry(this, Src);
    DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)this + 3));
    return v9;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(0LL, Src, a3, a4);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdWarning(v7);
    return 3223193060LL;
  }
}
