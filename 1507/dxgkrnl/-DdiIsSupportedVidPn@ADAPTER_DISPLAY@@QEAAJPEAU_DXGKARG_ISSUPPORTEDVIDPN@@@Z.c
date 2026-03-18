/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C0095540
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0096EE4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005860 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DmmIsNullVidPn @ 0x1C0097344 (DmmIsNullVidPn.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ISSUPPORTEDVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  D3DKMDT_HVIDPN hDesiredVidPn; // rcx
  int IsNullVidPn; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 IsVidPnSupported; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  unsigned __int8 v36; // cl
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  _BYTE v40[56]; // [rsp+20h] [rbp-38h] BYREF
  char v41; // [rsp+68h] [rbp+10h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, a3, a4) + 8);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v6, &EventProfilerEnter, v7, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  v41 = 0;
  IsNullVidPn = DmmIsNullVidPn(hDesiredVidPn, &v41);
  v11 = IsNullVidPn;
  if ( IsNullVidPn < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v32[3] = v11;
    v32[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
    v32[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v32);
    goto LABEL_23;
  }
  if ( v41 )
  {
    v33 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v33 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
    *(_QWORD *)(v33 + 32) = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v33);
    LODWORD(v11) = 0;
    a2->IsVidPnSupported = 1;
    goto LABEL_23;
  }
  Current = DXGPROCESS::GetCurrent(v10);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v40, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_26;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v34 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v34 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v34);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
      goto LABEL_26;
    }
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
  {
LABEL_26:
    v22 = 0;
    goto LABEL_14;
  }
  v22 = *(_DWORD *)(v18 + 136);
LABEL_14:
  v11 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 456LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v35[3] = 275LL;
    v35[4] = 16LL;
    v35[5] = this;
    v35[6] = CurrentIrql;
    v36 = KeGetCurrentIrql();
    v35[7] = v36;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v22 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v37[3] = 275LL;
    v37[4] = 25LL;
    v38 = *(int *)(v18 + 136);
    v37[7] = 0LL;
    v37[5] = v38;
    v37[6] = v22;
    WdLogEvent5_WdCriticalError(v37);
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
  v27[3] = v11;
  v27[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  v27[5] = a2->hDesiredVidPn;
  IsVidPnSupported = a2->IsVidPnSupported;
  v27[6] = IsVidPnSupported;
  if ( (_DWORD)v11 != -1073741801 && (_DWORD)v11 )
  {
    v39 = WdLogNewEntry5_WdError(IsVidPnSupported);
    *(_QWORD *)(v39 + 24) = v11;
    WdLogEvent5_WdError(v39);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
LABEL_23:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 5025);
  return (unsigned int)v11;
}
