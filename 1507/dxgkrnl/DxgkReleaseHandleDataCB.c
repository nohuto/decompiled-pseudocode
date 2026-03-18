/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C00A9380
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rbx
  struct DXGPROCESS *v8; // rbp
  __int64 v9; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  struct _EX_RUNDOWN_REF *v18; // rdi
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  _BYTE v29[40]; // [rsp+20h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent(a1);
  CurrentThread = KeGetCurrentThread();
  v8 = Current;
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v9 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3, v5, v6);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, v8);
  v17 = *(_DWORD *)(a1 + 8);
  if ( v17 == 1 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v19 + 24) = 309LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = v18 + 11;
  }
  else
  {
    if ( v17 != 2 )
    {
      v28 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v28 + 24) = *(int *)(a1 + 8);
      WdLogEvent5_WdError(v28);
      goto LABEL_21;
    }
    v21 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v22 + 24) = 330LL;
      WdLogEvent5_WdAssertion(v22);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v21[10]);
    v20 = v21 + 9;
  }
  ExReleaseRundownProtection(v20);
  if ( v12 )
  {
    if ( --*(_DWORD *)(v12 + 136) < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
      v27[3] = 275LL;
      v27[4] = 25LL;
      v27[5] = *(int *)(v12 + 136);
      v27[6] = 0LL;
      v27[7] = 0LL;
      WdLogEvent5_WdCriticalError(v27);
    }
  }
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
}
