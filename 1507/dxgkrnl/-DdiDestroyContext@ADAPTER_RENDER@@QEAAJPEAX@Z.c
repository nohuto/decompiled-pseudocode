/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00922DC
 * Callers:
 *     ?ADAPTER_RENDER_DdiDestroyContext@@YAJPEAVADAPTER_RENDER@@QEAX@Z @ 0x1C001CD90 (-ADAPTER_RENDER_DdiDestroyContext@@YAJPEAVADAPTER_RENDER@@QEAX@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007305C (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, void *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // rdi
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int8 v35; // cl
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _BYTE v39[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v40; // [rsp+28h] [rbp-30h]
  int v41; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5042);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v10 = Current;
  if ( Current )
    v11 = (struct _KTHREAD **)((char *)Current + 96);
  else
    v11 = 0LL;
  v41 = 0;
  v40 = v11;
  if ( v11 && v11[1] == KeGetCurrentThread() )
  {
    v32 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v32 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( v10 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v11);
    v41 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v17 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v33 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v33 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v33);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12, v14, v15);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v17 = 0LL;
      goto LABEL_29;
    }
    v17 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
  {
    v21 = *(_DWORD *)(v17 + 136);
    goto LABEL_19;
  }
LABEL_29:
  v21 = 0;
LABEL_19:
  v23 = (*(int (__fastcall **)(void *))(*((_QWORD *)this + 2) + 632LL))(a2);
  v26 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v26 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v34[3] = 275LL;
    v34[4] = 16LL;
    v34[5] = this;
    v34[6] = CurrentIrql;
    v35 = KeGetCurrentIrql();
    v34[7] = v35;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( v17 && *(_DWORD *)(v17 + 136) != v21 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v36[3] = 275LL;
    v36[4] = 25LL;
    v37 = *(int *)(v17 + 136);
    v36[7] = 0LL;
    v36[5] = v37;
    v36[6] = v21;
    WdLogEvent5_WdCriticalError(v36);
  }
  v27 = WdLogNewEntry5_WdEvent(v26, v22, v24, v25);
  *(_QWORD *)(v27 + 24) = v23;
  *(_QWORD *)(v27 + 32) = a2;
  WdLogEvent5_WdEvent(v27);
  if ( (_DWORD)v23 )
  {
    v38 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v38 + 24) = v23;
    WdLogEvent5_WdError(v38);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 5042);
  return (unsigned int)v23;
}
