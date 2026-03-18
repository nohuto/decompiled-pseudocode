/*
 * XREFs of ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C0121BC0
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C017375C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005860 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_RECOMMENDFUNCTIONALVIDPN *a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v33[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5024);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v33, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
LABEL_13:
      v16 = 0;
      goto LABEL_14;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_13;
  v16 = *(_DWORD *)(v11 + 136);
LABEL_14:
  v18 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_RECOMMENDFUNCTIONALVIDPN *))(*((_QWORD *)this + 2) + 464LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v25 = *(int *)(v11 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v16;
    WdLogEvent5_WdCriticalError(v24);
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v17, v19, v20);
  v26[3] = v18;
  v26[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  v26[5] = a2->NumberOfVidPnTargets;
  if ( a2->NumberOfVidPnTargets )
    v27 = *a2->pVidPnTargetPrioritizationVector;
  else
    v27 = 0LL;
  v26[6] = v27;
  v26[7] = a2->hRecommendedFunctionalVidPn;
  WdLogEvent5_WdEvent(v26);
  if ( (_DWORD)v18 != -1073741801 && (_DWORD)v18 != -1071774941 && (_DWORD)v18 )
  {
    v29 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v29 + 24) = v18;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 5024);
  return (unsigned int)v18;
}
