/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0124098
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C015DD44 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5022);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_13:
      v15 = 0;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_13;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_14:
  v17 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 54))(*((_QWORD *)this + 28), a2);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v23[3] = 275LL;
    v23[4] = 25LL;
    v24 = *(int *)(v10 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v15;
    WdLogEvent5_WdCriticalError(v23);
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v16, v18, v19);
  v25[3] = v17;
  v25[4] = *((_QWORD *)this + 28);
  v25[5] = a2->hDevice;
  v25[6] = a2->PrivateDriverDataSize;
  if ( a2->PrivateDriverDataSize <= 4 )
    v26 = 0LL;
  else
    v26 = *(unsigned int *)a2->pPrivateDriverData;
  v25[7] = v26;
  WdLogEvent5_WdEvent(v25);
  if ( (_DWORD)v17 == -1073741823 )
  {
    v32 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
    *(_QWORD *)(v32 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v32);
  }
  else if ( (_DWORD)v17 != -1073741811
         && (_DWORD)v17 != -1073741801
         && (_DWORD)v17 != -1073741795
         && (_DWORD)v17 != -1073741674
         && (_DWORD)v17 )
  {
    v31 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v31 + 24) = v17;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 5022);
  return (unsigned int)v17;
}
