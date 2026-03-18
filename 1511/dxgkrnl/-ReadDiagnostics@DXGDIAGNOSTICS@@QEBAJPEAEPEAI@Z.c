/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C01464B8
 * Callers:
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C00209AC (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00A69D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(DXGDIAGNOSTICS *this, unsigned __int8 *a2, unsigned int *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // edi
  size_t v9; // rax
  const void *v10; // rdx
  unsigned int v11; // ebx
  size_t v12; // r8
  unsigned __int8 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax

  if ( !a2 || !a3 || !*a3 )
    return 3221225507LL;
  memset(a2, 0, *a3);
  v6 = *((unsigned int *)this + 1);
  v7 = *((_DWORD *)this + 2);
  if ( (unsigned int)v6 > v7 )
    v7 += *(_DWORD *)this;
  if ( v7 - (unsigned int)v6 < *a3 )
    *a3 = v7 - v6;
  if ( v7 == (_DWORD)v6 )
  {
    *a3 = 0;
  }
  else
  {
    v9 = *a3;
    v10 = (const void *)(*((_QWORD *)this + 2) + v6);
    v11 = v9 + v6;
    if ( (unsigned int)(v9 + v6) <= *(_DWORD *)this )
    {
      v12 = v9;
      v13 = a2;
    }
    else
    {
      memmove(a2, v10, (unsigned int)(*(_DWORD *)this - v6));
      v10 = (const void *)*((_QWORD *)this + 2);
      v12 = v11 - *(_DWORD *)this;
      v13 = &a2[(unsigned int)(*(_DWORD *)this - v6)];
    }
    memmove(v13, v10, v12);
    if ( v11 > v7 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v15 + 24) = 2241LL;
      WdLogEvent5_WdAssertion(v15);
    }
  }
  return 0LL;
}
