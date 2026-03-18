/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C0173DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r14
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessDxgProcess; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  int *v11; // rax
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8

  v3 = (int *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2091);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    v11 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v11 = (int *)MmUserProbeAddress;
    v12 = *v11;
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(ProcessDxgProcess + 80));
    if ( !*(_DWORD *)(ProcessDxgProcess + 352) )
      *(_DWORD *)(ProcessDxgProcess + 352) = v12;
    v13 = *(_DWORD *)(ProcessDxgProcess + 352);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(ProcessDxgProcess + 80));
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (int *)MmUserProbeAddress;
    *v3 = v13;
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v15, 2091);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v9, 2091);
    return 3221225485LL;
  }
}
