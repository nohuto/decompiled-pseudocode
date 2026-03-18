/*
 * XREFs of ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C0157634
 * Callers:
 *     OutputDuplGetDiagnosticBuffer @ 0x1C015A5F0 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C00209AC (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C0157ADC (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDiagnosticBuffer(
        DXGDIAGNOSTICSWITHMUTEX **this,
        struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  __int64 v4; // r9
  DXGDIAGNOSTICSWITHMUTEX *v6; // rcx
  unsigned int *v7; // r8
  unsigned int v8; // eax

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  if ( *(_DWORD *)a2 )
    v6 = this[7];
  else
    v6 = this[8];
  if ( v6 )
  {
    v7 = (unsigned int *)((char *)a2 + 4);
    v8 = *(_DWORD *)a2 != 0 ? 0x1000 : 0;
    if ( *((_DWORD *)a2 + 1) < v8 )
    {
      *v7 = v8;
      return 1075707914LL;
    }
    DXGDIAGNOSTICSWITHMUTEX::ReadDiagnostics(v6, (unsigned __int8 *)a2 + 8, v7, v4);
  }
  else
  {
    *((_DWORD *)a2 + 1) = 0;
  }
  return 0LL;
}
