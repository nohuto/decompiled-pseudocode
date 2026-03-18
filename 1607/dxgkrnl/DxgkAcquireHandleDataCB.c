/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C00CC550
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00112F8 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00D3298 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rax
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r9d
  unsigned int v25; // eax
  ULONG_PTR Count; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _EX_RUNDOWN_REF *v29; // rbx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  char v46[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v47; // [rsp+28h] [rbp-30h]
  int v48; // [rsp+30h] [rbp-28h]

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 162LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  CurrentThread = KeGetCurrentThread();
  v13 = ProcessDxgProcess;
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  v47 = v13 + 184;
  if ( v13 != -184 && *(struct _KTHREAD **)(v13 + 192) == KeGetCurrentThread() )
  {
    v19 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v19 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v19);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v24 = *(_DWORD *)(v13 + 200);
      if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v21, &EventBlockThread, v22, v24);
    }
    ExAcquirePushLockSharedEx(v13 + 184, 0LL);
  }
  v25 = a1[1];
  Count = 0LL;
  v48 = 1;
  if ( v25 == 1 )
  {
    v27 = *a1;
    v28 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v13 + 224) )
    {
      v23 = *(_QWORD *)(v13 + 208);
      v27 = ((unsigned int)v27 >> 26) & 0x30;
      v22 = *(unsigned int *)(v23 + 16LL * (unsigned int)v28 + 8);
      if ( (_BYTE)v27 == (*(_BYTE *)(v23 + 16LL * (unsigned int)v28 + 8) & 0x30)
        && ((v22 & 0x1000) == 0 || (v22 & 0x2000) != 0)
        && (v22 & 0xF) != 0
        && (*(_BYTE *)(v23 + 16LL * (unsigned int)v28 + 8) & 0xF) == 5 )
      {
        v29 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * (unsigned int)v28);
        if ( v29 )
        {
          if ( KeGetCurrentIrql() >= 2u )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL) + 192LL) + 64LL)
                            + 40LL);
            if ( *(_DWORD *)(v30 + 28) >= 0x2003u )
            {
              v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v27, v22);
              v31[3] = 275LL;
              v31[4] = 20LL;
              v31[5] = *(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL);
              v31[6] = 0LL;
              v31[7] = 0LL;
              WdLogEvent5_WdCriticalError(v31);
            }
          }
          if ( !ExAcquireRundownProtection(v29 + 11) )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
            v35[3] = 275LL;
            v35[4] = 25LL;
            v35[5] = v29;
            v35[6] = 0LL;
            v35[7] = 0LL;
            WdLogEvent5_WdCriticalError(v35);
          }
          if ( v18 )
            ++*(_DWORD *)(v18 + 136);
          *a2 = v29;
          if ( (a1[2] & 1) != 0 )
            Count = v29[4].Count;
          else
            Count = *(_QWORD *)(v29[6].Count + 16);
          goto LABEL_60;
        }
      }
    }
    goto LABEL_38;
  }
  if ( v25 != 2 )
  {
    v36 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v37 = (int)a1[1];
    goto LABEL_59;
  }
  v38 = PsGetCurrentProcess(v21);
  v40 = PsGetProcessDxgProcess(v38, v39);
  v27 = *a1;
  v22 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v22 >= *(_DWORD *)(v40 + 224)
    || (v23 = *(_QWORD *)(v40 + 208),
        v27 = ((unsigned int)v27 >> 26) & 0x30,
        v28 = *(unsigned int *)(v23 + 16LL * (unsigned int)v22 + 8),
        (_BYTE)v27 != (*(_BYTE *)(v23 + 16LL * (unsigned int)v22 + 8) & 0x30))
    || (v28 & 0x1000) != 0 && (v28 & 0x2000) == 0
    || (v28 & 0xF) == 0
    || (*(_BYTE *)(v23 + 16LL * (unsigned int)v22 + 8) & 0xF) != 4
    || (v41 = *(_QWORD *)(v23 + 16LL * (unsigned int)v22)) == 0 )
  {
LABEL_38:
    v36 = WdLogNewEntry5_WdWarning(v28, v27, v22, v23);
    v37 = *a1;
LABEL_59:
    *(_QWORD *)(v36 + 24) = v37;
    WdLogEvent5_WdWarning(v36);
LABEL_60:
    ExReleasePushLockSharedEx(v47, 0LL);
    goto LABEL_61;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) + 16LL) + 16LL) + 192LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v42 + 28) >= 0x2003u )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v27, v22);
      v43[3] = 275LL;
      v43[4] = 20LL;
      v43[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) + 16LL) + 16LL);
      v43[6] = 0LL;
      v43[7] = 0LL;
      WdLogEvent5_WdCriticalError(v43);
    }
  }
  DxgkReferenceDxgResource((struct DXGRESOURCE *)v41);
  if ( v18 )
    ++*(_DWORD *)(v18 + 136);
  DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v46);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v41 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v41;
  if ( (*(_DWORD *)(v41 + 4) & 1) != 0 )
    Count = *(_QWORD *)(*(_QWORD *)(v41 + 56) + 16LL);
  else
    Count = *(_QWORD *)(v41 + 56);
  if ( v48 == 1 )
    goto LABEL_60;
  if ( v48 == 2 )
  {
    v44 = v47;
    *(_QWORD *)(v47 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v44, 0LL);
LABEL_61:
    KeLeaveCriticalRegion();
  }
  return Count;
}
