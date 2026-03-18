/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C00B8170
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0065F64 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rax
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR Count; // rbx
  __int64 v12; // r15
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r9d
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _EX_RUNDOWN_REF *v29; // rdi
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v39; // rdi
  __int64 v40; // rcx
  _QWORD *v41; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  Count = 0LL;
  if ( ProcessWin32Process )
  {
    v12 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v13 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v13);
    v12 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v15 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v19 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( v12 != -192 && *(struct _KTHREAD **)(v12 + 200) == KeGetCurrentThread() )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v20 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v20);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v25 = *(_DWORD *)(v12 + 208);
      if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v22, &EventBlockThread, v23, v25);
    }
    ExAcquirePushLockSharedEx(v12 + 192, 0LL);
  }
  v26 = a1[1];
  if ( v26 == 1 )
  {
    v27 = *a1;
    v28 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v12 + 232) )
    {
      v24 = *(_QWORD *)(v12 + 216);
      v27 = ((unsigned int)v27 >> 26) & 0x30;
      v23 = *(unsigned int *)(v24 + 16LL * (unsigned int)v28 + 8);
      if ( (_BYTE)v27 == (*(_BYTE *)(v24 + 16LL * (unsigned int)v28 + 8) & 0x30)
        && (v23 & 0x1000) == 0
        && (v23 & 0xF) != 0
        && (*(_BYTE *)(v24 + 16LL * (unsigned int)v28 + 8) & 0xF) == 5 )
      {
        v29 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * (unsigned int)v28);
        if ( v29 )
        {
          if ( KeGetCurrentIrql() >= 2u )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL) + 176LL) + 64LL)
                            + 40LL);
            if ( *(_DWORD *)(v30 + 28) >= 0x2003u )
            {
              v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v27, v23);
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
          if ( v19 )
            ++*(_DWORD *)(v19 + 136);
          *a2 = v29;
          if ( (a1[2] & 1) != 0 )
            Count = v29[4].Count;
          else
            Count = *(_QWORD *)(v29[6].Count + 16);
          goto LABEL_58;
        }
      }
    }
    goto LABEL_40;
  }
  if ( v26 != 2 )
  {
    v36 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    *(_QWORD *)(v36 + 24) = (int)a1[1];
    goto LABEL_57;
  }
  v37 = *a1;
  Current = DXGPROCESS::GetCurrent();
  v28 = (v37 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v28 >= *((_DWORD *)Current + 58)
    || (v23 = *((_QWORD *)Current + 27),
        v27 = *(unsigned int *)(v23 + 16LL * (unsigned int)v28 + 8),
        ((v37 >> 26) & 0x30) != (*(_BYTE *)(v23 + 16LL * (unsigned int)v28 + 8) & 0x30))
    || (v27 & 0x1000) != 0
    || (v27 & 0xF) == 0
    || (*(_BYTE *)(v23 + 16LL * (unsigned int)v28 + 8) & 0xF) != 4
    || (v39 = *(_QWORD *)(v23 + 16LL * (unsigned int)v28)) == 0 )
  {
LABEL_40:
    v36 = WdLogNewEntry5_WdWarning(v28, v27, v23, v24);
    *(_QWORD *)(v36 + 24) = *a1;
LABEL_57:
    WdLogEvent5_WdWarning(v36);
    goto LABEL_58;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) + 16LL) + 16LL) + 176LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v40 + 28) >= 0x2003u )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v27, v23);
      v41[3] = 275LL;
      v41[4] = 20LL;
      v41[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) + 16LL) + 16LL);
      v41[6] = 0LL;
      v41[7] = 0LL;
      WdLogEvent5_WdCriticalError(v41);
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v39);
  if ( v19 )
    ++*(_DWORD *)(v19 + 136);
  *a2 = (struct _EX_RUNDOWN_REF *)v39;
  if ( (*(_DWORD *)(v39 + 4) & 1) != 0 )
    Count = *(_QWORD *)(*(_QWORD *)(v39 + 56) + 16LL);
  else
    Count = *(_QWORD *)(v39 + 56);
LABEL_58:
  ExReleasePushLockSharedEx(v12 + 192, 0LL);
  KeLeaveCriticalRegion();
  return Count;
}
