/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000496C
 * Callers:
 *     sub_1C00BFFB8 @ 0x1C00BFFB8 (sub_1C00BFFB8.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00A69D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(VIDPN_MGR *this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+38h] [rbp+10h]

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    *((_OWORD *)a2 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_QWORD *)a2 + 4) = PsGetCurrentThreadId();
    v10 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v10 * KeQueryTimeIncrement();
    if ( *((_QWORD *)this + 63) )
    {
      if ( **((struct _KTHREAD ***)this + 5) != KeGetCurrentThread() )
      {
        v6 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v6);
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(*((DXGDIAGNOSTICS **)this + 63), a2);
    }
    else
    {
      v8 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v8 + 24) = a2;
      *(_QWORD *)(v8 + 32) = this;
      WdLogEvent5_WdError(v8);
      return 3221225860LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
