/*
 * XREFs of ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0068C88
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00104C0 (-ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0084EB4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateContext(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_CREATECONTEXT *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE v30[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5041);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v30, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_23;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v24 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v24);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
      goto LABEL_23;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v13 = *(_DWORD *)(v9 + 136);
    goto LABEL_12;
  }
LABEL_23:
  v13 = 0;
LABEL_12:
  v15 = (*(int (__fastcall **)(void *, struct _DXGKARG_CREATECONTEXT *))(*((_QWORD *)this + 2) + 624LL))(a2, a3);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v25[3] = 275LL;
    v25[4] = 16LL;
    v25[5] = this;
    v25[6] = CurrentIrql;
    v26 = KeGetCurrentIrql();
    v25[7] = v26;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v13 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v27[3] = 275LL;
    v27[4] = 25LL;
    v28 = *(int *)(v9 + 136);
    v27[7] = 0LL;
    v27[5] = v28;
    v27[6] = v13;
    WdLogEvent5_WdCriticalError(v27);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v18[3] = v15;
  v18[4] = a2;
  v18[5] = a3->hContext;
  v18[6] = a3->ContextInfo.DmaBufferSize;
  v18[7] = a3->ContextInfo.AllocationListSize;
  WdLogEvent5_WdEvent(v18);
  v19 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v19 + 24) = a3->ContextInfo.PatchLocationListSize;
  WdLogEvent5_WdEvent(v19);
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    v29 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v29 + 24) = v15;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 5041);
  return (unsigned int)v15;
}
