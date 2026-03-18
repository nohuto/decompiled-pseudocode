/*
 * XREFs of ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C017C1E4
 * Callers:
 *     OutputDuplGetDiagnosticBuffer @ 0x1C017F5F8 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C00274D0 (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     ?GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z @ 0x1C017C24C (-GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C017C778 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDiagnosticBuffer(
        OUTPUTDUPL_MGR **this,
        struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  OUTPUTDUPL_MGR *v5; // rcx
  unsigned int DiagnosticBufferSize; // eax
  DXGDIAGNOSTICSWITHMUTEX *v7; // rcx
  __int64 v8; // r9
  unsigned int *v9; // r8

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  if ( *(_DWORD *)a2 )
    v5 = this[7];
  else
    v5 = this[8];
  if ( v5 )
  {
    DiagnosticBufferSize = OUTPUTDUPL_MGR::GetDiagnosticBufferSize(v5, *(_DWORD *)a2);
    v9 = (unsigned int *)((char *)a2 + 4);
    if ( *((_DWORD *)a2 + 1) < DiagnosticBufferSize )
    {
      *v9 = DiagnosticBufferSize;
      return 1075707914LL;
    }
    DXGDIAGNOSTICSWITHMUTEX::ReadDiagnostics(v7, (unsigned __int8 *)a2 + 8, v9, v8);
  }
  else
  {
    *((_DWORD *)a2 + 1) = 0;
  }
  return 0LL;
}
