/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0007458
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C00ADC00 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C009AD10 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(VIDPN_MGR *this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+38h] [rbp+10h]

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    *((_OWORD *)a2 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_QWORD *)a2 + 4) = PsGetCurrentThreadId();
    v11 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v11 * KeQueryTimeIncrement();
    if ( *((_QWORD *)this + 63) )
    {
      if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
      {
        v7 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v7);
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(*((DXGDIAGNOSTICS **)this + 63), a2);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = a2;
      *(_QWORD *)(v9 + 32) = this;
      WdLogEvent5_WdError(v9);
      return 3221225860LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}
