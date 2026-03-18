/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C0099470
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C008FB18 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmIsNullVidPn @ 0x1C00BE420 (DmmIsNullVidPn.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  D3DKMDT_HVIDPN hDesiredVidPn; // rcx
  int IsNullVidPn; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 IsVidPnSupported; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[56]; // [rsp+20h] [rbp-38h] BYREF
  char v36; // [rsp+68h] [rbp+10h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 8);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  v36 = 0;
  IsNullVidPn = DmmIsNullVidPn(hDesiredVidPn, &v36);
  v9 = IsNullVidPn;
  if ( IsNullVidPn < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v27[3] = v9;
    v27[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
    v27[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v27);
    goto LABEL_23;
  }
  if ( v36 )
  {
    v28 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
    *(_QWORD *)(v28 + 32) = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v28);
    LODWORD(v9) = 0;
    a2->IsVidPnSupported = 1;
    goto LABEL_23;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_26;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v29 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v29);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_26;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
LABEL_26:
    v17 = 0;
    goto LABEL_14;
  }
  v17 = *(_DWORD *)(v13 + 136);
LABEL_14:
  v9 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 456LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
         a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v17 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v32[3] = 275LL;
    v32[4] = 25LL;
    v33 = *(int *)(v13 + 136);
    v32[7] = 0LL;
    v32[5] = v33;
    v32[6] = v17;
    WdLogEvent5_WdCriticalError(v32);
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
  v22[3] = v9;
  v22[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  v22[5] = a2->hDesiredVidPn;
  IsVidPnSupported = a2->IsVidPnSupported;
  v22[6] = IsVidPnSupported;
  if ( (_DWORD)v9 != -1073741801 && (_DWORD)v9 )
  {
    v34 = WdLogNewEntry5_WdError(IsVidPnSupported);
    *(_QWORD *)(v34 + 24) = v9;
    WdLogEvent5_WdError(v34);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
LABEL_23:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 5025);
  return (unsigned int)v9;
}
