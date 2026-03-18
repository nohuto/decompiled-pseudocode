/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C0173FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8

  v3 = (_DWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2090);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(ProcessDxgProcess + 80));
    v12 = *(_DWORD *)(v8 + 352);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 80));
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = v12;
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v14, 2090);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v10, 2090);
    return 3221225485LL;
  }
}
