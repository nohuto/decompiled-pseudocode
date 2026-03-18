/*
 * XREFs of ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C014B734
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007A60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_RECOMMENDFUNCTIONALVIDPN *a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  _BYTE v34[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5024);
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v34, ProcessDxgProcess);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
LABEL_13:
      v18 = 0;
      goto LABEL_14;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    goto LABEL_13;
  v18 = *(_DWORD *)(v13 + 136);
LABEL_14:
  v20 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_RECOMMENDFUNCTIONALVIDPN *))(*((_QWORD *)this + 2) + 480LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19, v21);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19, v21);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v13 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v18;
    WdLogEvent5_WdCriticalError(v25);
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v22);
  v27[3] = v20;
  v27[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v27[5] = a2->NumberOfVidPnTargets;
  if ( a2->NumberOfVidPnTargets )
    v28 = *a2->pVidPnTargetPrioritizationVector;
  else
    v28 = 0LL;
  v27[6] = v28;
  v27[7] = a2->hRecommendedFunctionalVidPn;
  WdLogEvent5_WdEvent(v27);
  if ( (_DWORD)v20 != -1073741801 && (_DWORD)v20 != -1071774941 && (_DWORD)v20 )
  {
    v30 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v30 + 24) = v20;
    WdLogEvent5_WdError(v30);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v31, &EventProfilerExit, v32, 5024);
  return (unsigned int)v20;
}
