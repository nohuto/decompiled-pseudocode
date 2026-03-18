/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C00239E8
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AFB4 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C00274D0 (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(DXGDIAGNOSTICS *this, unsigned __int8 *a2, unsigned int *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // edi
  size_t v9; // rax
  const void *v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v13; // ecx
  size_t v14; // r8
  unsigned __int8 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax

  if ( !a2 || !a3 || !*a3 )
    return 3221225507LL;
  memset(a2, 0, *a3);
  v6 = *((unsigned int *)this + 5);
  v7 = *((_DWORD *)this + 6);
  if ( (unsigned int)v6 > v7 )
    v7 += *((_DWORD *)this + 4);
  if ( v7 - (unsigned int)v6 < *a3 )
    *a3 = v7 - v6;
  if ( v7 == (_DWORD)v6 )
  {
    *a3 = 0;
  }
  else
  {
    v9 = *a3;
    v10 = (const void *)(*((_QWORD *)this + 4) + v6);
    v11 = *((_DWORD *)this + 4);
    v12 = v9 + v6;
    if ( (int)v9 + (int)v6 <= v11 )
    {
      v14 = v9;
      v15 = a2;
    }
    else
    {
      memmove(a2, v10, v11 - (unsigned int)v6);
      v13 = *((_DWORD *)this + 4);
      v10 = (const void *)*((_QWORD *)this + 4);
      v14 = v12 - v13;
      v15 = &a2[(unsigned int)(v13 - v6)];
    }
    memmove(v15, v10, v14);
    if ( v12 > v7 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v17 + 24) = 2054LL;
      WdLogEvent5_WdAssertion(v17);
    }
  }
  return 0LL;
}
