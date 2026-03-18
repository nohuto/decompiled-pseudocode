/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C00CC990
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  int v20; // eax
  struct _EX_RUNDOWN_REF *v21; // rsi
  __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v28; // rax
  struct _EX_RUNDOWN_REF *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v3);
  CurrentThread = KeGetCurrentThread();
  v10 = ProcessDxgProcess;
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v15 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v10 != -184 && *(struct _KTHREAD **)(v10 + 192) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v16 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *(_DWORD *)(v10 + 200);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(v10 + 184, 0LL);
  }
  v20 = *(_DWORD *)(a1 + 8);
  if ( v20 == 1 )
  {
    v21 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v22 + 24) = 310LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = v21 + 11;
  }
  else
  {
    if ( v20 != 2 )
    {
      v31 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v31 + 24) = *(int *)(a1 + 8);
      WdLogEvent5_WdError(v31);
      goto LABEL_30;
    }
    v29 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v30 + 24) = 331LL;
      WdLogEvent5_WdAssertion(v30);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v29[10]);
    v23 = v29 + 9;
  }
  ExReleaseRundownProtection(v23);
  if ( v15 )
  {
    if ( --*(_DWORD *)(v15 + 136) < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
      v28[3] = 275LL;
      v28[4] = 25LL;
      v28[5] = *(int *)(v15 + 136);
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
  }
LABEL_30:
  ExReleasePushLockSharedEx(v10 + 184, 0LL);
  KeLeaveCriticalRegion();
}
