/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00865B4
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0084BC4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DmmIsNullVidPn @ 0x1C0085284 (DmmIsNullVidPn.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ISSUPPORTEDVIDPN *a2,
        __int64 a3)
{
  DXGGLOBAL *v3; // rax
  D3DKMDT_HVIDPN hDesiredVidPn; // rcx
  int IsNullVidPn; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  struct _KTHREAD **v15; // rbx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 IsVidPnSupported; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  unsigned __int8 v38; // cl
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  _BYTE v42[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v43; // [rsp+28h] [rbp-30h]
  int v44; // [rsp+30h] [rbp-28h]
  bool v45; // [rsp+68h] [rbp+10h] BYREF

  v3 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v32 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v32 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v32);
    v3 = DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement((volatile signed __int32 *)v3 + 8);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  v45 = 0;
  IsNullVidPn = DmmIsNullVidPn((__int64)hDesiredVidPn, &v45);
  v9 = IsNullVidPn;
  if ( IsNullVidPn < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v33[3] = v9;
    v33[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
    v33[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v33);
    goto LABEL_32;
  }
  if ( v45 )
  {
    v34 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v34 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
    *(_QWORD *)(v34 + 32) = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v34);
    LODWORD(v9) = 0;
    a2->IsVidPnSupported = 1;
    goto LABEL_32;
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v11);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
    v15 = (struct _KTHREAD **)(ProcessDxgProcess + 88);
  else
    v15 = 0LL;
  v44 = 0;
  v43 = v15;
  if ( v15 && v15[1] == KeGetCurrentThread() )
  {
    v35 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v35 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( v14 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v15);
    v44 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_34;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v36 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v36 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v36);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
      goto LABEL_34;
    }
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
  {
LABEL_34:
    v22 = 0;
    goto LABEL_23;
  }
  v22 = *(_DWORD *)(v18 + 136);
LABEL_23:
  v9 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 472LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
         a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v37[3] = 275LL;
    v37[4] = 16LL;
    v37[5] = this;
    v37[6] = CurrentIrql;
    v38 = KeGetCurrentIrql();
    v37[7] = v38;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v22 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v39[3] = 275LL;
    v39[4] = 25LL;
    v40 = *(int *)(v18 + 136);
    v39[7] = 0LL;
    v39[5] = v40;
    v39[6] = v22;
    WdLogEvent5_WdCriticalError(v39);
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
  v27[3] = v9;
  v27[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v27[5] = a2->hDesiredVidPn;
  IsVidPnSupported = a2->IsVidPnSupported;
  v27[6] = IsVidPnSupported;
  if ( (_DWORD)v9 != -1073741801 && (_DWORD)v9 )
  {
    v41 = WdLogNewEntry5_WdError(IsVidPnSupported);
    *(_QWORD *)(v41 + 24) = v9;
    WdLogEvent5_WdError(v41);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
LABEL_32:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 5025);
  return (unsigned int)v9;
}
