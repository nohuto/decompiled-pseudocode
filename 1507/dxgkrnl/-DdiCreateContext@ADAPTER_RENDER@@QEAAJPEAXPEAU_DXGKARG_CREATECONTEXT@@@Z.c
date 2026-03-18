/*
 * XREFs of ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0092470
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C000F630 (-ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0073374 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateContext(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_CREATECONTEXT *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // rdi
  struct _KTHREAD **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  unsigned __int8 v41; // cl
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  _BYTE v45[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v46; // [rsp+28h] [rbp-30h]
  int v47; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5041);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v11 = Current;
  if ( Current )
    v12 = (struct _KTHREAD **)((char *)Current + 96);
  else
    v12 = 0LL;
  v47 = 0;
  v46 = v12;
  if ( v12 && v12[1] == KeGetCurrentThread() )
  {
    v38 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v38 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( v11 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v12);
    v47 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_32;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v39 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v39 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v39);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
      goto LABEL_32;
    }
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v22 = *(_DWORD *)(v18 + 136);
    goto LABEL_19;
  }
LABEL_32:
  v22 = 0;
LABEL_19:
  v24 = (*(int (__fastcall **)(void *, struct _DXGKARG_CREATECONTEXT *))(*((_QWORD *)this + 2) + 624LL))(a2, a3);
  v27 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v27 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v23, v25);
    v40[3] = 275LL;
    v40[4] = 16LL;
    v40[5] = this;
    v40[6] = CurrentIrql;
    v41 = KeGetCurrentIrql();
    v40[7] = v41;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v22 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v23, v25);
    v42[3] = 275LL;
    v42[4] = 25LL;
    v43 = *(int *)(v18 + 136);
    v42[7] = 0LL;
    v42[5] = v43;
    v42[6] = v22;
    WdLogEvent5_WdCriticalError(v42);
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, v23, v25, v26);
  v28[3] = v24;
  v28[4] = a2;
  v28[5] = a3->hContext;
  v28[6] = a3->ContextInfo.DmaBufferSize;
  v28[7] = a3->ContextInfo.AllocationListSize;
  WdLogEvent5_WdEvent(v28);
  v33 = WdLogNewEntry5_WdEvent(v30, v29, v31, v32);
  *(_QWORD *)(v33 + 24) = a3->ContextInfo.PatchLocationListSize;
  WdLogEvent5_WdEvent(v33);
  if ( (_DWORD)v24 != -1073741801 && (_DWORD)v24 )
  {
    v44 = WdLogNewEntry5_WdError(v34);
    *(_QWORD *)(v44 + 24) = v24;
    WdLogEvent5_WdError(v44);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 5041);
  return (unsigned int)v24;
}
